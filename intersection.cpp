#include<iostream>
#include<vector>


std::vector<int> intersection(const std::vector<int> pierwszy,const std::vector<int> drugi){
    std::vector<int> wspolny;
    int i=0;
    if (pierwszy > drugi) {
        for (auto element: drugi){
            for(i=0;i<=pierwszy.size(); ++i){
                if (element == pierwszy[i]){
                    wspolny.push_back(element);}}}}
    else {
        for (auto element: pierwszy){
            for(i=0;i<=drugi.size(); ++i){
                if (element == drugi[i]){
                    wspolny.push_back(element);}}}}

    return wspolny; }


int main () {
for (int element: intersection(std::vector<int> {-7, 2, 3, 7, 15, 18, 23},
std::vector<int> {-8, 3, 5, 8, 10, 15})) {
std::cout << element << " "; }
std::cout << std::endl; }


