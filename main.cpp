#include <iostream>
#include <vector>
using namespace std;

void increment(vector<int> &value){
value[0]++;}

void mineurs(vector<double> a, vector<double> &delt){
int N = a.size();
int n = (N+2)/3;
int i = 2;
delt[0] = 1;
delt[1] = a[n-1];

for(int i = 2;i<=n;i++){
    delt[i] = a[i-2+n - 1]*delt[i-1]- a[i-2]*a[i-2+2*n-1]*delt[i-2];
}

}



int main()
{

    vector<double> a (7);
    a = {-1,-1,2,2,2,-1,-1};
    vector<double> delt(4);
    mineurs(a,delt);

int N = a.size();
int n = (N+2)/3;


int i1 =0;
int i2=n-1;
int i3=2*n-1;

int i,j;

cout << "La matrice A est \n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            {if (i == j){
            cout<<a[i2]<<' ';
            i2++;
        }else if(i-j == 1){
        cout<<a[i1]<<' ';
        i1++;
        }else if(j-i == 1){
        cout<<a[i3]<<' ';
        i3++;
        }else{
        cout<<0<<' ';}


            }
        cout << "\n";
    }




cout<<"\n"<<"Les mineurs sont"<<"\n";

for(int i = 0; i<=n; i++){

    cout<<"Delt_"<<i<<" = "<<delt[i]<<"\n";

}


    return 0;
}
