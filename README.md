# ESS - basic ROS test

This test should examine basic knowledge about **[ROS](http://www.ros.org)**. Please remove all errors within this package - even the ones which are not obvious. At least the two launch files (ros_test.launch and inf.launch) have to work. Additionally you have to solve the tasks written in the email. Some general points:

## ROS

ROS should be used in the **"kinetic"** version. In principle you can use any Linux as operating system, but **Ubuntu 16.04** is strongly recommended.

## source code

* Your code must be written in **C++**.
* Please pay attention to the **project guidelines** of our workgroup. (*should be attached to the same email*)

## version management

The results of your test should be send to us as a **git** repository. You can choose between uploading it to bitbucket, gitlab or github and give us (read) access or send it by email as zip-archive.

We recommend using git from the start.

## documentation

We want to have a short documentation of your work. The following content is requested:

* Where did you make changes?
* What was your approach?
* How does your solution look like?

The documentation could be a text file (Markdown is allowed) or a **PDF** file. We will reject office documents (like docx, odt, ...). There is not guideline about the length of your documentation - it should be complete.




# Dokumentation - ros_test
  Welche Punkte wurden bearbeitet?
* package.xml:
      Fehlermeldung beim start des Pakets - joy wurde nicht gefunden
      herangehensweise:
        Google-Suche nach Fehlermeldung & Anpassung der Datei anhand der Kriterien im Anhang
        hinzugefügt:
  * ```<maintainer email="xpham@ovgu.de">Dai Pham Xuan</maintainer>```
  * ```<maintainer email="estauseb@ovgu.de">Erik Stausebach</maintainer>```
  * ```<maintainer email="christoph.alarich@ovgu.de">Christoph Alarich</maintainer>```
  * ```<license>MIT</license>```
  * ```<depend>joy</depend>```
* roslaunch ros_test ros_test
* launch/ros_test.launch:
      Fehlermeldung ros_main_nodes nicht gefunden
      herangehensweise:
        Suche in CMakeLists.txt nach ros_main_nodes
        Keine Treffer, aber main_node 
      geändert:
         <node pkg="ros_test" type="main_node" name="turtle_controll" output="screen" >
* Package ist nun ausführbar.
* roslaunch ros_test main_node
    Funktion in main.cpp soll [] Zeichen, zeichnet aber nur zwei Seiten des Quadrats
    herangehensweise:
      For-Schleife "untersucht" und dabei wurde folgendes Problem festgestellt
  * For-Schleife iteriert nur 2 statt 4x
    geändert:
      ```for (int i = 0; i < 4; i++)```
# Erstellen der eigenen Klasse ( Haus zeichnen via Turtlesim):
  "abstract_turtle"-Klasse wir importiert um turtlesim einfacher zu nutzen.
  Der Pfad wurde geplant und in die Funktion drawHouse(int scale) eingefügt
  parameter scale bestimmt wie groß das Haus gezeichnet werden soll.
   
   
   
   
   
   
 Für die Bearbeitung der Aufgabe haben wir uns am Freitag (19.10.2018 9-13:00 getroffen sowie am Montag von 9:00 -11:00 / 16:00 -18:00) an der Fin getroffen.
      Erik Stausebach hat die Klasse turtleHouse.cpp geschrieben.
     Dai Pham schrieb die Doku und beteiligte sich an der Suche nach Fehlern
     Christoph Alarich suchte nach den Ursachen für die Probleme mit dem Start des Pakets
