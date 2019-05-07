#include <tiburon_trainees_2019/task1/node3.h>


int main(int argc, char **argv){
    ros::init(argc, argv, "node1_listener_node2_listener");
    ros:: NodeHandle n;
    Node3 node3(n);
    return 0;
}
