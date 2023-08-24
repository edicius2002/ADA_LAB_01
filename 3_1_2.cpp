#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int *gpVect = NULL;
int gnCount = 0;
int gnMax = 0;

void Resize()
{
    const int delta = 10;
    gpVect = (int*)realloc(gpVect, sizeof(int) * (gnMax + delta));
    gnMax += delta;
}


void Insert(int elem)
{
    if( gnCount == gnMax )
    Resize();
    gpVect[gnCount++] = elem;
}

int main(){
    for(int i=1; i<51;i++){
        Insert(i);
    }
    for(int i=0; i<50;i++){
        cout << *(gpVect+i) << " ";
    }
}
