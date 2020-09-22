#include <iostream>

using namespace std;

int main()
{
    int select,a,b;
    int result,o,p=1;
    double f;
    double t,h,l;
    char c,m;
    while (true){
        cout << "Ingrese el numero del ejercicio a ejecutar: "<<endl;
        cin >> select;
        switch (select) {
        case 1:
            cout << "Ingrese el numero A: "<<endl;
            cin >> a;
            cout << "ingrese el numero B: "<<endl;
            cin >>b;
            cout << "El residuo de la division "<<a<<"/"<<b<<" es: "<<a%b<<endl;

            break;
        case 2:
            cout<<"Ingrese el numero N: "<<endl;
            cin >>a;
            if (a%2==1) {
                cout<<a<<" es impar"<<endl;
            }
                else cout<<a<<" es par"<<endl;

            break;
        case 3:
            cout << "Digite el numero A: "<<endl;
            cin >>a;
            cout << "Digite el numero B: "<<endl;
            cin >>b;
            if (a>b) {
                cout<< a<<" es el mayor"<<endl;
                }
            else cout<<b<<" es el mayor"<<endl;

            break;
        case 4:
            cout << "Digite el numero A: "<<endl;
            cin >>a;
            cout << "Digite el numero B: "<<endl;
            cin >>b;
            if (a>b) cout<<b<<" es el menor"<<endl;
            else cout <<a<<" es el menor"<<endl;

            break;
        case 5:
            cout << "Digite el numero A: "<<endl;
            cin >>a;
            cout << "Digite el numero B: "<<endl;
            cin >>b;
            result=a/b;
            cout << a<<"/"<<b<<" = "<<result<<endl;

            break;
        case 6:
            cout << "Ingrese dos numeros A y B: "<<endl;
            cin >> a >> b;
            result = a;
            if(a==0 && b<=0) cout<< a << " ^ "<< b<< " no esta definida. ";
            else{
                o = b;
                if (b<0){
                        result=1.0/a;
                        b*=-1;
                }
                for (;b>0;b--)  p*=result;
                cout << a << " ^ " << o << " = " <<p<<endl;
                  }
            break;
          case 7:
            cout<<"Ingrese un numero N: "<<endl;
            cin>> a;
            b=0;
            o = a;
            while(o!=0){
                b = b+o;
                o = o-1;
            }
            cout << "La sumatoria desde 0 hasta "<<a<<" es: "<<b<<endl;
            break;
        case 8:
            cout <<"Ingrese un numero N: "<<endl;
            cin >>a;
            b=1;
            o = a;
            while (o!=0){
                b = b*o;
                o = o-1;
            }
            cout <<"El factorial de "<<a<<" es: "<<b<<endl;
            break;
        case 9:
            cout<<"Ingrese un numero N: "<<endl;
            cin >>a;
            f = 3.1416;
            t = f*a;
            h = a*a;
            cout<<"El perimetro del circulo es: "<<t*2<<" , su area es:  "<<h*f<<endl;
            break;
        case 10:
            cout <<"Ingrese un numero N: "<<endl;
            cin >>a;






            break;
        case 11:
            cout<<"Ingrese un numero: "<<endl;
            cin >> a;

            for (int b=1;b<=10;b++) cout<<a<<"x"<<b<<"="<<a*b<<endl;
            break;
        case 12:
            cout<<"Ingrese un numero N: "<<endl;
            cin >> a;
            b = 1;
            select = 1;
            while (b!=6){
                select = a*select;
                cout<<a<<"^"<<b<<"="<<select<<endl;
                b += 1;
            }

             break;
 /*        case 13:
            cout<<"Ingrese un numero N: "<<endl;
            cin >>a;
            b=a;
            h=2;
            cout<<b<<endl;
            while (b!=2){
                if (a%2==0){
                    b = b/h;
                    h+=2;
                    cout<<b<<endl;

                }
                else if(a%3==0){

                }
            }

            cout<<"1"<<endl;
*/

        case 14:
            a = 1;
            b = 1;
            h = 50;
            while (a<=50){
                    cout<<b<<"   "<<h<<endl;
                    b +=1;
                    h -=1;
                    a +=1;

            }
            break;
        case 15:
            a = 1;
            h=0;
            while (a!=0){
                cout<<"Ingrese un numero: "<<endl;
                cin>>a;
                b = a;
                h +=b;


            }
            cout<<"El resultado de la sumatoria es: "<<h<<endl;
            break;
        case 16:
            a = 1;
            h= 1;
            select=0;
            while (a!=0){
                cout<<"Ingrese un numero: "<<endl;
                cin>>a;
                if (a!=0){
                b = a;
                h = h*b;
                select +=1;
                }
                else break;

                }
            cout<<"El promedio es: "<<h/select<<endl;
            break;
        case 17:
            a = 1;
            b = 0;
            h = 0;
            cout << "Digite un numero: "<<endl;
            cin >>a;
            if (a==0) {cout<<"Ingresaste el numero 0, no se iniciara el ejercicio."<<endl;
                break;}
            while (a!=0){
                if (a>b) h=a;
                cout << "Digite un numero: "<<endl;
                cin >>a;
                if (a==0){
                    cout<<"El numero mayor fue: "<<h<<endl;
                }
                if (a>=b) {
                    if (h>a && h>b){
                    h = h;
                    }
                    else h = a;
                }
                if (h>b) h=h;
                b = a;

            }
            break;
        case 18:
            cout << "Ingrese un numero N: "<<endl;
            cin >>a;
            if (a==0) {cout<<"El cuadrado perfecto de 0 es 0"<<endl;
                             break;}
            select = 1;
            o = 0;
            result = 0;
            while (o<a){
                o += 1;
                select = (o*2)-1;
                result += select;
                select = 0;
            }
                cout <<result<<endl;
                cout<<a/result<<endl;

            break;
case 19:
            break;
        case 20:
            cout <<"Ingrese un numero N: "<<endl;
            cin >>a;
            b = 0;
            o = a;
            while (a>0){
                b += a%10;
                b *= 10;
                a = a/10;
            }
            b = b/10;
            if (b==o) cout<<"Es palindromo"<<endl;
            else cout <<"No es palindromo"<<endl;
            break;
        case 21:
            cout<<"Ingrese un caracter c: ";
            cin >>c;
            cout <<"Letra ingresada "<<c<<endl;
            m = c;
            c = toupper(c);

            if (m==c){
                c = tolower(c);
                cout <<"Letra convertida: "<<c<<endl;

            }
            else{
                c = toupper(c);
                cout <<"Letra convertida: "<<c<<endl;
            }


            }

            }



        }

