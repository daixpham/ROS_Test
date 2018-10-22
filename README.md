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
