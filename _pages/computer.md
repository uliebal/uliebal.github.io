---
permalink: /computer/
title: "Computer"

---

Hausstatistiken
---------------



{% include figure popup=true image_path="/assets/images/HausStats_StatisticsYearly.png" alt="Verbrauchsstatistiken" caption="Übersicht Verbrauch Strom (kWh), Wasser(m3), Heizung (kWh, von Öl) über mehrere Jahre. Besondere Ereignisse sind sichtbar, wie ein Heizungsausfall und Ersatz durch elektrische Wärmequellen, der Bruch eines Wasserschlauchs, elektrischer Mehrverbrauch im Coronawinter."%}

{% include figure popup=true image_path="/assets/images/Heating_Pellets-ConsumptionFit.png" alt="Jährliche Pellet Verbrauch" caption="Jährliche Verbrauch an Wärmeenergie von Pellets. Eine sigmidale Kurve fittet den Verbrauch mit einer geschätzten Frequenz von 365 Tagen."%}

{% include figure popup=true image_path="/assets/images/Heating_Pellets-Prediction.png" alt="Vorhersage Füllstand Pelletbunker" caption="Auf Basis der sigmoidalen Verbrauchsanpassung wird der Füllstand des Pelletbunkers vorhergesagt (blaue Linie). Die gemessenen Füllstände (schwarze Punkte) sind Abschätzungen des Verbrauchs aus dem Aschegewicht nach bestimmten Intervallen. Der optimale Zeitpunkt zum Wiederbefüllen ist durch das rote Kreuz markiert."%}

Arduino Projekte
---------------
Wir haben in der Familie die Gießaufgabe auf den Sohn verteilt. Jedoch schafft er es nicht immer rechtzeitig dieser kleinen Aufgabe nachzukommen. Der Papa möchte seinem Sohn natürlich mit einem technischem Gerät helfen: einem Sensor, der anzeigt, wann die Erde zu trocken ist. Die Inspiration kommt aus dem sehr eingänglichen und lehrreichen Buch [Elektronik ganz leicht, Florian Schäffer](https://www.thalia.de/shop/home/artikeldetails/A1049486808), abgewandelt mit einem Lichtwiderstand, damit die signalgebende Lampe auch nur strahlt wenn es dunkel ist. 

Das Gerät funktioniert super, alles einfachste Elektronik, kein Rechner nötig. Es ist aber ein konstanter Strom nötig, der sicherstellt, dass die Erde leitfähig ist. Der Aufbau ist nicht energieoptimiert, sodass etwa alle 6 Stunden die Batterie aufgeladen werden muss. Bei jedem Batteriewechsel habe ich mich aber zäh gezwungen nicht die Erde zu testen... das Prinzip funktioniert...

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
