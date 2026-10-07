---
permalink: /computer/arduino/
title: "Arduino"
sidebar:
  nav: "computer"
---

Wir haben in der Familie die Gießaufgabe auf den Sohn verteilt. Jedoch schafft er es nicht immer rechtzeitig dieser kleinen Aufgabe nachzukommen. Der Papa möchte seinem Sohn natürlich mit einem technischem Gerät helfen: einem Sensor, der anzeigt, wann die Erde zu trocken ist. Die Inspiration kommt aus dem sehr eingänglichen und lehrreichen Buch [Elektronik ganz leicht, Florian Schäffer](https://www.thalia.de/shop/home/artikeldetails/A1049486808), abgewandelt mit einem Lichtwiderstand, damit die signalgebende Lampe auch nur strahlt wenn es dunkel ist. 

Das Gerät funktioniert super, alles einfachste Elektronik, kein Rechner nötig. Es braucht aber einen konstanter Strom, der die Leitfähigkeit der Erde misst. Der Aufbau ist nicht energieoptimiert, sodass etwa alle 6 Stunden die Batterie aufgeladen werden muss. Bei jedem Batteriewechsel habe ich mich aber zäh gezwungen nicht die Erde zu testen... das Prinzip funktioniert...

<figure class="half">
  <a href="/assets/images/arduino/2503_MoistSensor_LDR_fritzing.png">
  <img src="/assets/images/arduino/2503_MoistSensor_LDR_fritzing.png"></a>

  <a href="/assets/images/arduino/2503_MoistSensor_light.jpg">
  <img src="/assets/images/arduino/2503_MoistSensor_light.jpg"></a>

  <figcaption>Der Erdfeuchtesensor als Fritzing Diagramm und im hellen, wo die Lampe nicht strahlen soll, weil man es dann ja gar nicht bemerkt. Da die beiden Messenden frei in der Luft hängen, simuliert das die Trockenheit, bei der kein Strom zwischen ihnen fließt.</figcaption>
</figure>

<figure class="half">
  <a href="/assets/images/arduino/2503_MoistSensor_darkhumid.jpg">
  <img src="/assets/images/arduino/2503_MoistSensor_darkhumid.jpg"></a>

  <a href="/assets/images/arduino/2503_MoistSensor_darkdry.jpg">
  <img src="/assets/images/arduino/2503_MoistSensor_darkdry.jpg"></a>

  <figcaption>Im (halb-)Dunkeln lässt der Lichtwiderstand das Signal einer LED zu, jedoch nicht wenn die Erde feucht ist (links: beide Messenden im Wasserglas), sondern nur bei Trockenheit (rechts: Messenden sind elektrolytisch getrennt). </figcaption>
</figure>
