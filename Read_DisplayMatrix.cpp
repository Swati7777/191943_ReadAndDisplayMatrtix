#include<iostream>
#include<conio.h>

using namespace std;

class matrix{
 int a;
 int b;
 int A[3][3];
 public:
  void read_matrix();
  void display_matrix();
};

void matrix::read_matrix()
{
 for(int i=1;i<=3;i++)
 {
  for(int j=1;j<=3;j++)
  {
   cout<<"A["<<i<<"]["<<j<<"] : ";
   cin>>A[i][j];
  }
 }
}

void matrix::display_matrix()
{
 for(int i=1;i<=3;i++)
 {
  for(int j=1;j<=3;j++)
  {
   cout<<" "<<A[i][j];
  }
  cout<<endl;
 }
}

int main()
{
 matrix m;
 m.read_matrix();
 m.display_matrix();
 getch();
 return(0);
}
