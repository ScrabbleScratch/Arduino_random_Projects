#include <LiquidCrystal_I2C.h> //Se declara la libreria para usar la LCD

LiquidCrystal_I2C lcd(0x27,20,4);  //Se declara la pantalla de 20 columnas y 4 filas

int hum = 0; //Se crea la variable en la que se guarda el porcentaje de humedad
 
void setup() {  
  
  lcd.init(); //Se inicializa la LCD para poder usarse
  
  lcd.backlight(); //Se enciende la luz de fondo de la LCD

  pinMode(2, OUTPUT); //Se declara el pin 2 del Arduino como salida de datos
  pinMode(3, OUTPUT); //Se declara el pin 3 del Arduino como salida de datos
  pinMode(8, INPUT); //Se declara el pin 2 del Arduino como entrada de datos
  pinMode(9, INPUT); //Se declara el pin 2 del Arduino como entrada de datos
}

void loop() {  
  delay(500); //Se hace una espera de 0.5 segundos antes de continuar

  lcd.home(); //Se coloca el cursor de la LCD en la posicion inicial
  
  float temp = analogRead(A0); //Se crea una variable para guardar la temperatura del sensor
  temp = (5.0 * temp * 100.0)/1024.0; //Se realiza la conversion de voltios a grados centigrados

  //Se imprime en la LCD el porcentaje de humedad
  lcd.print("Humedad:            "); 
  lcd.setCursor(9,0);
  lcd.print(hum);
  lcd.print(" %");
  lcd.setCursor(0,1);

  //Se imprime en la LCD el estado de la bomba de agua
  lcd.print("Bomba:              ");
  lcd.setCursor(7,1);

  if (hum <= 50){ //Si la humedad es menor o igual a 50% entonces la bomba se activa
    digitalWrite(2, LOW);
    lcd.print("ON");
  }else if (hum > 50){ //Si la humedad es mayor a 50% entonces la bomba se desactiva
    digitalWrite(2, HIGH);
    lcd.print("OFF");
  }

  lcd.setCursor(0,2);
  //Se imprime la temperatura en la LCD
  lcd.print("Temp:               ");
  lcd.setCursor(6,2);
  lcd.print(temp);
  lcd.print(" C");
  lcd.setCursor(0,3);

  //Se imprime en la LCD el estado del ventilador
  lcd.print("Ventilador:         ");
  lcd.setCursor(12,3);

  if (temp >= 30){ //Si la temperatura es mayor o igual a 30°C entonces el ventilador se activa
    digitalWrite(3, LOW);
    lcd.print("ON");
  }else if (temp <30){ //Si la temperatura es menor a 30°C entonces el ventilador se desactiva
    digitalWrite(3, HIGH);
    lcd.print("OFF");
  }

  if (digitalRead(8) == HIGH && digitalRead(9) == LOW){
    hum = 0; //Si el switch esta a la izquierda la humedad es 0
  }else if (digitalRead(9) == HIGH && digitalRead(8) == LOW){
    hum = 100; //Si el switch esta a la derecha la humedad es 100
  }else{
    hum = 100; //Si el switch esta en la posicion central la humedad es 100
  }

}
