function more() {
    var extra = document.getElementById("extra"); //this is access to the id=extra in your html//
    var btn = document.getElementById("btn");
    if (extra.style.display === "none") { // IF the button is none (hidden), it needs to block (show).// 
        extra.style.display = "block"; 
        btn.textContent = "Show Less";
    } else {
        extra.style.display = "none"; //ELSE (meaning it's shown), it needs to be hidden
        btn.textContent = "Show More";
    }
}