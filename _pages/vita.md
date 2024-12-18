---
permalink: /vita/
title: "Vita"
classes: wide
carousels:
    - images:
###########################
        - image: /assets/images/Logos/jmbe.jpg
          url: /assets/Files/paper/Liebal_BioLabSim_23.pdf
          caption: '2023: Simulation von Biotech-Experimenten für die Lehre.'
###########################
        - image: /assets/images/Logos/Journal_of_Fungi_logo_2019.png
          url: /assets/Files/paper/Liebal_GSMM-Umay_22.pdf
          caption: '2022: Computermodell des Stoffwechsels vom Brandpilz.'
###########################
        - image: /assets/images/Logos/frontiers.png
          url: /assets/Files/paper/Liebal_Exp2Ipynb_21.pdf
          caption: '2021: Maschinelles Lernen zur Analyse von Promotoren.'
###########################
        - image: /assets/images/Logos/bmc-logo.png
          url: /assets/Files/paper/Liebal_GSMM-Opol_21.pdf
          caption: '2021: Computermodell des Stoffwechsels einer methylotrophen Hefe.'
###########################
        - image: /assets/images/Logos/metabolites-logo.png
          url: /assets/Files/paper/Liebal_ML4MSMetabolomics_20.pdf
          caption: '2020: Literaturüberblick zu maschinellem Lernen für Metabolomics.'
###########################
        - image: /assets/images/Logos/mec_elsevier.jpg
          url: /assets/Files/paper/Liebal_CO2toSuc_18.pdf
          caption: '2018: Wirtschaftlichkeitsanalyse zur mikrobiellen CO2 Fixierung.'
###########################
        - image: /assets/images/Logos/ageing.jpeg
          url: /assets/Files/paper/Liebal_SystBioAging_15.pdf
          caption: '2015: Altersprozesse unter dem Blickwinkel der Systembiologie.'
###########################
        - image: /assets/images/Logos/BMC-Systems-Biology.png
          url: /assets/Files/paper/Liebal_StressosomeSims_13.pdf
          caption: '2013: Räumliche Simulationen der bakteriellen Signalverarbeitung.'
###########################
        - image: /assets/images/Logos/mbs.jpeg
          url: /assets/Files/paper/Liebal_SigBModelBsub_12.pdf
          caption: '2012: Evaluation von Signal-Scenarien der bakteriellen Stressantwort.'
###########################
        - image: /assets/images/Logos/jtb.jpg
          url: /assets/Files/paper/Liebal_MathSignBsub_10.pdf
          caption: '2010: Literaturüberblick zu Modellen bakterieller Signalverarbeitung.'
###########################
---
<!-- https://akuszyk.com/2023-05-03-yet-another-mermaid-in-github-pages-guide.html -->
<!-- http://mermaid.js.org/intro/ -->
<!-- <script type="module">
	import mermaid from 'https://cdn.jsdelivr.net/npm/mermaid@10/dist/mermaid.esm.min.mjs';
	mermaid.initialize({
		startOnLoad: true,
		theme: 'light'
	});
</script> -->
<script type="module">
  import mermaid from 'https://cdn.jsdelivr.net/npm/mermaid@11/dist/mermaid.esm.min.mjs';
  mermaid.initialize({ 
    startOnLoad: true, theme: 'base' });
</script>
----

<!-- >  In this style, the resume starts with a blockquote, where
>  you can briefly list your specialties, or include a salient
>  quote. Ending a line with a backslash forces a line break.

---- -->

Allgemein
---------
- Geburtsort: Magdeburg
- Geburtsjahr: 1981, 
- Mein 2. Saros-Zyklus endet am 16.10.2035

Bildung
---------

<details close>
<summary>11.02.2013: Dr.-Ing., <a href="https://www.sbi.uni-rostock.de/">SBI</a>, Universität Rostock, Rostock</summary>
<ul><li><b>Titel</b>: Regulation der Generellen Stress Antwort in <i>Bacillus subtilis</i>.<a href="/assets/Files/Dissertation_Liebal_2013.pdf"><i class="fa-solid fa-download"></i></a></li>
    <li><b>Prädikat</b>: magna cum laude</li></ul>
</details>

