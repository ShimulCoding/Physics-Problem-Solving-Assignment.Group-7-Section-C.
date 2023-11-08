#include <stdio.h>
#include <math.h>
int main()
{
     double lemda, a1, a2, a3, z, theta1, theta2, theta3;
    long long int m;
    printf("PLEASE ENTER THE WAVELENGTH OF THE LIGHT OF YOUR EXPERIMENT DENOTED BY lemda( in nm ) = ");
    scanf("%lf", &lemda);
    printf("\n");
    printf("PLEASE ENTER IN WHICH ORDER YOU WANT TO COMPARE IN YOUR EXPERIMENT DENOTED BY  m   = ");
    scanf("%lld", &m);
    printf("\n");
    printf("PLEASE ENTER THE WIDTH OF 1ST SLIT OF YOUR EXPERIMENT DENOTED BY a1( in micrometer ) = ");
    scanf("%lf", &a1);
    printf("\n");
    printf("PLEASE ENTER THE WIDTH OF 2ND SLIT OF YOUR EXPERIMENT DENOTED BY a2( in micrometer ) = ");
    scanf("%lf", &a2);
    printf("\n");
    printf("PLEASE ENTER THE WIDTH OF 3RD SLIT OF YOUR EXPERIMENT DENOTED BY a3( in micrometer ) = ");
    scanf("%lf", &a3);
    printf("\n");
    lemda=(lemda*1e-9);
    a1=(a1*1e-6);
    a2=(a2*1e-6);
    a3=(a3*1e-6);
    if (lemda < 380e-9 || lemda > 750e-9)
     {
    printf("Out of the range. Please enter a valid number.");
     }

    else if (a1 <= 0 || a2 <= 0 || a3 <= 0)
    {
        //Because of 0 answer will be undifined and distance can not be negative.
        printf("INVALID INPUT a1 or a2 or a3 !! THE VALUE OF a1 or a2 or a3 SHOULD BE  GREATER THAN 0.");
    }
    else if (m < 0)
    {
        printf("INVALID INPUT m !! ");
    }
    else
    {   //Calculating theta 1 for a1 slit.
        theta1 = (double)lemda * m;
        theta1 = (double)theta1 / a1;//using the formula, a1sinθ1=mλ for single slit diffraction.
        theta1 = (double)asin(theta1);

        //Calculating theta 2 for a2 slit.
        theta2 = (double)lemda * m;
        theta2 = (double)theta2 / a2;//using the formula, a2sinθ2=mλ for single slit diffraction.
        theta2 = (double)asin(theta2);

        //Calculating theta 3 for a3 slit.
        theta3 = (double)lemda * m;
        theta3 = (double)theta3 / a3;//using the formula, a3sinθ3=mλ for single slit diffraction.
        theta3 = (double)asin(theta3);

        //finding the largest theta value.
        z = (theta1 > theta2) ? (((theta1 > theta3) ? (theta1) : (theta3))) : (((theta2 > theta3) ? (theta2) : (theta3)));

        if (z == theta1 && z == theta2 && z == theta3)
        {
            printf("All the Slits Bend The Light most and equally.");
        }

        else if (z == theta1 && z == theta2)
        {
            printf("1st Slit or a1 Slit and 2nd Slit or a2 Slit Bend The Light most and equally.");
        }

        else if (z == theta1 && z == theta3)
        {
            printf("1st Slit or a1 Slit and 3rd Slit or a3 Slit Bend The Light most and equally.");
        }

        else if (z == theta2 && z == theta3)
        {
            printf("2nd Slit or a2 Slit and 3rd Slit or a3 Slit Bend The Light most and equally.");
        }

        else if (z == theta1)
        {
            printf("1st Slit or a1 Slit Bend The Light Most.");
        }

        else if (z == theta2)
        {
            printf("2nd Slit or a2 Slit Bend The Light Most.");
        }

        else if (z == theta3)
        {
            printf("3rd Slit or a3 Slit Bend The Light Most.");
        }
    }
    return 0;
}

