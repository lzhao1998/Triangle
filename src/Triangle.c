#include "Triangle.h"

int add(int v1 ,int v2)
{
  int result = v1 + v2;
  return result;
}

int minus(int v1, int v2)
{
  int result = v1 - v2;
  return result;
}

char *getTriangleName(int a, int b, int c)
{
  if(a < 1 || b < 1 || c < 1)             //if the length is 0 or negative, return not triangle
  {
    return "It is not a triangle";
  }
  else
  {
    if(a == b && b == c && c == a)        //if all the side is the same, return equilateral
    {
      return "equilateral";
    }
    else if(a == b || b == c || c == a)   //if only both side is same, return isoceles
    {
      return "isosceles";
    }
    else
    {
      return "scalene";                   //if all side is not same, return scalene
    }
  }
}
