#include <stdio.h>

int main(){
    //declaraçao de variaveis
    float area;
    float base = 4;
    float altura = 7;

    //quadrado
    area = base * altura;
    printf("A area do quadrado e: %.1f\n",area);

    //triangulo
    area = (base * altura)/2;
    printf("A area do triangulo e: %.1f\n",area);

    //circulo
    float pi = 3.1415;
    float raio;
    area = pi * (raio * raio);
    printf("Area do circulo e: %f\n", area);

    //trapezio
    float baseMaior,basemenor,altura;
    area = ((baseMaior + basemenor)*altura)/2;
    printf("Area do trapeizo %f\n", area);

    //retangulo
    area = base * altura;
    printf("Area do retangulo %f\n",area);

    //losango
    float diagonalMaior,diagonalMenor;
    area = (diagonalMaior * diagonalMenor)/2;
    printf("Area do losango %f\n",area);





return 0;
}
