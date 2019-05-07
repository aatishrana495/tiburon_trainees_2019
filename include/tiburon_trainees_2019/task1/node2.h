#ifndef NODE2_H
#define NODE2_H


#include "ros/ros.h"
#include "std_msgs/Int32.h"
#include <cstdlib>
#include <sstream>

class Node2{
public:
    Node2(ros::NodeHandle _nh);
    void chatterCallback(const std_msgs::Int32::ConstPtr& msg);
private:
    ros::NodeHandle nh;
    ros::Publisher chatter_pub2;
    ros::Subscriber sub;

    std_msgs::Int32 msg2;
    int count;
    int countN2;
};

#endif //NODE2_H
