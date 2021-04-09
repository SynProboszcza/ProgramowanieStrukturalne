#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//2*a*x^2+b*x-8=0

int main()
{
    float a = 0.0;
    float b = 0.0;
    float c = -8.0;
    float delta = 0.0;
    float x1 = 0.0;
    float x2 = 0.0;
    float x0 = 0.0;
    float pierwiastekdelta = 0.0;
    printf("Podaj a:\n");
    scanf("%f", &a);
    printf("Podaj b:\n");
    scanf("%f", &b);
    //printf("a:%f\n", a);
    //printf("b:%f\n", b);
    a*=2; //bo w przykladzie jest 2*a
    printf("%f*x^2+%fx-8=0\n",a,b);

    delta = b*b-4*a*c;
    if(delta<0){
    	printf("Nie ma rozwiazan\n");
    }
    else if(delta==0){
    	printf("Istnieja jedno rozwiazanie\n");
    	x0 = -5/2*a;
	    printf("x0:%f\n",x0);
    }
    else {
    	printf("Istnieje dwa rozwiazania\n");
    	pierwiastekdelta = sqrt(delta);
	    x1 = -1*b-pierwiastekdelta;
	    printf("x1:%f\n",x1);
	    printf("x2:%f\n",x2);
	    //printf("pier%f\n",sqrt(4.0));
	}
	//getch();
    return 0;
}
