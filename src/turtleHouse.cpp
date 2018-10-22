#include <ros_test/turtle_abstract.h>
#include "ros/ros.h"
#include <geometry_msgs/Twist.h>

void drawHouse(int scale);
void doWeirdStuff();
int main(int argc, char **argv)
{
   ros::init(argc, argv, "ros_test");
   ros::NodeHandle n;
   ros::Publisher pub = n.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 1000);

   drawHouse(1);

   return 0;

}

void drawHouse(int scale){
   tutorial::AbstractTurtle turtle;
   turtle.turn(90);
   turtle.forward(1*scale);
   turtle.turn(-90);
   turtle.forward(1*scale);
   turtle.turn(135);
   turtle.forward(0.5*scale);
   turtle.turn(90);
   turtle.forward(0.5*scale);
   turtle.turn(90);
   turtle.forward(2*scale);
   turtle.turn(-135);
   turtle.forward(1*scale);
   turtle.turn(-135);
   turtle.forward(2*scale);
   turtle.turn(-135);
   turtle.forward(1*scale);
   turtle.turn(90);
}
