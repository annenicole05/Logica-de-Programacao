
void setup()
{
 Serial.begin(9600);
}

void loop()
{  //       indices    0          1        2        3
   //        tamanho
  String nomes[4] = {"Eduardo", "Lucas", "Rafa", "Salgado"};
  Serial.println(nomes[2]); //imprime o valor/elemento que esta no indice/caixinha 2

    nomes[2] = "Diogo";

    Serial.println(nomes[2]); //imprime o texto "Diogo" que e o 3o elemento (indice 2)

   int idades[5];//vria um vetor vazio tamanho 5 (0-4)
 
   idades[0] = 50;
   idades[1] = 55;
   idades[2] = 5;
   idades[3] = 15;
   idades[4] = 12;
  
  Serial.println(idades[0]);//50
  Serial.println(idades[1]);//55
  Serial.println(idades[2]);//5
  Serial.println(idades[3]);//15
  Serial.println(idades[4]);//12
  Serial.println(idades[5]);//??
  delay(2000);//pausa 2 segundos
   //fim do loop
  
}
                        