<details close>
<summary>28.07.2006: Diplom (Biochemie), <a href="https://www.biochemtech.uni-halle.de/">Martin-Luther-Universität Halle/Wittenberg</a>, Halle (Saale)</summary>
<ul><li><b>Titel</b>: Charakterisierung der rekombinanten Expression von Wnt Proteinen in <i>Escherichia coli</i>.<a href="/assets/Files/Diplom_Liebal_2006.pdf"><i class="fa-solid fa-download"></i></a></li>
    <li><b>Note</b>: 1,3 (sehr gut)</li></ul>
</details>

<details close>
<summary>Juli 2000: Abitur, Otto von Guericke Gymnasium, Magdeburg</summary>
<ul><li><b>Durchschnitt</b>: 2,5</li></ul>
</details>


Berufliche Erfahrungen
----------
<!-- https://stackoverflow.com/questions/66631182/can-i-control-the-direction-of-flowcharts-in-mermaid -->
<!-- https://mermaid.js.org/syntax/block.html -->
<!-- <pre class="mermaid">
%%{init:{'themeVariables': {'clusterBkg':'#FFFFFF', 'clusterBorder':'#FFFFFF'}}}%%
block-beta
   columns 8
   A["2021-2024<br>Teamleiter<br><a href="https://www.iamb.rwth-aachen.de/">iAMB, RWTH</a><br>Data Science und Management.<br>Lehrstrategien für die Datenanalyse.<br>Arbeit mit metabolischen Modellen."]:2 space B:2 space C:2
   space space space space space
   F:2 space E:2 space D:2
   C -> B
   B -> A
   F -> E
   D -> C
   E -> D 
</pre> -->
Eine Auswahl der wichtigsten beruflichen und akademischen Stationen.
<pre class="mermaid">
kanban
    RWTH2["2020-2024"]
        task1["Teamleiter,<br><a href="https://www.iamb.rwth-aachen.de/">iAMB, RWTH</a>"]
        task2["Prof. Dr. Lars Blank"]
        task3["Data-Science und -Management.<br>Lehrstrategien für die Datenanalyse.<br>Arbeit mit metabolischen Modellen."]
    RWTH1["2015-2019"]
        task1["PostDoc,<br><a href="https://www.iamb.rwth-aachen.de/">iAMB, RWTH</a>"]
        task2["Prof. Dr. Lars Blank"]
        task3["Fluss Analysen und lineare Optimierung des Hefe-Metabolismus.<br>Stammentwicklung für Succinatproduktion."]
    SBI2["2013-2015"]
        task1["PostDoc,<br><a href="https://www.sbi.uni-rostock.de/">SBI, Uni. Rostock</a>"]
        task2["Prof. Dr. Olaf Wolkenhauer"]
        task3["Bewertung des Einflusses von Sauerstoffradikalen auf die Alterung.<br>Lehre in Systembiologie, Betreuung von Masterarbeiten, Antragsstellung."]
</pre>
<pre class="mermaid">
kanban
    kaist["07-11/2008"]
        task1["Gastwissenschaftler,<br><a href="https://www.kaist.ac.kr/en/">KAIST</a>, Südkorea"]
        task2["Prof. Dr. Kwang-Hyun Cho"]
        task3["Modellkonstruktion und Simulationen über die evolutionäre Variabilität von Mechanismen der metabolischen Regulation.<a href="/assets/Files/2008_KAIST-Report.pdf"><i class="fa-solid fa-download"></i></a>"]
    palmerston["02/2007"]
        task1["Gastwissenschaftler<br><a href="https://www.massey.ac.nz/">Massey University</a>, Neuseeland"]
        task2["Prof. Dr. David Penny"]
        task3["Computeranalysen zur Effizienz von RNA-Basenpaarung im Bezug zur evolutionären \textit{RNA-world} Hypothese.<a href="/assets/Files/2007_NZ-Report.pdf"><i class="fa-solid fa-download"></i></a>"]
    SBI2["2005-2006"]
        task1["Diplomarbeit,<br>BPEL,<a href="https://www.oulu.fi/en">Uni. Oulu</a>, Finnland"]
        task2["Prof. Dr. Peter Neubauer"]
        task3["Optimierung der rekombinanten Expression von humanen Proteinen in Bakterien."]
</pre>

## Arbeiten am iAMB der RWTH

Zwischen 2022 und 2024 habe ich als Nachwuchsleiter die computergestützte Biotechnologie verantwortet. Dabei habe ich Studierende in Praktika und Abschlussarbeiten in einem motivierendem Arbeitsklima betreut. 
<figure class="full">
  <a href="/assets/images/24_iAMBCompBiotech.jpeg">
  <img src="/assets/images/24_iAMBCompBiotech.jpeg"></a>

  <figcaption>Die Gruppe für computergestützte Biotechnologie am iAMB im Frühling 2024. Neben Ulf Liebal (rechts), kam 2024 Tobias Alter (mitte) als Co-Leiter hinzu.</figcaption>
  <!-- Vlnr: Willy Mroczowski, Karan Kumar, Nina Röhre, Constantin Schedel, Tobias Alter, Samira van den Bogard (Winne), Aziz Ben Ammar, Titania Sugiarto, Ulf Liebal (fehlend: Paula Lanze)-->
</figure>

<details close>
<summary>Mehr Infos</summary>
In meiner Gruppe haben wir biotechnologische Prozesse simuliert und informative Analyse-Workflows entwickelt. Ein Kernelement meiner Forschung sind genomskalige metabolische Modelle von Mikroorganismen. Solche Modelle habe ich von verschiedenen Organismen erstellt (<a href="https://dx.doi.org/10.3390/jof8050524"><i>Ustilago maydis</i></a>, <a href="https://dx.doi.org/10.1186/s12896-021-00675-w"><i>Ogataea polymorpha</i></a>, <a href="https://dx.doi.org/10.1038/s44320-024-00060-7"><i>Bäckerhefe</i></a>. Die Modelle untersuche ich nach optimalen Bedingungen für biotechnologische Produktion von verschiedenen Substrat- und Zielkomponenten (z.B. <a href="https://dx.doi.org/10.1186/s12934-023-02283-z">Methanolumwandlung</a>, <a href="https://dx.doi.org/10.1002/bit.28693">Itaconat Produktion</a>). Ich verknüpfe Theorie und Experiment, um zum Beispiel durch statistische Versuchsplanung optimale Prozessbedingungen zu bestimmen (<a href="https://doi.org/10.1016/j.nbt.2024.08.505">Ginseng-enthaltende Stoffe in Hefe</a>, oder die Modellvorhersagen durch Experimente zu validieren (Genexpression in Bakterien <a href="https://dx.doi.org/10.1021/acssynbio.3c00084">1</a>, <a href="https://doi.org/10.1016/j.jbiotec.2005.05.028">2</a>). <br>
<br>
Auch maschinelles Lernen und KI habe ich für die Datenanalyse in der (<a href="https://dx.doi.org/10.3389/fbinf.2021.747428">Genexpression</a>) und für <a href="https://dx.doi.org/10.3390/metabo10060243">Metabolomics</a>) eingesetzt. Ich benutze Python für Simulation und Optimierung, z.B. lineare Optimierung, genetische Algorithmen oder maschinelles Lernen mit dem Ziel den FAIR-Standards zu entsprechen. Ich war Ansprechpartner für Datenmanagement, habe die Einführung eines elektronischen Laborbuches organisiert und war IT-Systemadministrator.<br>
<br>
Ich habe viel Erfahrung mit Anträgen bei unterschiedlichen Geldgebern, z.B. BMBF, DFG oder Horizon Europe, und habe mit hoher Erfolgsquote Anträge geschrieben. Auch in der akademischen Verwaltung war ich aktiv: als Gründungsmitglied
des Center for Computational Life Science (<a href="https://www.ccls.rwth-aachen.de/cms">CCLS</a>) an der RWTH, ich habe mehrere Berufungskommissionen begleitet und mit den Data Stewards der RWTH zusammengearbeitet.
<figure class="full">
  <a href="/assets/images/21_BioLabSim-Bescheid.jpeg">
  <img src="/assets/images/21_BioLabSim-Bescheid.jpeg"></a>

  <figcaption>Staatssekretär Dr. Dirk Günnewig, Dr. Ulf Liebal und Prof. Dr. Lars Blank bei der Übergabe des Förderbescheids für das Lehrprojekt BioLabSim in 2021.</figcaption>
  <!-- Vlnr: Willy Mroczowski, Karan Kumar, Nina Röhre, Constantin Schedel, Tobias Alter, Samira van den Bogard (Winne), Aziz Ben Ammar, Titania Sugiarto, Ulf Liebal (fehlend: Paula Lanze)-->
</figure>

</details>

## Publikationen

{% include carousel.html height="50" unit="%" duration="5" number="1" %}

