---
permalink: /computer/PipettRobot/
title: "Pipettierroboter"
sidebar:
  nav: "computer"
---

Industrielle Arbeiten in der Biotechnologie nutzen Pipettierroboter, um exakt und reproduzierbar mit Flüssigkeiten zu hantieren. Für das StartUp BIOTAIX habe ich mit Xianghua Hu einen Lego-Pipettierroboter entwickelt, um ein praktisches Beispiel für diese Automatisierung präsentieren zu können. Unser Roboter basiert auf der publizierten Vorlage von [Gerber et al.](https://doi.org/10.1371/journal.pbio.2001413).

Anstatt der elektrischen Geräte aus Lego Technik haben wir einen Arduino Mikroprozessor mit Stepper Motoren (ROHS, 5V DC) und Servomotor benutzt (Micro Servo 9g NG90). Das digitale CAD-Modell ist in [LeoCAD](https://www.leocad.org/) geschrieben.


{% capture notice-2 %}
Download für Dateien des Pipettierroboters:
* [LeoCAD (52kB)](/assets/Files/PipettRobot/BIOTAIX_PipettRobot.ldr)
* [Platformio main.cpp file](/assets/Files/PipettRobot/main.cpp)
{% endcapture %}
<div class="notice">{{ notice-2 | markdownify }}</div>

<figure class="half">
  <a href="/assets/Files/PipettRobot/BIOTAIX_PipettRobot.png">
  <img src="/assets/Files/PipettRobot/BIOTAIX_PipettRobot.png" style="width:300%"></a>

  <a href="/assets/Files/PipettRobot/Foto-LabRobot.jpg">
  <img src="/assets/Files/PipettRobot/Foto-LabRobot.jpg"></a>

  <figcaption>Computermodel und Lego-Realisierung für den Pipettierroboter.</figcaption>
</figure>


<video controls preload="metadata" style="width:50%">
  <source src="/assets/Files/PipettRobot/260709_LegoRobotFirstMoves_small.mp4" type="video/mp4">
  Your browser does not support the video tag.
</video>