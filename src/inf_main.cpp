#include <ros_test/turtle_abstract.h>

std::shared_ptr<tutorial::AbstractTurtle> turtle;

void draw_u( bool cw ) {
    int sign;
    if ( cw ) {
        sign = -1;
    } else {
        sign = 1;
    }

    turtle->turn( sign * 45 );
    for (int i = 0; i < 2; i++) {
        turtle->forward(3);
        turtle->turn( sign * 90 );
    }
    turtle->forward(3);
    turtle->turn( sign * 45 );
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "ros_test");
    turtle = std::make_shared<tutorial::AbstractTurtle>();

    // turtle should draw an infinty sign
    double distance = sqrt(4.5);
    turtle->turn(45);
    turtle->forward( distance );
    draw_u( true );
    turtle->forward( 2 * distance );
    draw_u( false );
    turtle->forward( distance );

    turtle.reset();
    ROS_INFO_STREAM("Finished");

    return 0;
}
