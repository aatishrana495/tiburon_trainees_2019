#include <tiburon_trainees_2019/task1/node2.h>


int main(int argc, char **argv){
    ros::init(argc, argv, "node1_listener_node2_talker");
    ros:: NodeHandle nh;
    Node2 node2(nh);
    return 0;
}
