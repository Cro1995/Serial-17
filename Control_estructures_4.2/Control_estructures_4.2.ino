/****************************************************************
 **                                                            **
 **                    Control estructures 4.1                 **                                                           
 **                    SERIAL                                  **                   
 **                                                            **
 **  Nom: Carlos Rubio Ortega               Data: 06/02/2017   **                                                           
 ***************************************************************/
 //************************ INCLUDE *****************************


 //*********************** VARIABLES ****************************

int tempAigua = 90;        // definim les variables quin valor seran 
          



 //************************* SETUP ******************************

void setup()                // configura el final de la sortida  
{
  Serial.begin(9600);     // Ens escriu els valors en la bibloteca 9600bps

  if ( tempAigua < 90);    // Si la tempAigua mes petit que 90º fa el següent
  Serial.print("Aigua encara no vull"); // Posa a la pantalla Aigua encara no vull
  if )  (tempAigua < 100)&&( tempAigua >= 90; // Si la temperatura es igual o mes gran que 90º pero no mes gran que 100º          
  Serial.print("Aigua a punt de bullir");  // Posa a la pantalla Aigua a punt de bullir 
  if (tempAigua = 100);        // Si la temperatura es igual a 100º
  Serial.print("Aigua a 100ºC");  // Posa a la pantalla Aigua a 100ºC
  if (tempAigua > 100);  // Si la tamperatura es mes gran que 100º 
  Serial.print("Aigua bullint"); // Posa a la pantalla Aigua bulint 
  
}




//*************************** LOOP ******************************

void loop()         // inicia el bucle del programa 
{
                    // No fa res 
}

                      



//************************* FUNCIONS ****************************
   // En aquest programa podem veure com ens mostra que si supera un valor faci un operació o si no supera el valor no faci res.  
   
