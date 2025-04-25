//Faça um programa que recebe a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//declaração de Variaveis
int idade = 0;
int idadeMeses = 0;
int idadeDias = 0;
int idadeHoras = 0;
int idadeMinutos = 0;

void setup()
{
   Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("Digite sua idade em anos");//mostra msg na tela
  while( !Serial.available() );// espera o usuario dar <Enter>
  idade = Serial.parseInt();//transforma a idade digitada em numero
  
  //Processamento
  idadeMeses = idade * 12;
  idadeDias = idade * 360;
  idadeHoras = idade * 8766;
  idadeMinutos = idade * 525960;
  
  
  //Saida
  Serial.println("Idade em meses: " + String(idadeMeses) );//imprime o texto
  Serial.println("Idade em dias: " + String(idadeDias) );//imprime o texto
  Serial.println("Idade em horas: " + String(idadeHoras) );//imprime o texto
  Serial.println("Idade em minutos: " + String(idadeMinutos) );//imprime o texto
  
  delay(1000);
  
}