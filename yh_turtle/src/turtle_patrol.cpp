#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

int main(int argc, char** argv)
{
    ros::init(argc, argv, "tutle_patrol"); // 노드이름
    ros::NodeHandle nh; // 핸들링 넣는것

    ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 100);
    
    ros::Rate loop_rate(1);
    geometry_msgs::Twist msg; // 메시지 만들기
    msg.linear.x = 1.0; 
    
    while (ros::ok())
    {
        pub.publish(msg);
        msg.linear.x *= -1;
        loop_rate.sleep();
    }
    
    return 0;
}