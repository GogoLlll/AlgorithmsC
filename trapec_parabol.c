#include <stdio.h>
#include <math.h>

double f(double x){
        double f;
        f = pow(x,2)+4;
        return f;
}

int main(){
	int v;
	int i;
        double a, b;
        double n;
        double h;
        double sum = 0;
	printf("Приветствую,тожарищ, если ты это читаешь, то значит ты используешь программу Гоголя, так что соболезную.\nчтобы посчитать интеграл методом парабол - нажмите 1, для метода трапеций - 2 \n");
	scanf("%d",&v );
	printf("Введите левую границу интегрирования a = ");
	scanf("%lf", &a);
	printf("Введите правую границу интегрирования b = ");
        scanf("%lf", &b);
	printf("Введите число узлов n = ");
	scanf("%lf", &n);
	h = (b-a)/n;
	if(v == 1){
		for(i=0; i<n; i++){

                double x1 = a + i*h;
                double x2 = a + (i+1)*h;

                sum = sum + ((x2-x1)/6*(f(x1)+4*f((x1+x2)/2)+f(x2)));


        }

	}
	else{
		for(i=0; i<n; i++){

			double x1 = a + i*h;
    	                double x2 = a + (i+1)*h;

			sum = sum + ((f(x1)+f(x2))/2)*h;

		}

	}

	printf("Ответ = %g", sum);
	return 0;

}	
