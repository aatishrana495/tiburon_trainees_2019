#ifndef NODE3_H
#define NODE3_H


#include "ros/ros.h"
#include "std_msgs/Int32.h"
#include <cstdlib>
#include <sstream>

class Node3{
public:
    Node3(ros::NodeHandle _nh);
    void  chatterCallback1(const std_msgs::Int32::ConstPtr& msg);
    void  chatterCallback2(const std_msgs::Int32::ConstPtr& msg);
private:
    ros::NodeHandle nh;
    ros::Subscriber sub1;
    ros::Subscriber sub;

};

#endif //NODE3_H
