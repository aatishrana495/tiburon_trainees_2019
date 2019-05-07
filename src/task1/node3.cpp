#include "tiburon_trainees_2019/task1/node3.h"


// contructor for the class Node3
Node3::Node3(ros::NodeHandle _nh) : nh(_nh){
    sub = nh.subscribe("chatter_1", 1000,&Node3::chatterCallback1,this);
    sub1 = nh.subscribe("chatter_2", 1000,&Node3::chatterCallback2,this);

}
// end constructor

void  Node3::chatterCallback1(const std_msgs::Int32::ConstPtr& msg)
{
  std::cout<<"I heard from node1 : "<< msg->data << std::endl;
}

void  Node3::chatterCallback2(const std_msgs::Int32::ConstPtr& msg)
{
  std::cout<<"I heard from node2 : "<< msg->data << std::endl;
}
