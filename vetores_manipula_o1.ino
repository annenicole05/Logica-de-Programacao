
void setup()
{
 Serial.begin(9600);
}

void loop()
{  //       indices    0          1        2        3
   //        tamanho
  String nomes[4] = {"Eduardo", "Lucas", "Rafa", "Salgado"};
  int idades[4];
  
  for(int i = 0; i < 4; i++){
    Serial.println("Digite a idade de " + nomes[i]);
    while(!Serial.available());
    idades[i] = Serial.parseInt();
  }
  
  

  //Exibir os todos os nomes do array
  for(int i = 0; i < 4; i++)
  {//roda de 0 - 3
    Serial.println(String(i + 1) + "o Nome: " + nomes[i]);
    Serial.println( "idade: " + String(idades[i]));
    Serial.println();
  }
  
  
  delay(2000);//pausa 2 segundos
  
  }
                        