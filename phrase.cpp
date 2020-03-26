#include <cstdlib>
#include <iostream>
#include <map>
#include <string>

int main(int argc, char *argv[]) {
    int n = std::atoi(argv[1]);
    std::map<std::string, int> words;
    int i=1;
    std::string word;
    std::string space = " ";
    std::string previous_word ="";
    int flag = 0;
    while(std::cin >> word){
        if(word.size() == n){
            words[word] +=1;
            continue;}
        else if (word.size() > n){
            previous_word = "";}
        else{
            flag +=1;
            if (flag ==1){
                previous_word = word;}
            else{
                previous_word = previous_word + space + word;
          }}
        if((n - previous_word.size() == 1) or (n - previous_word.size() > 0)){
                previous_word = word;
                }
        else if (previous_word.size() == n){
            words[previous_word] +=1;
            previous_word = "";
            flag=0;}
        else{
            ;}
    }
    int highest = 1;
    int flagg = 0;
    for(auto element: words){
        if(element.second > highest){
            highest = element.second;
            flagg = 1;}}

    for(auto element: words){
        if(element.second == highest){
            std::cout << element.first << std::endl;
            flagg = 1;}
    }
    if(flagg){
        std::cout << highest << std::endl;}
}
