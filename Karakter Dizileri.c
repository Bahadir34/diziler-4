#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    /*
    char isim[7]="deneme";
    char isim1[]="deneme;";
    char *isim2 ="deneme";
    char isim3[]= {'h','a','n','z','a','l','a','\0'};
    printf("%s",isim1);
    proje lazım.
    */
     int a=0,b=0,i=0;
     char sube['e'][2];
    printf("Sinif sayisini giriniz :"); scanf("%d",&b);
   
 
    char kullanici['b']['a'][7]={};
    for(int j=0; j<b; j++)
    {
            printf("Subesi:"); scanf("%s",&sube['e']);
        
            printf("Sinif mevcudunu giriniz :"); scanf("%d",&a);
       
    for(int i=0;i<a;i++)
    {   
        printf("%d. ogrencinin ismini giriniz:",i+1); scanf("%s",&kullanici[i]);
    }
    
    }
    
    printf("OKUL LISTESI\n");
    
    
    for (int j=0; j<b; j++)
    { 
        printf("%s Sinifindakilerin listesi\n",sube['e']);
        
                for (int i=0;i<a;i++)
                {
                   printf("%d-%s\n",i+1,kullanici[i]);  
                }
    }

         
    
          
            
       
    
   
       
    
    
           

          
    return 0;
}

