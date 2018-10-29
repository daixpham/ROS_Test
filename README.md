# Dokumentation - ros_test

# Was ist die erwartete Ergebniss von den Aufgabe ? 
Mit vorgegeben Parameter (Radius und Länge) sollte der Schilkröte (Turtle-sim) in der lage eine [Kreibogen]( https://de.wikipedia.org/wiki/Kreisbogen) zu malen (ziehe Abbildung 1.0)
![Abbildung 1.0](https://ibb.co/guhQ6V )

# Lösung und Herangehenweise 
  - Radius und Länge des Kreisbogen ist vorgegeben , um eine Kreisbogen zu malen wird es nur noch die Mittelpunktswinkel benötigt 
  - Die Formel für die Mittelpunktswinkel : Mittelpunktswinkel = (Länge / (Radius * PI )) * 180
    - Diese Formel befindet in der Zeile 96 in turtle_abstract.h
  - Der Schilkröte musst jetzt solange laufen bis er die gewünschte Mittelpunktswinkel erreichen.
    - Um diese Bedingungen zu erfolgen, wird immer der momentan Winkel von der Schildkröte  zu der Mittelpunkt mit der Mittelpunktswinkel vergleichen.
    - Um der Momentan winkel auszurechnen , wird die [Formel](https://de.wikipedia.org/wiki/Gleichschenkliges_Dreieck) für die berechnung der Winkel Gamma in eine [gleichschenkliges Dreieck](https://de.wikipedia.org/wiki/Gleichschenkliges_Dreieck) benötigt. Die Formel befindet in der Zeile 106 in turtle_abstract.h

# Test Starten 
1. Mit der Terminal zu den src/ ordner von der ROS Workspace navigieren 
2. ```git clone git@github.com:daixpham/ROS_Test.git``` oder ```git clone https://github.com/daixpham/ROS_Test.git```
3. ```source devel/setup.bash```
4. ```catkin_make```
5. ```roslaunch ros_test inf.launch ```

