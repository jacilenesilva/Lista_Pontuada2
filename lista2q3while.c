#include <stdio.h>

int main (){
    float salario = 0, mediasalario = 0, mediafilhos = 0, maiorsalario, perc100 = 0;
    int numfilhos, entrevistados = 0;


    printf("Qual seu salario? \n");
          scanf ("%f", &salario);

    while( salario >= 0) {

        
        printf ("Quantos filhos você tem? \n");
          scanf ("%d", &numfilhos);
       
        mediasalario = mediasalario + salario;
        mediafilhos = mediafilhos + numfilhos; 
        entrevistados++;

     if (salario <= 100.0){
        perc100++;
     }

     if ( salario == 0){
        maiorsalario = salario;
     } else if ( salario > maiorsalario){
        maiorsalario = salario;
     }
     printf("Qual seu salario? \n");
          scanf ("%f", &salario);
     }
      
     if (entrevistados > 0){

     mediasalario = mediasalario / entrevistados;
     mediafilhos = mediafilhos / entrevistados;

       printf ("Media de salario da população: %.2f \n", mediasalario);
       printf ("Media de filhos da população: %.2f \n", mediafilhos);
       printf ("Maior salario: %.2f \n", maiorsalario);
      printf ("salario menor que 100: %.2f \n", (perc100/entrevistados)*100);
     }
      return 0;
}