#include <iostream>
#include <vector>

void print( std::vector<double> &vector){
    for(auto element: vector){
        std::cout << element << " ";}
    std::cout << std::endl;}

std::vector<double> operator +(const std::vector<double> &vector1, const std::vector<double> &vector2){
    std::vector<double> final = vector1;
    for(double element: vector2){
        final.push_back(element);
    }
    return final;
}

std::vector<double>& operator +=(std::vector<double> &old, const std::vector<double> &add_this){
    for (auto element: add_this){
        old.push_back(element);}
    return old;
}

int main() {
print(std::vector<double> {6.7, -12.3, 5} + std::vector<double> {0.5, -2.7, 19});
std::vector<double> vector {6.7, -12.3, 5};
print((vector += std::vector<double> {0.5, -2.7}) += std::vector<double> {19});
print(vector); }
