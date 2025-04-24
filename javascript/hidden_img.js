document = hidden_img.html
count = 0
function change(){
    document.getElementById("img").src = images[count]
    if(count === 2){
        count = 0
    }else{
        count += 1
    }
}

function swich(){
    document.getElementById("hidden tiger").style.display = "block"
}