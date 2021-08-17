#include "job.hpp"

//Inpiting the variable MaxSAl returning it,that we can give to program output the criterie in funvtion
int maxsal(){
    int MaxSal;
    cout << "From 100000, what's maximum salary do you want?\n";
    cin >> MaxSal;
    assert(MaxSal >= 100000);
    return MaxSal;
}
