// C++ code
//Inicialização de Variaveis

int idade = 15.987;//declara/cria a variavel idade e ja inicia com o valor 
String nome = "Anne";
String segundoNome = "Nicole";
float nota = 9,5;//numeros reais ou numeros quebrados 
  
  
void setup()
{
  Serial.begin(9600);//inicia a serial
}

void loop()
{
  Serial.println(idade);//imprime o valor da variavel 15
  idade = idade + 1;//15 + 1
  Serial.println(idade);//16
  
  Serial.print(nome + " ");//imprime o valor da variavel nome junto com um espaço vazio
  Serial.println(segundoNome);
  
  delay(10000);
  
}