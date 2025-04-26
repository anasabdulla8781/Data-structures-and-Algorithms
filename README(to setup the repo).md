# Data-structures-and-Algorithms
this is the global repository for datastructures and algorithms

STEPS TO CONFIGURE 

    1 - Do <git init>
    2 - Now we will have a master branch in local , but in remote repo we will be usually in main branch. its always good to have the same branch names in local and remote . so we need to rename the loacl branch to main . Do <git branch -m master main>
    3 - Now we need to check whether we are authorized in git or not to push / pull the changes . <git config user.name> and <git config user.email>.
        3.1 - if the above step is not giving any proper email id / user name , we are not configured the local repository for pull/push use <git config user.name "your name"> and <git config user.email "your email"> then again do the step 3
    4 - Perform <git remote add origin "https://github.com/anasabdulla8781/Data-structures-and-Algorithms.git">
    5 - perform <git reset --hard>. this will remove all the changes we made in the local repo ( so that syncing from the remote will be much easier )
    6 - Perform <git pull origin main>