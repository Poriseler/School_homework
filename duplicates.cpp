#include <iostream>
#include <algorithm>
#include <vector>


int main(int argc, char *argv[]){
    using namespace std;

    int liczba;
    vector<int> liczby;
    vector<int> powt_liczby;
    while(cin >> liczba){
        liczby.push_back(liczba);
    }
    sort(liczby.begin(), liczby.end());

    for(int i = 1; i< liczby.size(); ++i){
        if (liczby[i-1] == liczby[i]){
            powt_liczby.push_back(liczby[i]);
        }
    for(int i = 1; i < powt_liczby.size(); ++i){
        if(powt_liczby[i-1] == powt_liczby[i]){
            powt_liczby.erase(powt_liczby.begin() + i);
        }
    }

    }
    for (auto element: powt_liczby){
        cout << element << " ";
    }
}
