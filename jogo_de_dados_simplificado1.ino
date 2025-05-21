// C++ code

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(" ");
  Serial.println(" " );
  Serial.println("--- PROGRAMA JOGO DE DADOS ---");
  Serial.println(" ");
  Serial.println(" " );
 
 //pedir o papilte do usuario
  Serial.println("Digite um palpite de 1 a 6");
  while(! Serial.available());
  int palpite = Serial.parseInt();
  
  //sortear o dado
  int numeroSorteado = random(1, 7);// gera um numero aleatorio entre 1 e 6
  
  
  
  Serial.println("Seu palpite: " + String(palpite));
  Serial.println("Numero do dado: " + String(numeroSorteado));
  
  
  if(palpite == numeroSorteado)
  {
    Serial.println("Parabens, voce acertou!");
  }else {
    Serial.println("Que pena, tente outra vez!");
  }
  delay(1000); 
}