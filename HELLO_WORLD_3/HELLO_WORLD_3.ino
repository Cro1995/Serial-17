/****************************************************************
 **                                                            **
 **                    HELLO WORD 3                            **                                                           
 **                    SERIAL                                  **                   
 **                                                            **
 **  Nom: Carlos Rubio Ortega               Data: 30/01/2017   **                                                           
 ***************************************************************/
 //************************ INCLUDE *****************************


 //*********************** VARIABLES ****************************




 //************************* SETUP ******************************

void setup()                // configura el final de la sortida  
{
  Serial.begin(9600);       // configurar una bibloteca al serial a 9600 bps

  Serial.println("Hello world!"); // ens diu Hola mundo i tanca la linea, la pròxima linia començaria a sota. 
}
//*************************** LOOP ******************************

void loop() {          // inicia el bucle del programa 
  
  Serial.println("Hello world!"); // ens diu Hola mundo i tanca la linea, la pròxima linia començaria a sota.
  delay(1000);  // s'espera 1 segon i torna a començar                     
}


//************************* FUNCIONS ****************************
   // Ens podem comunicar amb el arduino. 
   
