#include <stdio.h>

#define CM2M 0.01
#define M2CM 100

// converting from [cm] to [m]
float ConvCM2M(float fIn)
{
  return fIn * CM2M;
}

// converting from [m] to [cm]
float ConvM2CM(float fIn)
{
  return fIn * M2CM;
}

// main loop
int main(void)
{
  // initializing variables
  float fDist = 0.0f;
  float fRes = 0.0f;

  // setting input variable
  printf("Input your distance[cm]:\n");
  scanf("%f", &fDist);

  // converting variable, from [cm] to [m]
  fRes = ConvCM2M(fDist);

  // printing result
  printf("Output: %.4f[m]\n", fRes);

  return 0;
}