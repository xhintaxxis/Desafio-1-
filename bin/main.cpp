#include <iostream>

using namespace std;

int main()
{
int arr[8];
char vrb1=65;
//conversion a bits de un tipo char.
for(int i=7;i>=0;i--){
    int res=vrb1&0b00000001;
    vrb1=vrb1>>1;
    arr[i]=(res);
}
for(int i=0;i<8;i++){
    cout<<arr[i];
}
cout<<endl;
int salida=0;
int potencia=1;
int c=7;
 for(int i=0;i<8;i++){
   for(int j=1;j<=c;j++){
     potencia=potencia*2;
   }
   salida=salida+(potencia*arr[i]);
   potencia=1;
   c--;
 }
cout<<salida<<endl;
return 0;
}
