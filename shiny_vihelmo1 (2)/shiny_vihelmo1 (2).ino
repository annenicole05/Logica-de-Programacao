//Faça um programa que receba o ano de nascimento de uma pessoa e 
//ano atual. Calcule e imprima
//a. A idade dessa pessoa 
//b. Essa idade convertida em semana

int anoDeNascimento = 0;
int anoAtual = 0;
int idade = 0;
int idadeSemana = 0;
void setup()
{
  Serial.begin(9600);
    
}

void loop()
{
  //Entrada
  Serial.println("Qual seu ano de nascimento?");
  while( !Serial.parseInt() );
  anoDeNascimento = Serial.parseInt();
  
  Serial.println("Qual o ano atual?");
  while( !Serial.available() );
  anoAtual = Serial.parseInt();
  
  
  //processamento
  idade = anoAtual - anoDeNascimento;
  idadeSemana = idade * 52;
  
  //Saida
  Serial.println("Idade:" + String(idade) );
  Serial.println("idadeSemana: " + String(idade) );
  
}