#include <iostream>
using namespace std;

int main(){
    cout<<"This File is Created using cmd with Notepad Command."<<endl;
    cout<<"Now this line of code is add(modified) after git commit"<<endl;
    return 0;
}

/*
git commands

git --version

git config --global user.name "Your Name"

git config --global user.email "id@email.com"

git config --global --edit  //name and email directly
                            //press  esc  to save & press  :wq to exit

mkdir foldername   //creates new foldeer

cd <directory>     //change directory

repository is made to track a particular project

git init          //make repository(repo) in current folder
                  //initializes empty repositary in current folder
                  //to check use   dir   command
 
git status        //to get information about what changes were done before in current repo

git add filename.format  // to send the file from working directory to "staging area".

git commit        //to send the file from staging area to main repository
                  //files that are actually intended to track and to be used keep in repo are sent to staging area
                  //otherwise we just keep in working directory (untracked)
in complete command we actuall below line. we don't usen only  git commit
git commit -m "Message for the current action"

** |current directory| ->(git add)-> |staging area| ->(git commit)-> |repository|

git log           //to track how many commits you have done till now
                  //hashcodes are generated with proper user/editor details

for auto complete in editor you can use fishshell extention

after commiting current staging area files, if you make any new file that won't go to the staging area or commited repo
if you make changes in commited file terminal will show it is a modified flie
you need to commit it again

there will be different hashcode for every new commit

git add .         // (dot is there) used send all the files in staging area

git rm --cached -r .         //to remove all files from staging area

git checkout <commit hashcode/branch name>  //to go to a particular stage or commit/branch (time travel)

git branch        //to check current branch

git checkout master   // to go to the master(main) branch

git branch <branch name> // to make a new branch

git checkout -b <branch name>   //makes new branch and checkout in that simultaneaously

making something in new branch that doesn't reflect to its parent branch. You need to merge it to parent branch
to merge the current branch to parent branch..
go to the parent branch then use..

git merge <childbranch>

you need to do this untill you reach master branch

touch .gitignore       //to make a file that shoudn't go to repo
write <filename.format> inside .gitignore file to hide that file
even you can.  put .gitingnore  file inside it to hide it

# is used in .gitignore to comment something (like //)

*.ff         (.ff = .fileformat) this command is used to send all files of this fomrat to .gitignore


GitHub 

make a new repository

add details and press create  

attach orgin and follow the instruction to push

fill user id password and then give access to files

Your New repositary connected linked to git master branch is ready

git push      //to push in github

git diff <filename.format> // to see what changes are done in the file

git checkout <filename.format> // to revert the changes you have done

make an xcodeproject file

open github and search gitignore.. you have two options i. swift    ii. Objective-C

choose swift for now  -> copy all text inside it and paste it to .gitignore file

stage->commit-> xcodeproject file will be gone

//Cloning 

//before cloning go to a desired folder using cmd in your pc and start .git
i. go to github 
ii. search any repository
iii. press on <code> button -> copy HTTPS link
iv. now write this command

git clone <https link> 

the repository is cloned to your computer 

now do whatever you just after entering that folder $ cd <folder name> (cloned)
*/