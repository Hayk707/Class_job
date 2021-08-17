#include "job.hpp"
//Inpiting the variable Pos returning it,that we can give to program output the criterie in function.
string pos(){
	string Pos;
 cout << "What's position do you want?\nSecurity worker\nReception Administractor\nPR manager\nDirector\nFounder\n";
    getline(cin, Pos);
    return Pos;
}
