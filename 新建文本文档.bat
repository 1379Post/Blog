hexo generate
cp -R public/* .deploy/1379Post.github.io
cd .deploy/1379Post.github.io
git add .
git commit -m ¡°update¡±
git push origin master