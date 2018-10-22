#include <ros_test/turtle_abstract.h>
#include <geometry_msgs/Twist.h>
#include "ros/ros.h"
#include <unistd.h>

ros::Publisher pub;

void draw_circlePart(int m,int r, bool k);

void draw_circle();

int main(int argc, char **argv)
{
   ros::init(argc, argv, "ros_test");
   ros::NodeHandle n;
   pub = n.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 1000);

   ros::Rate loop_rate(10); // Hier wird jede 400 ms eine Nach
   if(!ros::ok()){
      return 0;
   }
   srand(time(NULL));
   int m = rand() % 1000+1000; // Die größe des Kreisbogen - Hier wird der zufaellig bestimmt
   int r = rand() % 6 +1; // Der Radius 
   draw_circlePart(m,r,false);
   ROS_INFO_STREAM("DONE");
   ros::Duration(5).sleep();
   // Hier wird Kunst gemacht 	
   ROS_INFO_STREAM("THIS IS WHERE THE ART BEGINS !");
   ros::Duration(1).sleep();
   while(ros::ok()){ // Solange keine Fehler auftreten wird Kunst generiert 
      m = rand() % 1000+1000; // Der Laufweg wird hier immer am beginn des Schleife zufaellig ausgewählt 
      r = rand() % 6 +1;
      int x = rand()%3;
      if(x>0)
        draw_circlePart(m,r,true);
      else
        draw_circle();
   }

}

void draw_circlePart(int m,int r, bool k){ // Hier wird der Kreisbogen 
int i=0;
   if(!k){
    m=2000;
    r=2;
   }
   while(i<m){
geometry_msgs::Twist msg;
   msg.angular.z=2;
   msg.linear.x=r;
   pub.publish(msg);
   i++;
   usleep(100);
}
}


void draw_circle(){
   int i=0;
   while(i<5000){
      geometry_msgs::Twist msg;
      msg.angular.z=2;
      msg.linear.x=3;
      pub.publish(msg);
      usleep(100);
      i++;
}
}


