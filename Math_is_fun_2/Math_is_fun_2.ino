/****************************************************************
 **                                                            **
 **                    Math is fun                             **                                                           
 **                    SERIAL                                  **                   
 **                                                            **
 **  Nom: Carlos Rubio Ortega               Data: 30/01/2017   **                                                           
 ***************************************************************/
 //************************ INCLUDE *****************************


 //*********************** VARIABLES ****************************

int a = 3;        // definim les variables quin valor seran 
int b = 4;       // definim les variables quin valor seran 
int h;          // definim les variables que en aquest cas no sabem el seu valor  



 //************************* SETUP ******************************

void setup()                // configura el final de la sortida  
{
  Serial.begin(9600);       // configurar una bibloteca al serial a 9600 bps

  Serial.println("Aqui tenim unes quantes operacions"); // ens diu Aqui tenim unes quantes operacions i tanca la linea, la pròxima linia començaria a sota. 
  Serial.print("a = ");                 // Llegeix el valor de la variable 
  Serial.println(a);                    // Ens diu el valor de la variable 
  Serial.print("b = ");                 // Llegeix el valor de la variable
  Serial.println(b);                    // Ens diu el valor de la variable
  Serial.print("h = ");                 // Llegeix el valor de la variable
  Serial.println(h);                    // Ens diu el valor de la variable

  Serial.print(double pow(a)+(double pow(b));       // Llegeix el valor de les variables i fa la suma 
  Serial.println(a + b);          // ens diu el resultat de la suma 
  delay(1000);                    // s'espera 1 segon 
  
  Serial.print("a * b = ");       // Llegeix el valor de les variables i fa la multiplicació 
  Serial.println(a * b);          // Ens diu el resultat de la multiplicació 
  delay(2000);                    // S'espera 2 segons 
  
  Serial.print("a / b = ");       // Llegeix el valor de les variables i fa la divisió 
  Serial.println(a / b);          // Ens diu el resultat de la divisió sense decimals
  delay(3000);                    // S'espera 3 segons 
  
  Serial.print("a % b = ");       // Llegeix el valor de les variables i fa la divisió 
  Serial.println(a % b);          // Ens diu el resultat de la divisió amb el residu 
  delay(4000);                    // S'espera 4 segons 
  
  Serial.print("b - a = ");       // Llegeix el valor de les variables i fa la resta 
  Serial.println(b - a);          // Ens diu el resultat de la resta 
  delay(1500);                    // S'espera 1.5 segons 
  
}



//*************************** LOOP ******************************

void loop() {          // inicia el bucle del programa 
  
                      // no fa cap repetició 
}


//************************* FUNCIONS ****************************
   // En aquest programa podem veure com fa unes operacions.  
   
