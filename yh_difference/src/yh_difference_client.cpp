#include "ros/ros.h"
#include "yh_difference/YhDifference.h"
#include <cstdlib>

int main(int argc, char** argv)
{
    ros::init(argc, grav, "yh_difference_client");

    if (argc != 3)
    {
        ROS_INFO("rosrun yh_difference_server yh_difference_client a b");
        ROS_INFO("a, b: int32 number");
    }
    ros::NodeHandle nh;

    yh_difference::YhDifference srv;
    srv.request.a = atoi(argv[1]);
    srv.request.b = atoi(argv[2]);

    if (yh_difference_client.call(srv))
    {
        
    }
}