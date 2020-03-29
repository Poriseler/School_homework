#include <iostream>
#include <string>
#include <vector>
#include <list>

class Widget {
public:
    virtual ~Widget(){};
    Widget(const std::string &name): name(name) {}

    virtual void add(Widget *kid) {
        kids.push_back(kid->name);
        if (!(kid->name.empty())){
            for (auto element: kid->kids){
                kids.push_back(kid->name + " " +element);
            }
        }}
    virtual void print() {
        std::cout << name << std::endl;
        for (auto element: kids){

            std::cout << name << " " << element << std::endl;}}
protected:
    std::string name;
    std::vector<std::string> kids;
} ;

class Button: public Widget {
public:
    Button(const std::string &name): Widget(name) {}
};

class Edit: public Widget {
public:
    Edit(const std::string &name): Widget(name) {}
};




int main(){
    Button *yes = new Button("yes");
    Button *no = new Button("no");
    Widget *panel = new Widget("panel");
    panel->add(yes);
    panel->add(no);
    Edit *edit = new Edit("edit");
    Widget *window = new Widget("window");
    window->add(panel);
    window->add(edit);
   // panel->print();
    window->print();
    delete window;

}
