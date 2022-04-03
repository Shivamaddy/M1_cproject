#include <stdio.h>

int main() {
  int c;
  int t_Choice;
  int c_Choice;
  int m_Choice;
  int F;
  int C;
  int input_USD_to_EURO;
  int input_USD_to_JPY; 
  int input_USD_to_RMB;
  int input_Ounce;
  int input_Gram; 
  int fahrenheitToCelcius; 
  int celciusToFahrenheit;
  float USD_to_EURO ;
  float USD_to_JPY; 
  float USD_to_RMB; 
  float ounce_To_Pound;
  float gram_To_Pound;
  int choice=1;
  
  while(choice)
  {
  printf("Welcome to Converter! \n");
  printf("Select the category: \n");
  printf("1.Temperature\n2.Currency\n3.Mass\n4.Exit\n");
  printf("Please enter the category number you want to choose.\n");
  scanf("%d",&c);
  
  if(c == 1){
      printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&t_Choice);
      if(t_Choice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&F);
          fahrenheitToCelcius =  ((F-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitToCelcius);
      }
      else if(t_Choice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&C);
        celciusToFahrenheit = ((9.0/5.0)*C + 32);
        printf("Fahrenheit: %d",celciusToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
  }
  
  else if(c == 2) {
      printf("Welcome to Currency Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for USD to Euro. \n");
      printf("Enter 2 for USD to JPY. \n");
      printf("Enter 3 for USD to RMB. \n");
      scanf("%d",&c_Choice);
      if(c_Choice == 1){
          printf("Please enter the USD amount: \n");
          scanf("%d",&input_USD_to_EURO);
          USD_to_EURO = input_USD_to_EURO * 0.87;
          printf("Euro: %.2f",USD_to_EURO); // %.2f = rounds the float to only 2 decimal places;
      }
      else if(c_Choice == 2){
          printf("Please enter the USD amount: \n");
          scanf("%d",&input_USD_to_JPY);
          USD_to_JPY = input_USD_to_JPY * 111.09;
          printf("JPY: %.2f",USD_to_JPY);
      }
      else if(c_Choice == 3) {
        printf("Please enter the USD amount: \n");
        scanf("%d",&input_USD_to_RMB);
        USD_to_RMB = input_USD_to_RMB * 6.82;
        printf("RMB: %.2f",USD_to_RMB);
      }
      else
        printf("Please enter correct choice. \n");
   }
  else if(c == 3){
      printf("Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for ounces to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
      scanf("%d",&m_Choice);
      if(m_Choice == 1){
          printf("Please enter the ounce amount: \n");
          scanf("%d",&input_Ounce);
          ounce_To_Pound = input_Ounce * 0.0625;
          printf("Pounds: %.2f",ounce_To_Pound);
      }
      else if(m_Choice == 2) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&input_Gram);
          gram_To_Pound = input_Gram * 0.00220462;
          printf("Pounds: %.2f",gram_To_Pound);
      }
  }
    else if(c==4)
    {
        choice=0;
    }
      else 
        printf("Please enter the correct choice. \n");
    
   }
  return 0;
}