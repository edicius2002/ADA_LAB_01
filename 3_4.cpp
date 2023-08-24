#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

template <typename Type> class CVector
{
    private:
        Type *m_pVect=NULL;
        int m_nCount=0;
        int m_nMax=0;
        int m_nDelta;
        void Init(int delta);
        void Resize();
    public:
        CVector(int delta){
            m_nDelta=delta;
        };
        void Insert(Type elem);
        void Print();
};


template <typename Type> void CVector<Type>::Resize()
{
    m_pVect = (int*)realloc(m_pVect, sizeof(int)*(m_nMax + m_nDelta));
    m_nMax += m_nDelta;
}

template <typename Type> void CVector<Type>::Insert(Type elem)
{
    if( m_nCount == m_nMax ){
        Resize();
    }
    m_pVect[m_nCount++] = elem;
}

template <typename Type> void CVector<Type>::Print()
{
    for(int i=0;i<m_nCount;i++){
        cout << *(m_pVect+i) << " ";
    }
    cout << endl;
}



int main(){
    CVector<int> a(10);
    for(int i=1; i<101;i++){
        a.Insert(i);
    } 
    a.Print();
}