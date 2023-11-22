#include<iostream>
/*
Program matriks segitiga atas
*/
int main(){
    using namespace std;
    int m, n;
    do{
        cout << "==============================="<<endl;
        cout << "masukkan jumlah baris ";
        cin >> m;
        cout << "masukkan jumlah kolom ";
        cin >> n;
        cout << endl;
        cout << "==============================="<<endl;
        if (m==n){
            int A[m][n];
            for (int i=1;i<=m;i++){
                for (int j=1;j<=n;j++){
                    if (i<=j){
                        cout << "Matriks A["<<i<<","<<j<<"] ";
                        cin >> A[i][j];
                    }else{
                        A[i][j]=0;
                        cout << "Matriks A["<<i<<","<<j<<"] " << A[i][j];
                        cout << endl;
                    }//end if
                }//end for j
            }//end for i
            cout << endl;
            cout << "==============================="<<endl;
            cout << "Matriks segitiga atas : "<<endl;
            for (int i=1;i<=m;i++){
                for (int j=1;j<=n;j++){
                    cout << A[i][j]<< " ";
                }
                cout << endl;
            }
        } else {
            cout<<"jumlah baris dan kolom harus sama"<<endl;
        }
    }while(m!=n);
    return 0;
}

/*
Sekian dan terima gaji
kelompok 5 MK PMN
*/

