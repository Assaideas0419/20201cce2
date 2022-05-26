PImage img,img2;
void setup(){
   size(300,600); 
   img=loadImage("giga_chad_s.jpg");
   img2=loadImage("bullet.png");
}
int dy=0;
void draw(){
   background(255);
   imageMode(CENTER);
   image(img,mouseX,mouseY);
   if(mousePressed){
    image(img2,mouseX,mouseY-dy);
    dy++;
   }
}
