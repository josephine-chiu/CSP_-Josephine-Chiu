document = notes.html
function hello(){
    document.getElementById("title").innerHTML = "Hello World!"
}
count = 0
function change(){
    document.getElementById("img").src = images[count]
    if(count === 2){
        count = 0
    }else{
        count += 1
    }
}


function highlight(){
    document.getElementById("btn").style.backgroundColor = "orange"
    document.getElementById("btn").style.background = "white"
}
function normal(){
    document.getElementById("btn").style.backgroundColor = "gray"
    document.getElementById("btn").style.background = "black"
}
function show(){
    document.getElementById("hidden").style.display = "block"
}