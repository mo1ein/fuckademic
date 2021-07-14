## Git
### some most used git commands

revert unstaged changes(modified):
```
git checkout -- <file>
```

revert staged changes(after git add):
```
git reset <file>
```
rollback the last commit:
```
git revert HEAD
```

show the commit log in one line:
```
git log --oneline
```

show the commit log as a graph:
```
git log --graph
```

show changes over time for a speceific file
```
git log -p <file>
```

who changed what file and when in file
```
git blame <file>
```
