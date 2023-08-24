#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class CVector
{
    private:
        int *m_pVect=NULL;
        int m_nCount=0;
        int m_nMax=0;
        int m_nDelta;
        void Init(int delta);
        void Resize();
    public:
        CVector(int delta){
            m_nDelta=delta;
        };
        void Insert(int elem);
        void Print();
};


void CVector::Resize()
{
    m_pVect = (int*)realloc(m_pVect, sizeof(int)*(m_nMax + m_nDelta));
    m_nMax += m_nDelta;
}

void CVector::Insert(int elem)
{
    if( m_nCount == m_nMax ){
        Resize();
    }
    m_pVect[m_nCount++] = elem;
}

void CVector::Print()
{
    for(int i=0;i<m_nCount;i++){
        cout << *(m_pVect+i) << " ";
    }
    cout << endl;
}



int main(){
    CVector a(10);
    for(int i=1; i<101;i++){
        a.Insert(i);
    }    
    a.Print();
}