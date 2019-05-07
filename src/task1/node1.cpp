#include "tiburon_trainees_2019/task1/node1.h"


// contructor for the class Node1
Node1::Node1(ros::NodeHandle _nh) : nh(_nh) {
    count =0;
    chatter_pub1 = nh.advertise<std_msgs::Int32>("chatter_1", 1000);
    ros::Rate loop_rate(10);
    while(ros::ok()){
        msg1.data=count;
        chatter_pub1.publish(msg1);
        std::cout<<"I published from node1 : "<< count << std::endl;
        count++;
        ros::spinOnce();
        loop_rate.sleep();
    }
}
// end constructor
