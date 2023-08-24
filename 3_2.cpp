#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Vector
{
    int* m_pVect=NULL,
    m_nCount=0,
    m_nMax=0,
    m_nDelta=10;
};

void Resize(Vector *pThis)
{
    pThis->m_pVect = (int*)realloc(pThis->m_pVect, sizeof(int)*(pThis->m_nMax + pThis->m_nDelta));
    pThis->m_nMax += pThis->m_nDelta;
}

void Insert(Vector *pThis, int elem)
{
    if( pThis->m_nCount == pThis->m_nMax ){
        Resize(pThis);
    }
    pThis->m_pVect[pThis->m_nCount++] = elem;
    
}


int main(){
    Vector a;
    Vector* b=&a;
    for(int i=1; i<101;i++){
        Insert(b,i);
    }
    for(int i=0; i<100;i++){
        cout << *(b->m_pVect+i) << " ";
    }
}