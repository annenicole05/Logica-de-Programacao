int escolhaDaOperacao;
float resultado; //Ira guardar o resultado do calculo da respectiva operacao

//tiporetorno nomedaNomeDaFuncao parametros corpo
float somar(float numero1Param, float numero2Param)
{
  resultado = numero1Param + numero2Param;
  return resultado;
  // Serial.println("O resultado da soma foi: " +  String(resultado)); 
}
float dividir(float numero1Param, float numero2Param)
{
  resultado = numero1Param / numero2Param;
  return resultado;
  // Serial.println("O resultado da divisao foi: " +  String(resultado)); 
}
float subtrair(float numero1Param, float numero2Param)
{
  resultado = numero1Param - numero2Param;
  return resultado;
  // Serial.println("O resultado da subtracao foi: " +  String(resultado));
}  
float multiplicar (float numero1Param, float numero2Param)
{
  resultado = numero1Param * numero2Param;
  return resultado;
  // Serial.println("O resultado da multiplicacao foi: " +  String(resultado)); 
}


void setup()
{
  Serial.begin(9600);

  int contador = 0; //variavel inicializadora do 'do while'
  float numero1; //variavel local
  float numero2;


  //n e um entender via texto
  do{
    Serial.println("Bem-vindo(a) a calculadora inteligente :P!!!\n");
    Serial.println("Escolha uma das operacoes:");
    Serial.println("1 - Somar");
    Serial.println("2 - Dividir");    
    Serial.println("3 - Subtrair");
    Serial.println("4 - Multiplicar");
    while(!Serial.available()){}
    escolhaDaOperacao = Serial.parseInt();



    Serial.println("Par conseguirmos fazer a operacao matematica,precisamos que voce digite 2 numeros");
    Serial.println("Digite o 1 numero:");
    while(!Serial.available()){}
    numero1 = Serial.parseFloat();

    Serial.println("Agora, digite o 2 numeros");
    Serial.println("Digite o 1 numero:");
    while(!Serial.available()){}
    numero2 = Serial.parseFloat(); 

    switch(escolhaDaOperacao){
      case 1: //Somar
      // somar(numero1, numero2);
      // somar(numero1);

      float retornoFuncaoSomar;
      retornoFuncaoSomar = somar(numero1, numero2);
      Serial.println(retornoFuncaoSomar);

      break;

      case 2://Dividir
      //dividir(numero1, numero2);
      // dividir(numero1);

      float retornoFuncaoDividir;
      retornoFuncaoDividir = dividir(numero1, numero2);
      Serial.println(retornoFuncaoDividir);
      break;

      case 3: //Subtrair
      // subtrair(numero1, numero2);
      // subtrair(numero1);

      float retornoFuncaoSubtrair;
      retornoFuncaoSubtrair = subtrair(numero1, numero2);
      Serial.println(retornoFuncaoSubtrair);
      break;

      case 4: //Multiplicar
      // multiplicar(numero1, numero2);
      // multiplicar(numero1);

      default:
      Serial.println("opcao invalida! Escolha uma opcao do 1 ao 4. ;)");
    } 


    Serial.println("Voce deseja voltar ao menu? Digite sim ou nao (em minusculo, por favor).");
    while(!Serial.available()){}


    if(Serial.readString() == "sim"){                          
      contador = 1;
    }
    else{  
      contador = 0;

      Serial.println("Ate breve");
      Serial.println("Caso queira voltar ao menu, reinicie o programa ;");
    }


  }                
  while(contador != 0); //Se o contador for diferente de 0, o mesmo repete.
}                  
void loop()
{
  //sem instruções
}