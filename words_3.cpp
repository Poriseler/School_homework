#include <iostream>
#include <map>
#include <string>
#include <utility>

template <typename A, typename B>
std::multimap<B, A> flip_map(std::map<A,B> & src) {

    std::multimap<B,A> dst;

    for(typename std::map<A, B>::const_iterator it = src.begin(); it != src.end(); ++it)
        dst.insert(std::pair<B, A>(it -> second, it -> first));

    return dst;
}



int main(){
    std::map<std::string, int> words;
    std::string word;
    while(std::cin >> word){
        if(words.count(word) >=1){
            words[word] +=1;}
        else{
            words[word] = 1;}
    }
    std::multimap<int, std::string> reverseWords = flip_map(words);

    for (auto element: reverseWords){
        std::cout << element.second << " " << element.first << std::endl;}
}
