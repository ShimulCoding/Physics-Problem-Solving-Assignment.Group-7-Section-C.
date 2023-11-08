#include <stdio.h>
#include <math.h>
int main()
{
     double d,theta1,theta2,lemda1,lemda2,m1,m2,p1,p2,q1,q2;
        int n1,n2;
     //order for green light.
      n1=3;
      //order for red light.
      n2=2;
      theta1=65;
      //wavelength for green light.
      lemda1=530e-9;
      //wavelength for red light.
      lemda2=700e-9;
      p1=(double)3.14159/180;
      q2=(double)180/3.14159;
      // m1 representing the multiplication result of λ1 and order n1.
      m1=(double)n1*lemda1;
      //converting theta 1 into radian.
      theta1=(double)theta1*p1;
      //q1 representing the value of sinθ1.
      q1=(double)sin(theta1);
      //Calculating d
      d=(double)m1/q1;
      // m2 representing the multiplication result of λ2 and order n2.
      m2=(double)n2*lemda2;
      //p2 representing the value of sinθ2.
      p2=(double)m2/d;
      //calculating theta 2(in Radian) for 2nd order of 700nm wavelength (Red)light.
      theta2=asin(p2);
      printf("The Angle of the Second Order Bright Spot for Red light is = %.10lf rad or ",theta2);
      //converting theta 2 into degree.
      theta2=(double)theta2*q2;
      printf("%.10lf°",theta2);
    return 0;
}
