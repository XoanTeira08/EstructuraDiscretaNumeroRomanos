#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    //Declaracion de variables
    int i, j, control, num=0, uni, dec, cen; 
    char romano[15];
    //Presentación;
    cout<<"-----------Bienvendio--------------"<<endl;
    cout<<"Si Desea convertir de número arabigo a romano ingrese (1)\nSi desea convertir de número romano a arabigo ingrese (0)"<<endl;
    cin>> i;
    system("clear");
    
       if (i==1)
    {
        //Convertir arabigo a romano
        cout<<"Por favor ingrese un número entra 1 y 100"<<endl;
        cin>>num;
        uni= num%10; num /=10;
        dec= num%10; num /=10;
        cen= num%10; num /=10;
        cout<<"El número que ingreso en sistema romano es: "<<endl;
        switch(cen)
        {
            case 1:cout<<"C";break;
        }
        switch(dec)
        {
            case 1:cout<<"X";break;
            case 2:cout<<"XX";break;
            case 3:cout<<"XXX";break;
            case 4:cout<<"XL";break;
            case 5:cout<<"L";break;
            case 6:cout<<"LX";break;
            case 7:cout<<"LXX";break;
            case 8:cout<<"LXXX";break;
            case 9:cout<<"XC";break;
        }
        switch(uni)
        {
            case 1:cout<<"I";break;
            case 2:cout<<"II";break;
            case 3:cout<<"III";break;
            case 4:cout<<"IV";break;
            case 5:cout<<"V";break;
            case 6:cout<<"VI";break;
            case 7:cout<<"VII";break;
            case 8:cout<<"VIII";break;
            case 9:cout<<"IX";break;
        }
        cout<<"\n"<<endl;
        cout<<"Para finalizar presione (0)"<<endl;
        cin>>control;
        return 0;
    }
    else
    {
        //convertir romano a arabigo
        cout<<"Ingrese un número Romano entre 1 y 100"<<endl;
        cin>>romano;
        for(int j=0; j<=15; j++)
        {
                switch(romano[j])
            {
                case 'C':num+=100; break;
                case 'L':num+=50; break;
                case 'X':num+=10;break;
                case 'V':num+=5;break;
                case 'I':num+=1;break;
            }
            if(romano[j]=='V'&&romano[j-1]=='I')
            {
                num=num-2;
            }
            else if(romano[j]=='X'&&romano[j-1]=='I')
            {
                num=num-2;
            }
            else if(romano[j]=='L'&&romano[j-1]=='X')
            {
                num=num-20;
            }
            else if(romano[j]=='C'&&romano[j-1]=='X')
            {
                num=num-20;
            }
        }
        cout<<"El número romano ingresado en sistema arábigo es: "<<endl;
        cout<<num; 
        cout<<"\n"<<endl;
        cout<<"Para finalizar presione (0)"<<endl;
        cin>>control;
    }
    
    
}