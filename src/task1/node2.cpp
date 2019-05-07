#include "tiburon_trainees_2019/task1/node2.h"


// contructor for the class Node2
Node2::Node2(ros::NodeHandle _nh) : nh(_nh){
    count =0;
    chatter_pub2 = nh.advertise<std_msgs::Int32>("chatter_2", 1000);
    sub = nh.subscribe("chatter_1", 1000,&Node2::chatterCallback,this);
    ros::spin();

}
// end constructor

void Node2::chatterCallback(const std_msgs::Int32::ConstPtr& msg)
{
  std::cout<<"I heard from node1 : "<< msg->data << std::endl;
  int k = msg->data;
  countN2 = k*k;
  msg2.data=countN2;
  chatter_pub2.publish(msg2);
  std::cout<<"I pulblished from node2 : "<< countN2 << std::endl;
}
