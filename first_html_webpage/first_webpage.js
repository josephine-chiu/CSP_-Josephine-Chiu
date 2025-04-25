document = first_webpage.html
function more(){
    if(document.getElementById("extra"). style.display != "flex"){
    document.getElementById("extra").style.display = "flex"
document.getElementById("show").innerHTML = "Show less"
    }else{
        document.getElementById ("extra").style.display = "none"
    document.getElementById ("show").innerHTML = "Show more"
    }
}