This repository is created to facilitate new inductees of team tiburon to learn object-oriented programming,ROS and opencv.
    Task 1:
        1.You have to create 3 ros nodes.
        2.One node will publish natural numbers.
        3.second will subscribe them and publish their squares on a differnet topic.
        4.third will subscribe both natural number and their squares from both the nodes 1 and 2.

    Procedure to run task 1:
        1.In your catkin workspace build the package tiburon_trainees_2019 using
            - catkin build tiburon_trainees_2019
        2.Open four different terminals.
        3.execute these four commands on these four commands on the terminals
            - roscore
            - rosrun tiburon_trainees_2019 node1
            - rosrun tiburon_trainees_2019 node2
            - rosrun tiburon_trainees_2019 node3
