#include<iostream>
#include <cmath>
using namespace std;

float quadraticfuncplus (int a, int b, int c){
  float inverse = -b;
  float insqu = b*b-4*a*c;
  cout<<insqu<< "<--- discriminant"<<endl;
  float firststep = inverse + sqrt(insqu);
  float secondstep = firststep/(2*a);
  return secondstep;
}
float quadraticfuncminus (int a, int b, int c){
  float inverse = -b;
  float insqu = b*b-4*a*c;
  float firststep = inverse - sqrt(insqu);
  float secondstep = firststep/(2*a);
  return secondstep;
}

int main (){
int a;
int b;
int c;
cout << "a="<<endl;
cin >> a;
cout <<"b="<<endl;
cin >> b;
cout <<"c="<<endl;
cin >> c;

cout << quadraticfuncplus(a,b,c) << " ," <<quadraticfuncminus(a,b,c)<< endl;


return 0; }
