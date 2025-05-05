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

function change() {
    document.getElementById("img3").src = "https://images.ctfassets.net/0wjmk6wgfops/3WRVZrwr311SwlyzfTydlt/df15f5b0ab7a985f0762196bed3ee1f0/Antelope_Island_blue_skies_stock_AdobeStock_313773770.jpeg?q=70"
}

function back() {
    document.getElementById("img3").src = "https://www.visitutah.com/azure/cmsroot/visitutah/media/site-assets/articles-photography/article-photography-4/antelope-island-dsc_9849.jpg"
}