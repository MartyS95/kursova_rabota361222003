#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int b = 0;
    int index = 0;
    cout << 
       "Da se sustavi programa za obrabotka na masiva A[N,N], kudeto dannite sa celi chisla v intervala [-1000;1000]
        Programata da izvurshi slednite deistviq:
        otpechatvane na uslovieto
        otpechatvane na imenata na avtora na programata 
        vuvejdane na vhodnite danni 
        otpechatvane na vhodnite danni
        a)da se obrazuva ednomeren masiv C[N] elementite na koito sa broq polojitelnite elementi na syotvetniq red ot masiv A 
        b)polucheniqt masiv da se sortira po golemina
        otpechatvane na poluchenite rezultati sled obrabotka a) i b)
        "<<endl;
    cout << "Avtor: Martin Simeonov Simeonov 361222003";
    cout << "Enter the size of the array A: ";
    cin >> n;
    
    // suzdavane na masiv A
    int **A = new int*[n];
    for(int i=0; i<n; i++) {
        A[i] = new int[n];
    }
    cout << "Enter the elements of the array A: " << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> A[i][j];
            if(A[i][j] > 0) {
            b=b+1;
            }
        }
    }

   //suzdavane na masiv C ako ima dostatuchno polojitelni chisla
    if(b>0){
    int *C = new int[b];
     for(int i=0; i<b; i++) {
        C[i] = 0;
    }
    
    //napulvane na masiva C s polojitelni chisla
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(A[i][j] > 0) {
                C[index] = A[i][j];
                index++;
            }
        }
    }
    //masiv C predi sortirane 
    cout << "Array C before sorting:" << endl;
    for(int i=0; i<b; i++) {
        cout << C[i] << " ";
    }
    cout << endl;
    
    //sortirane
    sort(C, C+b);
    
    //masiv c sled sortirane
    cout << "Array C after sorting:" << endl;
    for(int i=0; i<b; i++) {
        cout << C[i] << " ";
    }
    cout << endl;
    }else{
        cout<<"There are no positive numbers in this array"<<endl;
    }
    
    
    return 0;
}

