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

<div id="img2">
    <img src="https://images.ctfassets.net/0wjmk6wgfops/3WRVZrwr311SwlyzfTydlt/df15f5b0ab7a985f0762196bed3ee1f0/Antelope_Island_blue_skies_stock_AdobeStock_313773770.jpeg?w=1200&h=630&f=center&fit=fill"
    alt="Pretty mountains">
    <p id="link2">Image from: https://www.utah.com/destinations/state-parks/antelope-island-state-park/</p>
</div>