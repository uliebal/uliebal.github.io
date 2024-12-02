---
permalink: /vita/
title: "Vita"
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
<ul><li><b>Titel</b>: Charakterisierung der rekombinante Expression von Wnt Proteinen in <i>Escherichia coli</i>.<a href="/assets/Files/Diplom_Liebal_2006.pdf"><i class="fa-solid fa-download"></i></a></li>
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
**Your Most Recent Work Experience:**

Short text containing the type of work done, results obtained,
lessons learned and other remarks. Can also include lists and
links:

* First item

* Item with [link](http://www.example.com). Links will work both in
  the html and pdf versions.

**That Other Job You Had**

Also with a short description.

Technical Experience
--------------------

My Cool Side Project
:   For items which don't have a clear time ordering, a definition
    list can be used to have named items.

    * These items can also contain lists, but you need to mind the
      indentation levels in the markdown source.
    * Second item.

Open Source
:   List open source contributions here, perhaps placing emphasis on
    the project names, for example the **Linux Kernel**, where you
    implemented multithreading over a long weekend, or **node.js**
    (with [link](http://nodejs.org)) which was actually totally
    your idea...

Programming Languages
:   **first-lang:** Here, we have an itemization, where we only want
    to add descriptions to the first few items, but still want to
    mention some others together at the end. A format that works well
    here is a description list where the first few items have their
    first word emphasized, and the last item contains the final few
    emphasized terms. Notice the reasonably nice page break in the pdf
    version, which wouldn't happen if we generated the pdf via html.

:   **second-lang:** Description of your experience with second-lang,
    perhaps again including a [link] [ref], this time placing the url
    reference elsewhere in the document to reduce clutter (see source
    file). 

:   **obscure-but-impressive-lang:** We both know this one's pushing
    it.

:   Basic knowledge of **C**, **x86 assembly**, **forth**, **Common Lisp**

[ref]: https://github.com/githubuser/superlongprojectname

Extra Section, Call it Whatever You Want
----------------------------------------

* Human Languages:

     * English (native speaker)
     * ???
     * This is what a nested list looks like.

* Random tidbit

* Other sort of impressive-sounding thing you did

----

> <email@example.com> • +00 (0)00 000 0000 • XX years old\
> address - Mytown, Mycountry
