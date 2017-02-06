/****************************************************************
 **                                                            **
 **                    Print 3.2                               **                                                           
 **                    SERIAL                                  **                   
 **                                                            **
 **  Nom: Carlos Rubio Ortega               Data: 06/02/2017   **                                                           
 ***************************************************************/
 //************************ INCLUDE *****************************


 //*********************** VARIABLES ****************************

int thisByte = 33;        // definim les variables quin valor seran 
          



 //************************* SETUP ******************************

void setup()                // configura el final de la sortida  
{

  Serial.begin(9600); 
  Serial.println("ASCII Table ~ Character Map"); // Ens mostraran els simbols ASCII 

 
}




//*************************** LOOP ******************************

void loop()         // inicia el bucle del programa 
  { 
  Serial.write(thisByte);    
  
  Serial.print(", dec: ");   // Ens mostra el valor en decimal 
  Serial.print(thisByte);
  
  Serial.print(", hex: "); 
  Serial.print(thisByte, HEX); // Ens mostra el valor en hexadecimal
      
  Serial.print(", oct: "); 
  Serial.print(thisByte, OCT);  // ens mostra el valor en Octal 
     
  Serial.print(", bin: "); 
  Serial.println(thisByte, BIN);  // Ens mostra el valor en binari  


  if(thisByte == 126)  // Ens mostrara el ultim caracter que es 126= ~
  { 
    while(true)  // Mentre sigui veritat continua 
    { 
    } 
  } 
  thisByte++;     // Ens mostra el següent simbol 

} 

                      



//************************* FUNCIONS ****************************
   // En aquest programa podem veure com ens mostra el mateix numero en diferents sistemes i també ens mostra els simbols ASCII.  
   
