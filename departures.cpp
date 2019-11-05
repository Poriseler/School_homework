#include<iostream>
#include<fstream>
#include<iomanip>
#include<vector>

int main(int argc, char *argv[]){
    std::ifstream file(argv[1]);
    std::vector<std::string> odjazdy;
    std::vector<std::string> odjazdy_out;
    std::string word;
    while(file >> word) {
        odjazdy.push_back(word);
        odjazdy_out.push_back(word);}
    for(std::string& str : odjazdy){
        str.erase(str.end()-3);}
    int last_one = odjazdy.size() - 1;
    std::string input;
    while (std::cin >> input){
        input.erase(input.end()-3);
        if ((input.size() == odjazdy[last_one].size()) && (input > odjazdy[last_one])){
            std::cout << odjazdy_out[0] << std::endl;}
        else {
            for (int i = 0; i < odjazdy.size(); ++i){
                if((input.size() == odjazdy[i].size()) && (input < odjazdy[i])){
                    std::cout << odjazdy_out[i] << std::endl;
                    break;}
                else if (input.size() == 3 && (odjazdy[i+1].size() == 4)){
                    std::cout << odjazdy_out[i+1] << std::endl;
                    break;
                }
            }
        }
    }
    file.close();
}


