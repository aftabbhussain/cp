# NODE JS

### npm init, package.json, callback functions

---

Node JS is a runtime environment for Javascript. Its used to write backend using JS.

First we install node (and npm) from nodejs website and set their enviroment variables in path.

When we create a project we do `npm init` in it : it marks the start of a project, asks some questions and sets up the node environment, a package.json file will be created which will contain all the things that we have installed from npm store(which is useful when deploying the project).

Package.json stores the dependencies of the packages that we have installed in our project

![image.png](attachment:3058ee0a-6422-4252-a250-b64c5fe6964d:image.png)

server.js file is the main file which actually runs as a server, it interacts with other files which together make the backend

Nodemon (npm i nodemon) is a js library which restarts the server file automatically when it detects a change in the server file.

Callback functions are functions that are called by other functions during their execution, like a follow up task after the main task is finished.

![image.png](attachment:84b62276-2a65-4ab7-80da-3740a98a11af:image.png)

we can also define the function above outside too and then call through the function call passing the callback function as an argument.

### core node modules (fs and os)

---

![image.png](attachment:411127f9-aeec-46a1-9ec9-3ecc271bd7f2:image.png)

https://nodejs.org/docs/latest/api/ - documentation for core node modules

### Importing files

---

in order to import fields from other files we need to require it in the new file and we also need to module.exports all the exporting fields from the original file

![image.png](attachment:477b848b-07d6-4c10-bf21-039a520ff6e8:image.png)

### lodash library
