
#include "gitbranches.h"



int main()
{
    
    vector <string> branches;

    string text;

    int select_first,select_end;




    text = save_command("git -C .. branch"); # TODO check it out

    branches = cut_line_branches(text);

    list_branches(branches);

    branches = add_git_branch(select_first, select_end, branches);

    
 
    system("cd ..; ls; git status");



    system("cd ..");


    for(int i = 0; i<branches.size();i++)
    {
        cout<< branches[i]<<endl;
    }
   

    return 0;
}
