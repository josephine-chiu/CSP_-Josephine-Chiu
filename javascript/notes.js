document = notes.html
function hello(){
    let name = window.prompt("What is your name?", "Koro Sensei")
    document.getElementById("title").innerHTML = "Hello " + name + "!"
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
    document.getElementById("btn").style.background = "orange"
}
function show(){
    document.getElementById("hidden").style.display = "block"
}
function pop(){
    window.alert("For real. don't click this!")
}
function push(){
    document.getElementById("btn").style.backgroundColor = "red"
}