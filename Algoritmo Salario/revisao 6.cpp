#include <stdio.h>
#include <conio.h>

main(){// estou testando as modificaçoes dos algoritmos MOD 1

float salario,i,num;

printf("Informe o numero de funcionarios: ");
scanf("%f",&num);


for(i=0;i<num;i++){

printf("\nInforme o salario do funcionario: ");
scanf("%f",&salario);

if(salario<=500){
salario=salario*1.05;
}

else if(salario<1200){
salario=salario+1.12;
}

if(salario<=600){
salario=salario+150;
}

else{
salario=salario+100;
}

printf("\nO novo salario e: %f",salario);
}

getche();
} // teste 2 nos algoritmos//
