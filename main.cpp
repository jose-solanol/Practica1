#include <iostream>
#include <cstdlib>

using namespace std;
//Practica Numero 1 de Informática II
int factorial(int v){
    int fact = v;
    if (fact>1){
        fact = v*factorial(v-1);
        return fact;
    }
    else{
        return 1;
    }
}


int main()
{
    bool primo;
    int select,a,b,j;
    unsigned int d;
    int result,o,p=1,k;
    double f;
    double t,h;
    string let,voc,i;
    char c,m;
    float pi = 0;
    while (true){
        cout << "Ingrese el numero del ejercicio a ejecutar (Cero para cerrar la ejecucion): "<<endl;
        cin >> select;
        if (select==0) {cout << "Hasta la proxima."<<endl;
            break;
        }
        // Digite el numero cero para finalizar la ejecución.
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
            b = a;
            o = 1;
            while (b<100){
                b = b*o;
                if (b >100) break;
                cout <<"Multiplos del "<<a<<" menores que 100: "<<endl<<b<<endl;
                o = o+1;
                b = a;

            }
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
                    h = h+0;
                    }
                    else h = a;
                }
                if (h>b) h=h+0;
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
            cout << "Digite un numero: "<<endl;
            cin >> a;
            primo = true;
            for (b = 2; b<a && primo==true ; b++ ) {
                if (a%b==0) {                    
                    primo = false;

                }
            }
            if (primo==false){ cout << "El numero no es primo"<<endl;
            }
            else cout << "El numero es primo"<<endl;


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
            break;
        case 22:
            cout<<"Digite la cantidad de segundos: "<<endl;
            cin >>a;
            b = a/3600;
            a = a%3600;
            select = a/60;
            o = a%60;
            cout <<b<<":"<<select<<":"<<o<<endl;

            break;
        case 23:
            cout <<"Digite el numero A: "<<endl;
            cin >>a;
            cout <<"Digite el numero B: "<<endl;
            cin >>b;
            select = 1;
            o = 2;
            while (o<=a || o<=b) {
                if (a%o==0 || b%o==0){
                    select = select * o;
                    if (a%o==0) a=a/o;
                    if (b%o==0) b=b/o;

                }
                else{
                    o = o+1;
                }

            }
            cout << "El mcm es: "<<select<<endl;

            break;

        case 24:
            cout <<"Ingrese un numero N: "<<endl; cin >>a;
            for (short i=0;i<a ;i++ ) {
                for (short j=0;j<a ;j++ ) {
                    if (i==0 || j==0 || i==a-1 || j== a-1) cout<<"+";
                    else cout << " ";
                }
                cout <<endl;

            }
            break;
        case 25:
            cout <<"Digite un numero N: "<<endl;
            cin >>a;
            b = 1;
            select = abs(a);
            while (select>=10){
                select /= 10;
                b += 1;
            }
            cout << "El numero "<<a<<" tiene "<<b<<" digito(s)."<<endl;

            break;

        case 26:
            cout << "Digite los tres numeros para formar el triangulo: "<<endl;
            cin >> a;
            cin >> b;
            cin >> select;
            if (a==b && a==select) cout<<"Equilatero"<<endl;
            else if (a==b && select<a*2) cout<<"Isoseles"<<endl;
            else if (a==select && b<a*2) cout<<"Isoseles"<<endl;
            else if (b==select && a<b*2) cout<<"Isoseles"<<endl;
            else if (a!=b && b!=select && select!=a && a+b>select && select+b>a && select+a>b) cout <<"Escaleno"<<endl;
            else {
                cout <<"No se puede formar un triangulo"<<endl;
            }


            break;

        case 27:
            cout << "Numero: "<<endl;
            cin >>a;
            cout << "Signo de operacion (+,-,*,/): "<<endl;
            cin >>let;
            cout<<"Numero: "<<endl;
            cin >>b;
            if (let=="+") cout <<a<<"+"<<b<<" = "<<a+b<<endl;
            else if (let=="-") cout <<a<<"-"<<b<<" = "<<a-b<<endl;
            else if (let=="*") cout<<a<<"*"<<b<<" = "<<a*b<<endl;
            else if (let=="/") cout<<a<<"/"<<b<<" = "<<a/b<<endl;
            break;



        case 28:
            cout << "Ingresa el numero de elementos de la aproximacion: "<<endl;
            cin >> a;
            for (int i=1;i<=a;i++ ) {
                pi +=((2*(i%2)-1)*1.0/(2*i-1));}
                cout << "Pi= "<<4*pi<<endl;
                return 0;


            break;
        case 29:
            a = 27;
            b = 46;
            while (b!=a){
                cout << "Use los simbolos <,>,= para acercarse al numero secreto A, su numero B es: "<<b<<endl;
                cin >>let;
                if (let=="<") b -= 1;
                if (let==">") b += 1;
                if (let == "=" && b!=a) cout<<"Fallaste, sigue intentando."<<endl;
                cout << b <<endl;
                if (b>27 && b<30) cout << "Estas cerca!, sigue intentando"<<endl;

            }
            if (b==a){
            cout << "Felicidades!!, encontraste el numero."<<endl;}

            break;
        case 30:
            a = rand() %100;
            b = 101;
            o = 1;

            while (b!=a){
                cout << "Ingrese un numero B: " <<endl;
                cin >> b;
                if (b<a) cout <<"El numero es menor"<<endl;
                if (b>a) cout <<"El numero es mayor"<<endl;
                o +=1;
            }
            cout << "Lo lograste, hiciste "<<o<<" intentos."<<endl;



            break;
        case 31:
            cout << "Digite un caracter: "<<endl;
            cin >>voc;
            //voc = tolower(voc);
            if (voc=="a" || voc=="e" || voc=="i" || voc=="o" || voc == "u"){
                cout << voc<<" es una vocal."<<endl;
                break;
            }
            if (voc=="b" || voc=="c" || voc=="d" || voc=="f" || voc=="g" || voc=="h" || voc=="j" || voc=="k" || voc=="m" || voc=="n" || voc=="l"
                    || voc=="ñ" || voc=="p" || voc=="q" || voc=="r" || voc=="s" || voc=="t" || voc=="v" || voc=="w" || voc=="x" || voc=="y" || voc=="z" )
                cout << voc <<" es una consonante"<<endl;
            else cout << voc << " no es letra." <<endl;

            break;
        case 32:
            cout << "Dinero ingresado: "<<endl;
            cin >>a;
            b = 0;
            while (a>=50000){
                b += 1;
                a -= 50000;
            }
            cout << b<<" billetes de 50.000"<<endl;
            b = 0;
            while (a>=20000){
                b += 1;
                a -= 20000;

            }
            cout << b << " billetes de 20.000"<<endl;
            b = 0;
            while (a>=10000){
                b += 1;
                a -= 10000;


            }
            cout << b << " billetes de 10.000"<<endl;
            b = 0;
            while (a>= 5000){
                b += 1;
                a -= 5000;

            }
            cout << b << " billetes de 5.000"<<endl;
            b = 0;
            while (a>= 2000){
                b += 1;
                a -=2000;

            }
            cout << b << " billetes de 2.000"<<endl;
            b = 0;
            while (a>=1000){
                b += 1;
                a -=1000;

            }
            cout << b << " billetes de 1.000"<<endl;
            b = 0;
            while (a>=500){
                b += 1;
                a -= 500;

            }
            cout << b << " monedas de 500"<<endl;
            b = 0;
            while (a>=200){
                b += 1;
                a -=200;
            }
            cout << b << " monedas de 200"<<endl;
            b = 0;
            while (a>=100){
                b += 1;
                a -=100;
            }
            cout << b << " monedas de 100"<<endl;
            b = 0;
            while (a>= 50){
                b += 1;
                a -=50;
            }
            cout << b<< " monedas de 50"<<endl;
            if (a<50){
                cout << "Resto: "<<a<<endl;
            }
            break;
        case 33:
            cout << "Mes: "<<endl;
            cin >>a;
            if (a<=0 || a>=13){
                cout <<"Ese mes no existe"<<endl;
                break;
               }
            cout << "Dia: "<<endl;
            cin >>b;
            if (b<=0 || b>31){
                cout << "A menos que el calendario se haya modificado, ese dia no existe."<<endl;
                break;
            }
            if (a==2 && b==29){
                cout << b<<"/"<<a<<" posible anio bisiesto."<<endl;
            }
            if (a==4 || a==6 || a==9 || a==11 || a==2){
                if (b==31){ cout<<"Este dia no existe en este mes."<<endl;
                    break;}
                cout<<b<<"/"<<a<<" es una fecha correcta."<<endl;
            }
            else cout<<b<<"/"<<a<<" es una fecha correcta."<<endl;



            break;
        case 34:
            cout << "Digite el numero entero completo 24hrs: "<<endl;
            cin >>a;
            if (a<0){
                cout << "No hay horas negativas!"<<endl;
                break;
            }
            o = a/100;
            p = a%100;
            if (p>=60){
                cout <<"Minutos invalidos"<<endl;
                break;
            }
            if (o>24){
                cout <<"Hora invalida"<<endl;
                break;
            }
            cout <<o<<":"<<p<<endl;
            cout << "Digite el numero entero en horaminutos: "<<endl;
            cin >>b;
            if (b<0){
                cout<<"No hay horas negativas!"<<endl;
                break;
            }
            select = b/100;
            h = b%100;
            cout <<select<<":"<<h<<endl;
            if (h>=60){
                cout << "Minutos invalidos"<<endl;
                break;
            }
            result = select+o;
            if (result>24){
                cout<<"La hora se pasa de 24hrs"<<endl;
                break;
            }
            f = p+h;
            if (f>60){
                result = result+1;
                f = f-60;
            }
            cout << "La suma de las horas ingresadas son: "<<result<<":"<<f<<endl;

            break;
        case 35:
            cout << "Ingresa un numero N : ";
                    cin >> a;
                    while (a%2==0){
                        cout <<"El numero es par, ingrese un numero impar."<<endl;
                        cin >>a;
                    }
                    b = 2*a - 2;

                    for (int i=0; i<a; i++)
                    {
                        for (int j=0; j<b; j++)
                            cout <<" ";
                        b = b - 1;

                        for (int j=0; j<=i; j++ )
                        {
                            cout << " *";
                        }
                        cout << endl;
                    }

                    for (int i=a; i>=0; i--)
                    {
                        for (int j=b; j>0; j--)
                            cout <<" ";
                        b = b + 1;

                        for (int j=i; j>=0; j-- )
                        {
                            cout << " *";
                        }
                        cout << endl;
                    }


            break;
        case 36:
            cout << "Digite un numero N: "<<endl;
            cin >>d;
            f = 0;

            for (unsigned int i=0;i<d ;i++ ) {
                double t = factorial(i);
                f+=1/t;

            }
            cout << "El valor aproximado de e en base al numero "<<d<< " es: "<< f<<endl;


            break;
        case 37:
            cout << "Ingrese un numero N: "<<endl;
            cin >> a;
            b = 0;
            o = 1;
            p = 0;
            for (int i=0;i<a ;i++ ) {
                select = o;//8
                o = o+b;//13
                b = select;//8
                if (o<=a){
                    if (o%2==0){
                       cout << o << endl;
                       p += o;

                }



}


            }
            cout << "El resultado de la suma es: "<<p<<endl;


            break;
        case 38:
            cout << "Numero a: "<<endl;
            cin >>a;
            cout << "Numero b: "<<endl;
            cin >>b;
            cout << "Numero c: "<<endl;
            cin >>o;
            j = 1;
            select = 0;
            p = 0;
            result = 0;
            k = 0;
            while (select<o && p<=o){
                select = j*a;
                p = j*b;
                if (select>o) break;
                j = j+1;
                cout << select<<"+";
                if (p<o){
                cout << p<<"+";
                k +=p;
                }
                result += select;


            }
            cout << "="<<k+result<<endl;




            break;
        case 39:
            cout  << "Digite un numero N: "<<endl;
            cin >>a;
            h = a;
            b = 10;
            while (h>=0){
                h = a%b;
                b *= 10;
                cout << h << endl;
                h = h/b;

            }
            break;
        case 40:

            break;
        case 41:
            cout <<"Digite el numero A: "<<endl;
            cin >>a;
            select = 1;
            o = 2;
            b = 1;
            while (o<=a || o<=b) {
                if (a%o==0 || b%o==0){
                    select = select * o;
                    if (a%o==0) a=a/o;
                    if (b%o==0) b=b/o;

                }
                else{
                    o = o+1;
                }
            b +=1;
            }
            cout << "El mcm es: "<<select<<endl;
            break;
        case 42:
            break;
        case 43:
            cout << "Digite un numero: "<<endl;
            cin >> a;
            primo = true;
            b = 0;
            for (int i = 2;i<a && primo==true ;i++ ) {
                if (i%2==0){
                    primo = false;}
                else{
                    b += i;
                    cout << i << endl;
                    primo = true;
                }


            }
            cout << "El resultado de la suma es: "<<b<<endl;
            break;
        case 46:
            cout << "Digite el numero N: "<<endl;
            cin >> a;
            b = a;//13
            if (b>1){
                cout << b << endl;
                if (!(b%2==0)) b = (b*3)+1;
                while (b%2==0){
                    cout << b <<endl;
                    b /= 2;
                    if (b==1) break;
                    if (b%2!=0){
                        b = (3*b)+1;
                        cout << b<<endl;
                    }
                    if (b==1) break;
                }
                cout << b<<endl;
            }
            else cout << "1 es 1 "<<endl;


            break;
        case 47:
            cout << "Digite un numero N: "<<endl;
            cin >>a;
            b = (a*(a+1))/2; // enesimo numero triangular.
            cout << b << endl;

            break;

    }


}

        }


