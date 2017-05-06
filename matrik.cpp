#include <iostream.h>
#include <conio.h>

void main()
{
 int a[20][20],b[20][20],c[20][20];
 int brsa, klmabrsb, klmb;
 
 cout<<"Baris matrik a : ";
 cin>>brsa;
 cout<<"Kolom matrik a Baris b : ";
 cin>>klmabrsb;
 cout<<"Kolom matrik b : ";
 cin>>klmb;
 
 //input matrik A
 cout<<"Masukkan matrik A"<<endl;
 for(int i=0;i<brsa;i++)
 for(int j=0;j<klmabrsb;j++)
 {
  cout<<"matrik a["<<i<<"]["<<j<<"] : ";
  cin>>a[i][j];
 }
 
 //input matrik B
 cout<<"Masukkan matrik B"<<endl;
 for(int i=0;i<klmabrsb;i++)
 for(int j=0;j<klmb;j++)
 {
  cout<<"matrik b["<<i<<"]["<<j<<"] : ";
  cin>>b[i][j];
 }
 
 //perkalian dua matrik
 for(int i=0;i<brsa;i++)
 for(int j=0;j<klmb;j++)
 {
  c[i][j]=0;
  for(int k=0;k<klmabrsb;k++)
  c[i][j]=c[i][j]+a[i][k]*b[k][j];
 }
 clrscr();

 //output matrik A
 cout<<"isi matrik A"<<endl;
 for(int i=0;i<brsa;i++)
 {
 for(int j=0;j<klmabrsb;j++)
  cout<<a[i][j]<<"  ";
  cout<<endl;
 }

 //output matrik B
 cout<<"isi matrik B"<<endl;
 for(int i=0;i<klmabrsb;i++)
 {
 for(int j=0;j<klmb;j++)
  cout<<b[i][j]<<"  ";
  cout<<endl;
 }
 
 //output matrik C
 cout<<"isi matrik C"<<endl;
 for(int i=0;i<brsa;i++)
 {
 for(int j=0;j<klmb;j++)
  cout<<c[i][j]<<"  ";
  cout<<endl;
 }
getch();
}