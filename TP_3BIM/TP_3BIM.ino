// Ejercicio evaluatorio 3er bimestre
/*
  Integrantes
    Nombre: Agustin
    Apellido: Hofmann
    Curso: 3b TIC
    
    Nombre: Ramiro 
    Apellido: Sanchez Rivera
    Curso: 3b TIC
  
Congisgnas
  Conexionado:
    En la protoboard, conectar 4 LEDs para que cada uno pueda ser controlado individualmente. Cada LED deberá tener su respectiva resistencia.
    Se debe conectar tambien, un pulsador que permita recibir información de un usuario.
    Indicar a continuación los pines a los cuales se conectó cada elemento y el valor de resistencias utilizado:
      Pines:
        Boton:
        LED1: ROJO (9)
        LED2: azul (5)
        LED3: verde (7)
        LED4: amarillo (11)
      Valor:
        R_boton:
        R_LEDs:

  Progamas:
    Se deben entregar un programa distinto por cada punto. Los programas son una modificación entre ellos.
    El código deberá estar comentado indicando qué se propone hacer con cada línea de código
    1.  El primer programa sirve para corroborar la correcta conexión de los elementos de hardware.
        El mismo deberá encender TODOS los LEDs cuando se presione el pulsador y apagarlos cuando éste se suelte.
    2.  En el siguiente programa se deberá prender de a UN LED POR VEZ.
        Por cada pulsación se deberá apagar el LED prendido y prender el LED más próximo de la derecha.
        En caso de no haber, se deberá volver a empezar la vuelta, empezando desde el LED de la izquierda.
    3.  A continnuación se desea fabricar un contador binario de 4 bits.
        El programa deberá contar de 0 a 15 mostrando la cuenta actual a través de los 4 LEDs.
        Se interpreta 0 si el LED está apagado y 1 si el LED está prendido. 
        La cuenta aumenta cada vez que el pulsador es presionado, al llegar a 15 deberá volver a empezar en 0.
        IMPORTANTE: la cuenta debe aumentar UNA SOLA VEZ por cada pulsación.
    4. Opcional:
        Utilizando comunicación serie, se desea crear un programa que muestre mediante los LEDs, el nro ingresado en el monitor serie.
        El programa deberá mostrar el número binario prendiendo los LEDs según el criterio del programa 3.
        El nro mostrado será ingresado por el usuario mediante el monitor serie.
        IMPORTANTE: si el nro es mayor a 15 se deberá enviar un mensaje de error. 

*/ 
int amarillo = 11;
int rojo = 9;
int azul = 5;
int verde = 7;
int buttonPin = 3;
void setup() {
  // Configuración del arduino
    pinMode(amarillo, OUTPUT);
pinMode(azul, OUTPUT);
pinMode(rojo, OUTPUT);
pinMode(verde, OUTPUT); 
pinMode(buttonPin, INPUT);
}

void loop() {

  // Logica del programa
  
int buttonState = digitalRead(buttonPin);
 if(buttonState == HIGH){
  digitalWrite(amarillo, HIGH);
  digitalWrite(azul, HIGH);
  digitalWrite(rojo, HIGH);
  digitalWrite(verde, HIGH);
 } else {
  digitalWrite(amarillo, LOW);
  digitalWrite(azul, LOW);
  digitalWrite(rojo, LOW);
  digitalWrite(verde, LOW);
  }
}
