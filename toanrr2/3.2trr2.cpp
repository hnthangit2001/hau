#include <iostream>
#include <stack>
#define MAX 100
using namespace std;

class Dothi{
    int     n;
    int     A[MAX][MAX];
    public:
    bool    chuaxet[MAX];
    void    readdata();
    void    set();
    void    StackDFS(int u);
};

void Dothi::readdata(){

    cin >> n;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) cin >> A[i][j];
}
void Dothi::set(){

    for(int i=1; i<=n; i++) chuaxet[i]=true;

}

void Dothi::StackDFS(int u){
    stack<int>  nganxep;
    cout << " " << u;
    chuaxet[u]=false;

    nganxep.push(u);

    while(!nganxep.empty()){

        int s=nganxep.top();

        nganxep.pop();

        for(int i=1; i<=n; i++)

            if((A[s][i]==1)&&(chuaxet[i]==true)){

                cout << " " << i;

                chuaxet[i]=false;

                nganxep.push(s);

                nganxep.push(i);

                break;

            }

}

}

int main(){
    Dothi   G;
    G.readdata();
    G.set();
    G.StackDFS(1);
    return 0;

}
