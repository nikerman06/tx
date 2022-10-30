
#include <stdio.h>
#include <string.h>

 typedef struct
 {
        char jmeno[101];
        char cislo[101];
 } Contlist;


 //funkce prevede jmena ze seznamu kontaktu na cisla a vrati jmenoID, podle ktereho muzeme vyhledat kontakt
 char* Newjmeno (Contlist contactsf, char* jmenoID)
 {
     int a = 0;
     for (int i = 0; contactsf.jmeno[i] != '\0'; i++)
     {
         if (contactsf.jmeno[i] == 'a' ||
         contactsf.jmeno[i] == 'A' ||
         contactsf.jmeno[i] == 'b' ||
         contactsf.jmeno[i] == 'B' ||
         contactsf.jmeno[i] == 'c' ||
         contactsf.jmeno[i] == 'C')
         {
             jmenoID[a] = '2';
             a++;
             continue;
         }
         else if (contactsf.jmeno[i] == 'd' ||
         contactsf.jmeno[i] == 'D' ||
         contactsf.jmeno[i] == 'e' ||
         contactsf.jmeno[i] == 'E' ||
         contactsf.jmeno[i] == 'f' ||
         contactsf.jmeno[i] == 'F') 
         {
             jmenoID[a] = '3';
             a++;
            continue;
         }
         else if (contactsf.jmeno[i]=='g' ||
         contactsf.jmeno[i]=='G' ||
         contactsf.jmeno[i]=='h' ||
         contactsf.jmeno[i]=='H' ||
         contactsf.jmeno[i]=='i' ||
         contactsf.jmeno[i]=='I') 
         {
            jmenoID[a] = '4';
             a++;
             continue;
         }
         else if (contactsf.jmeno[i] == 'j' ||
         contactsf.jmeno[i] == 'J' ||
         contactsf.jmeno[i] == 'k' ||
         contactsf.jmeno[i] == 'K' ||
         contactsf.jmeno[i] == 'l' ||
         contactsf.jmeno[i] == 'L') 
         {
             jmenoID[a] = '5';
             a++;
             continue;
         }
         else if (contactsf.jmeno[i] == 'm' ||
         contactsf.jmeno[i] == 'M' ||
         contactsf.jmeno[i] == 'n' ||
         contactsf.jmeno[i] == 'N' ||
         contactsf.jmeno[i] == 'o' ||
         contactsf.jmeno[i] == 'O') 
         {
             jmenoID[a] = '6';
             a++;
             continue;
         }
         else if (contactsf.jmeno[i] == 'p' ||
         contactsf.jmeno[i] == 'P' ||
         contactsf.jmeno[i] == 'Q' ||
         contactsf.jmeno[i] == 'q' ||
         contactsf.jmeno[i] == 'R' ||
         contactsf.jmeno[i] == 'r' ||
         contactsf.jmeno[i] == 's' ||
         contactsf.jmeno[i] == 'S')
         {
             jmenoID[a] = '7';
             a++;
             continue;
         }
         else if (contactsf.jmeno[i] == 't' ||
         contactsf.jmeno[i] == 'T' ||
         contactsf.jmeno[i] == 'u' ||
         contactsf.jmeno[i] == 'U' ||
         contactsf.jmeno[i] == 'v' ||
         contactsf.jmeno[i] == 'V') 
         {
             jmenoID[a] = '8';
             a++;
             continue;
         }
         else if (contactsf.jmeno[i] == 'w' ||
         contactsf.jmeno[i] == 'W' ||
         contactsf.jmeno[i] == 'x' ||
         contactsf.jmeno[i] == 'X' ||
         contactsf.jmeno[i] == 'y' ||
         contactsf.jmeno[i] == 'Y' ||
         contactsf.jmeno[i] == 'z' ||
         contactsf.jmeno[i] == 'Z') 
         {
             jmenoID[a] = '9';
             a++;
             continue;
         }
         else if (contactsf.jmeno[i] == '+')
         {
            jmenoID[a] = '0';
            a++;
            continue;
         }
     }

     jmenoID[a] = '\0';
     return jmenoID;
 }

 //
 int compjmenos(char* jmenoID, char* compdjmeno)
 {
     for(int a = 0; (jmenoID[a] != '\0') && ( strlen (compdjmeno) <= strlen( &jmenoID[a]) ); a++) 
     {
         if (compdjmeno[0] == jmenoID[a]) 
         {
             int bol = 1;
             for (int i = 1; compdjmeno[i] != '\0'; i++) 
             {
                 if (compdjmeno[i] != jmenoID[a + i]) 
                 {
                     bol = 0;
                     break;
                }
             }
             if (bol ==  1) 
             {
                 return 1;
             }
         }
     }
     return 0;
 }

