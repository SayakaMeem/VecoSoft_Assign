cd D:\GitProjects\VecoSoft_Assign
git checkout feat/optional-mocha
git add README.md
git commit -m "docs: add readme with live link https://optional-mocha.vercel.app/"
git push origin feat/optional-mocha

# if you want it on main too
git checkout main
git merge feat/optional-mocha
git push origin main