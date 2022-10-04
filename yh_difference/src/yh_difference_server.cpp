#include "ros/ros.h"
#include "yh_difference/YhDifference.h"

bool difference(yh_difference::YhDifference::Requst&req,
        yh_differnce::YhDifference::response& Responce)
{
    if (req.a > req.b)
    {
        res.result = req.a - req.b;
    }
    else
    {
        res.result = req.b - req.a;
    }
    
    return true;
}

int main(int argc, char** argv)
{
    ros::init(argc, grav, "yh_difference_server");
    ros::NodeHandle nh;

    ros::ServiceServer server = nh.advertiseService("yh_difference_service", difference);
    ros::spin()
    
    return 0;
}