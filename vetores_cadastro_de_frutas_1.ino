// C++ code
//Variaveis Globais

String frutas[5];//vetor vazio tamanho 5 - de 0 a 4
float precoFrutas[5];

void setup()
{
  Serial.begin(9600);
  Serial.println(" ****** PROGRAMA CADASTRO DE FRUTAS ******");
  Serial.println();
}

void loop()
{
  for(int i = 0; i < 5; i++)
 {
    Serial.println("Digite uma fruta para cadastrar");
    while(! Serial.available());
    frutas[i] = Serial.readString();
    
   Serial.println("Digite o preco da fruta");
   while(! Serial.available());
   precoFrutas[i] = Serial.parseFloat(); 
   
   Serial.println("Digite a quantidade de fruta no estoque");
   while(! Serial.available());
   precoFrutas[i] = Serial.parseFloat(); 
  }
  
  
 
  //Exibir os dados cadastrados
 Serial.println(" ******* Listagem das frutas ******");
 Serial.println();
  
 
  //usar o for para exibir as frutas cadastradas
  for(int i = 0; i < 5; i++)
  {
    Serial.println("produto: " + frutas[i]);
    Serial.println("preco: R$ " + String(precoFrutas[i]));\
    Serial.println("quantidade de frutas");
  }
  
  Serial.println();
  delay(3000);
  
}//fim do loop
  