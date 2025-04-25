document = first_webpage.html

 function more(){
    if(document.getElementById("btn").style.display != "flex"){
        document.getElementById("btn").style.display = "flex"
        document.getElementById("show").innerHTML = "Show less"
    }else{
        document.getElementById("btn").style.display = "none"
        document.getElementById("show").innerHTML = "Show more"
    }
 }

