#include "ros/ros.h"
#include "std_srvs/Empty.h"

int main(int argc, char** argv)
{
    ros::init(argc, argv, "turtle_clear");
    ros::NodeHandle nh;

    ros::ServiceClient clear_client = nh.serviceClient<std_srvs::Empty>("clear");

    std_srvs::Empty srv;

    if(clear_client.call(srv)) // 통신이 잘 될때
    {
        ROS_INFO("Clear");
    }
    else // 통신이 실패했을때
    {
        ROS_ERROR("Failed");
        return 1;
    }

    return 0;
}