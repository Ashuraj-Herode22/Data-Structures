# Beginner friendly repo 
**Who can contribute to this repo ?**
- It's intended for beginners, but anyone who is interested can contribute. <br />

**How to contribute ?**
- Few issues will be created, contributors must provide solutions to them and open up a PR(pull request).
- The "rookie" or "naive" contributions are acceptable but spammy and invalid aren't.
- Since it's a beginner friendly repo, beginner contributors should attempt to work on it.
- It'll be fine, if the solutions are bit rough. Contributors will be informed about their appraoch.

**This repository has the "hacktoberfest" tag on it, which indicates that this repo has taken part in Hacktoberfest. Issues opened will also have "hactoberfest" label on them.**

_The contributors are required to submit meaningful PR's_ \
_If the PR provides a solution for a particular issue(marked with "hacktoberfest" label) then that PR will be accepted and will be marked with a label of "hacktoberfest-accepted"._

### Getting started 

**Instructions**
- The extension of the file can be of any **Programming Language**. This means solution can be implemented in any **Programming Language**
- Put your solution in a folder. And the name of the folder should be **the name of the data structure**
- While opening your PR, name your PR as **name of the data structure and programming language used**

Let's start by forking this repository<br />
[ Forking or Fork means cloning or copying someones's repository into your own account ]
- Click on the fork button on the top right corner of the repository.
- After clicking on the button, a dialog box should appear, leave everything to default and press on proceed.
- After all this, you have successfully forked this repository.

Now let's clone the forked repository into your local working directory.
- Open up your terminal or git bash or git CMD.
- Now run the command.<br />
`git clone https://github.com/cesa-vit/Data-Structures`<br />
- Run `ls` or `dir` to list this cloned repository, you should be able to see `Data-Structures` <br />
- Now type `cd Data-Structures`. You should now be inside this cloned repository.
 > From now on we'll be calling the cloned repository as directory.
- Run `ls` to see all the contents of the directory.
- Now run `git checkout -b (branch name)`. You are now on `branch name` branch
- Now create a good solution.
- After doing everything, run `git status`. This will show you all the files you have changed with all the modifications.
- Now we need to put our changes to 2nd step, i.e we have to acknowledge our changes by
- `git add .`
> This will acknowledge all the files we have changed.
- `git add <name of the file>`
> This will only acknowledge the file or files which we have specified.
- Now we have to accept out changes by commiting the changes
- `git commit -m "-m is just a flag to give a statement, just like this one, which means this statement can be anything!"`
> Well now you did changes, you acknowledged those changes and even accepted those changes. <br />
The changes are only known by us, but the upstream url i.e the place where we forked this directory from doesn't know about any of the changes we made.
- Now run `git push origin [Branch Name]`
> The [Branch Name] is the name of the branch which we are at right now
- To check which branch we are at currently, run `git branch` <br />we should now see all the branches and the branch which we're at, will have `*`
- Let's go to our repository on the GitHub and we should see a button “Compare & pull request” and click it.
> Congratulations, you have successfully opened a PR.<br /> The PR will get accepted if you have provided the feasible solution.


**Thank you so much! Keep learning and growing. Enjoy to the fullest**