//Phone number lookup function
 int compcislos(Contlist contactsf, char* compdNumber)
 {
     for(int a = 0; (contactsf.cislo[a] != '\0') && ( strlen(compdNumber) <= strlen(&contactsf.cislo[a]) ); a++)
     {
         if (compdNumber[0] == contactsf.cislo[a])
         {
             int bol = 1;
             for (int i = 1; compdNumber[i] != '\0'; i++)
             {
                 if (compdNumber[i] != contactsf.cislo[a+i])
                {
                     bol = 0;
                     break;
                 }
                 
             }

             if (bol == 1)
             {

                 return 1;

             }

         }
     }
     return 0;
 }



int main(int argc, char* argv[]) 
{
    
     Contlist Contlist[42];

    if (argc < 2)
    {
        char jmeno[101];
        char cislo[101];
            while (fgets(jmeno, 101, stdin) != NULL)
            {
                fgets(cislo, 101, stdin);
            
            
                 for (int i = 0 ; i< 101; i++)
                 {
                      if(jmeno[i] == '\n') 
                      {
                          jmeno[i] = '\0';
                      }
                } 
                 printf("%s, %s\n", jmeno, cislo );
                 
            }   
     return 1;
    }

     if (argc > 2)
     {
         printf("The number must be only one\n");
         return 1;
     }
    
    
     for (int i = 0; i < 42; i++)
     {
         int jmenolen = strlen(Contlist[i].jmeno)-1 ;
         int cislolen = strlen(Contlist[i].cislo)-1 ;
       
         
        
         fgets(Contlist[i].jmeno, 101, stdin);
       
         if(Contlist[i].jmeno[jmenolen] == '\n') 
         {
             Contlist[i].jmeno[jmenolen] = '\0';
         }
       
         fgets(Contlist[i].cislo, 101, stdin);
       
         if(Contlist[i].cislo[cislolen] == '\n') 
         {
             Contlist[i].cislo[cislolen] = '\0';
         }
     }
    
      if (argc == 1 && strlen(argv[1]) > 100)
      {
          printf("Maximal amount of numbers is 100");
          return 1;
      }
    
     int comp = 0;
     char jmenoID[101];

     

     for(int i = 0; Contlist[i].cislo[0] != '\0'; i++)
     {
         if(compcislos(Contlist[i],argv[1]) == 1)
         {
            
            if (comp == 0){
                 printf("Contact is found\n");
                 comp = 1;
             }
             if (Contlist[i].jmeno[strlen(Contlist[i].jmeno)-1] == '\n')
             {
                Contlist[i].jmeno[strlen(Contlist[i].jmeno)-1] = '\0';
             } 
            
             
             printf("%s, %s \n", Contlist[i].jmeno,Contlist[i].cislo);
         }
        
         else if (compjmenos(Newjmeno(Contlist[i], jmenoID),argv[1]) == 1) 
         {
            
             if (comp == 0)
             {
                 printf("Çontuct is found\n");
                 comp = 1;
             }
             if (Contlist[i].jmeno[strlen(Contlist[i].jmeno)-1] == '\n')
             {
                Contlist[i].jmeno[strlen(Contlist[i].jmeno)-1] = '\0';
             } 
            
             printf("%s, %s\n", Contlist[i].jmeno, Contlist[i].cislo );
         }
     }
    
     if (comp == 0)
     {
         printf("Contact is not found\n");
     }
    
     return 0;
}

