#include <tiburon_trainees_2019/task1/node1.h>


int main(int argc, char **argv){
    ros::init(argc, argv, "node1_talker");
    ros:: NodeHandle nh;
    Node1 node1(nh);
    ros::Rate loop_rate(10);
    while(ros::ok()){
        node1.execute();
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}
