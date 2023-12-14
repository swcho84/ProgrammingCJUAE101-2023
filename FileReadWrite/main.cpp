#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

typedef struct
{
  double dLabel;
  double xmin;
  double ymin;
  double xmax;
  double ymax;
} BboxInfo;

// writing data using fprintf in the txt file
//int WritingTxtFile()
//{
//  // opening the file with the write mode
//  char *strFileInfo = "C:\\Users\\USER\\Documents\\ProgrammingCJUAE101-2023\\FileReadWrite\\hello.txt";
//  printf("File opening..:%s\n", strFileInfo);
//  FILE *fp = fopen(strFileInfo, "r+w");
//
//  // excepting the NULL case
//  if (fp == NULL)
//  {
//    printf("Please check file status..\n");
//    return 1;
//  }
//
//  // do something
//  // based on the variable type
//  printf("Success:starting file writing.., %s\n", strFileInfo);
//  int nTemp = 100;
//  char *strTemp = "Hello,world!!(feat.file i/o)";
//  fprintf(fp, "%s %d\n", strTemp, nTemp);
//  fprintf(fp, "second line: %s\n", strTemp);
//
//  // closing file
//  fclose(fp);
//  printf("File closing..\n");
//
//  return 0;
//}

// reading data using fgets from the txt file
int ParsingLineExample1()
{
  FILE *fp;
  char line[1024];
  size_t len = sizeof(line);

  char *strFileInfo = "C:\\Users\\USER\\Documents\\ProgrammingCJUAE101-2023\\FileReadWrite\\yolo_label_data.txt";
  printf("File opening..:%s\n", strFileInfo);
  fp = fopen(strFileInfo, "r");
  if (fp == NULL)
  {
    printf("Please check file status..\n");
    return 1;
  }

  const int nMaxLabel = 10;
  char *strRes[nMaxLabel] = {NULL};
  int nCounter = 0;

  while (fgets(line, len, fp) != NULL)
  {
    line[strcspn(line, "\n")] = 0;
    printf("Retrieved line: %s\n", line);

    if (nCounter < nMaxLabel)
    {
      char *newstrptr = (char*)malloc(strlen(line) + 1);
      strcpy(newstrptr, line);
      strRes[nCounter] = newstrptr;
      nCounter++;
    }
  }

  printf("\nResult: reading the label info:\n");
  for (int i = 0; i < nCounter; i++)
    printf("[%d]%s\n", i, strRes[i]);

  for (int i = 0; i < nCounter; i++)
    free(strRes[i]);

  fclose(fp);
  printf("File closing..\n");
  return 0;
}

// reading data using getline from the txt file
// spliting data using strtok
int ParsingLineExample2()
{
  FILE *fp;
  char line[1024];
  size_t len = sizeof(line);

  char *strFileInfo = "C:\\Users\\USER\\Documents\\ProgrammingCJUAE101-2023\\FileReadWrite\\yolo_bbox_data.txt";
  printf("File opening..:%s\n", strFileInfo);
  fp = fopen(strFileInfo, "r");
  if (fp == NULL)
  {
    printf("Please check file status..\n");
    return 1;
  }

  const int nMaxBboxData = 20;
  const int nBboxDataSize = 5;
  double *dRes[nMaxBboxData] = {NULL};
  int nCounter = 0;

  while (fgets(line, len, fp) != NULL && nCounter < nMaxBboxData)
  {
    line[strcspn(line, "\n")] = 0;

    double* newdBboxPtr = (double*)malloc(sizeof(double) * nBboxDataSize);
    char *ptr = strtok(line, " ");
    int i = 0;

    while (ptr != NULL && i < nBboxDataSize)
    {
      newdBboxPtr[i] = atof(ptr);
      ptr = strtok(NULL, " ");
      i++;
    }

    dRes[nCounter] = newdBboxPtr;
    nCounter++;
  }

  printf("\nResult: reading the bbox info:\n");
  for (int ii = 0; ii < nCounter; ii++)
  {
    printf("[%d]bbox(label, xmin, ymin, xmax, ymax)\n", ii);
    for (int jj = 0; jj < nBboxDataSize; jj++)
      printf("%.4lf ", dRes[ii][jj]);

    printf("\n");
    free(dRes[ii]);
  }

  fclose(fp);
  printf("File closing..\n");
  return 0;
}

// reading data using getline from the txt file
// spliting data using strtok
int ParsingLineExample3() {
  FILE *fp;
  char line[1024]; // 고정된 크기의 버퍼
  size_t len = sizeof(line);

  char *strFileInfo = "C:\\Users\\USER\\Documents\\ProgrammingCJUAE101-2023\\FileReadWrite\\yolo_bbox_data.txt";
  printf("File opening..:%s\n", strFileInfo);
  fp = fopen(strFileInfo, "r");
  if (fp == NULL)
  {
    printf("Please check file status..\n");
    return 1;
  }

  const int nMaxBboxData = 20;
  BboxInfo *dRes[nMaxBboxData] = {NULL};
  int nCounter = 0;

  while (fgets(line, len, fp) != NULL && nCounter < nMaxBboxData)
  {
    line[strcspn(line, "\n")] = 0;

    char *ptr = strtok(line, " ");
    int i = 0;
    BboxInfo* newdBboxPtr = (BboxInfo*)(malloc(sizeof(BboxInfo)));
    while (ptr != NULL)
    {
      double value = atof(ptr);
      switch(i)
      {
        case 0: newdBboxPtr->dLabel = value; break;
        case 1: newdBboxPtr->xmin = value; break;
        case 2: newdBboxPtr->ymin = value; break;
        case 3: newdBboxPtr->xmax = value; break;
        case 4: newdBboxPtr->ymax = value; break;
      }
      ptr = strtok(NULL, " ");
      i++;
    }

    dRes[nCounter] = newdBboxPtr;
    nCounter++;
  }

  printf("\nResult: reading the bbox info:\n");
  for (int ii = 0; ii < nCounter; ii++)
  {
    printf("[%d] bbox(label, xmin, ymin, xmax, ymax): ", ii);
    printf("%.4lf %.4lf %.4lf %.4lf %.4lf\n",
           dRes[ii]->dLabel, dRes[ii]->xmin, dRes[ii]->ymin, dRes[ii]->xmax, dRes[ii]->ymax);
    free(dRes[ii]);
  }

  fclose(fp);
  printf("File closing..\n");
  return 0;
}

int main()
{
//  WritingTxtFile();
//  ParsingLineExample1();
//  ParsingLineExample2();
  ParsingLineExample3();

  // related in C of windows (system("pause"))
  int c = getchar();
  return 0;
}