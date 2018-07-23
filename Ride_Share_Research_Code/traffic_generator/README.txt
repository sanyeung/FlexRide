To acquire a Brinkhoff Road Network:
1. go to http://mntg.cs.umn.edu/tg/index.php
2. Drag the map to the desired location
3. Choose the "Draw Box" option from below the label "Drag and draw to choose area :"
4. click and drag a box on the map, this will be the area where the road network will be
5. In the dropdown next to "Choose the traffic model", select "Brinkhoff"
6. Fill out the text box next to "Email:" with your email address and choose a different name next to "Name:" if desired.
7. Enter the the number of starting vehicles, simulation time, and vehicles that are added each time unit
8. Check the box to the left of "Check to receive road networks in txt format" if that is the desired output format.  For the coordinate parser that is used to generate the necessary vertex and edge files for the ride sharing simulation, txt are used.
9. Open the email sent by "Minnesota Traffic Generator", links will be provided to the files containing the vertices (they refer to them as nodes) and edges. There will also be a link to what they call the benchmark (a file that lists the location of each vehicle at each point in time to represent traffic). These three files must be placed in the "data_utilities/input" file so they can be converted to the necessary files for the simulator.

Refer to the data_utilities readme for information on how to convert the vertices and edges into valid simulator input 

To generate random requests for a road network:
1. run "./request_gen"
2. requests will be output to newtaxi.dat in the tsharesim/first_graph folder (the location it needs to be in for use with the simulator)

Note: the request_gen program is set for 500 random requests (for the Rolla road network), but this can be changed in the program.  The times of the requests are set according to the current simulator parameters (virtual time starting at 25200)

To generate traffic updates for a road network:
1. run "./traffic_gen"
2. traffic will be output to traffic.txt in the tsharesim/first_graph folder (the location it needs to be in for use with the simulator)

Note: same notes apply here as they did for the request_gen (except it is set for 375 traffic updates as opposed to 500)


