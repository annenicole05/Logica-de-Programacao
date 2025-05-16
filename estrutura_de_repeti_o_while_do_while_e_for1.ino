
/*While - E uma estrutura de repeticao que so executa a repeticao 


A funcao SETUR() tem como objetivo de inicializar o programa. Podemos chamar 
 de configuracao.
*/

void setup()
{
 Serial.begin(9600);
  
 /*
 
 
 */

 //Variavel inicializadora

  int contadorWhile = 1;

 while(contadorWhile <= 5){
   Serial.println(contadorWhile);
   contadorWhile++;
 }
  
}

void loop(){



  int contadorWhite = 0;

 while(contadorWhite <= 100){
  Serial.println(contadorWhite);
  contadorWhite+= 5;
}

  
   int contadorWhite2 = 0;

 while(contadorWhite2 <= 100){
  Serial.println(contadorWhite2);
  contadorWhite2+= 2;
 }




}


   int contadorWhite3 = 1;

 while(contadorWhite3 <= 100){
  Serial.println(contadorWhite3);
  contadorWhite3+= 2 ;
 }  


 

}
 