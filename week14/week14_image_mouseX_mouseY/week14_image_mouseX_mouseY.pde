PImage img;
void setup(){
  size(400,400);
  img=loadImage("giga_chad_s.jpg");
}
void draw(){
  image(img,mouseX,mouseY);
}
