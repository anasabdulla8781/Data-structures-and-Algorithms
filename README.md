# Data-structures-and-Algorithms
this is the global repository for datastructures and algorithms

---------------------------------    STEPS TO CONFIGURE THE REPOSITORY  ---------------------------- 

    1 - Do <git init>
    2 - Now we will have a master branch in local , but in remote repo we will be usually in main branch. its always good to have the same branch names in local and remote . so we need to rename the loacl branch to main . Do <git branch -m master main>
    3 - Now we need to check whether we are authorized in git or not to push / pull the changes . <git config user.name> and <git config user.email>.
        3.1 - if the above step is not giving any proper email id / user name , we are not configured the local repository for pull/push use <git config user.name "your name"> and <git config user.email "your email"> then again do the step 3
    4 - Perform <git remote add origin "https://github.com/anasabdulla8781/Data-structures-and-Algorithms.git">
    5 - perform <git reset --hard>. this will remove all the changes we made in the local repo ( so that syncing from the remote will be much easier )
    6 - Perform <git pull origin main>


--------------------------      STEPS TO DO THE MODIFICATOINS IN MAIN BRANCH     ----------------------------------
    1 - We will be in main now . we whatever the modifications we did , it will be on main now . After the modifications do <git status> - this will give whether anything is not commited there or not 
    2 - do <git add "filename"> to include the particular file or <git add .> to include all the files
    3 - Perform <git commit -m "the message for the commit">
    3 - Perform <git push origin main> . this will push all the commited changes from the main to main of the origin 