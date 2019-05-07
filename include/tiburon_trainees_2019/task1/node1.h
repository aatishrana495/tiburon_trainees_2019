#ifndef NODE1_H
#define NODE1_H


#include "ros/ros.h"
#include "std_msgs/Int32.h"
#include <cstdlib>
#include <sstream>

class Node1{
public:
    Node1(ros::NodeHandle _nh);
private:
    ros::NodeHandle nh;
    ros::Publisher chatter_pub1;
    std_msgs::Int32 msg1;
    int count;
};

#endif //NODE1_H
