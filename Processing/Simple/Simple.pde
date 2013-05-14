String words = "Annie";

void setup() {
    size(640, 360);
    textFont(createFont("Georgia", 36));
    textSize(36);
}

void draw() {
    background(200, 255, 255);
    line(30, 20, 85, 75);
    line(500, 0, 500, 100);
    stroke(1);

    text(words, 50, 120, 540, 300);
    
    triangle(30, 75, 58, 20, 86, 75);
}
