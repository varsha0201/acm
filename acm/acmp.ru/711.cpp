#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
 
struct f
{
    string name;
    double points, l;
};

int auth_cmp(const void* a, const void* b)
{
    info* c = (info*)a;
    info* d = (info*)b;
    return strcmp(c->l, d->l);
}

map<string, double> m;
int main(){

    int n, m;
    cin >> n >> m;
    int index, s;
 
    f a[n];
 
    for(int i = 0; i < n; i++ ){
        cin >> a[i].name;
        for(int j = 0; j < m; j++){
            cin >>a[j].points; 
            a[i].l += a[j].points;

        }
        m[a[i].name] = a[i].l;
        //mini = min(mini, a[i].l);
        
    }
     double maxi = -10;
    map<string, double>:: iterator it;

    for(it = m.begin(); it != m.end(); it++){
       maxi = max(maxi, (*it).second);
    }
     for(it = m.begin(); it != m.end(); it++){
       if((*it).second == maxi){
        cout << (*it).name;
        return 0;
       }
    }
    // qsort(name, num, sizeof(info), auth_cmp); //по авторам

    // // for(int i = 1; i < n; i ++){
    // //     if(a[i].l < s){
    // //         s = a[i].l;
    // //         index = i;
    // //     }
    // // }
    // if(n == 1){
    //     cout << a[0].name;
 
    // }
    // else {
    //   cout << a[n - 1].name;
    //  }
}