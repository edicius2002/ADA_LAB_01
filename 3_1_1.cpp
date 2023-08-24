#include<iostream>

using namespace std;

int gVect[100];
int gnCount;

void Insert(int elem)
{
    if( gnCount < 100 ){
        gVect[gnCount++] = elem;
    }
}

int main(){
    for(int i=1; i<101;i++){
        Insert(i);
    }
    for(int i=0; i<100;i++){
        cout << gVect[i] << " ";
    }
}