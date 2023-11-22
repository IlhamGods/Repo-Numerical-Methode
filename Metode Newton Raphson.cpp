#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

float Fungsi(float x);
float FungsiTurunan(float x);

main()
{
int n=0;
float x[100];
float e = 0;

 cout<<"\t\t\t\t 2x^2 + 2x -4\n";
 cout<<"\t\t\t\t==============\n\n";
cout<<"\n";
cout<<"x(n+1) : x(n)-(f(xn)/f'(xn)) \n\n";

cout<<"Masukkan nilai x Awal : "; cin>>x[0];

cout<<"==================================================================\n";
cout<<"! n  ! \t xn   ! \tf(xn)   !\t f’(xn) !\tf(xn)/f’(xn) !\tx(n+1) !\n";
cout<<"==================================================================\n";

do
{
x[n+1] = x[n] - (Fungsi(x[n])/FungsiTurunan(x[n]));
cout<<n<<"\t"<<x[n]<<"\t"<<Fungsi(x[n])<<"\t"<<FungsiTurunan(x[n])<<"\t"<<Fungsi(x[n])/FungsiTurunan(x[n])<<"\t"<<x[n+1]<<"\t\n";
n++;
}while((Fungsi(x[n]))>e);
cout<<n<<"\t"<<x[n]<<"\t"<<Fungsi(x[n])<<"\t"<<FungsiTurunan(x[n])<<"\t"<<Fungsi(x[n])/FungsiTurunan(x[n])<<"\t"<<x[n+1]<<"\t\n";
cout<<"==================================================================\n\n";
cout<<"Jadi, Hasil yang memenuhi dari persamaan tersebut x = "<<x[n];
getch();
}

float Fungsi(float x)
{
return 2*pow(x,2)+pow(x,2)-3;
}

float FungsiTurunan(float x)
{
return 4*x+2*x;
}
