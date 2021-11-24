
# Praegemaschine
industrialPhysics Model and Automatio Studio template of an embossing machine

Ordnerstruktur
3D-Modelle: all 3d models from Inventor

AS_Praegemaschine: Automation Stuido Project

IPhysics_export: COMTCP

Dokumentation: Screenshots as step by step guide

Der Ordner “01_Export_aus_Autodesk_Inventor” zeigt das Exportieren des 3D Modells aus Autodesk
Inventor als STEP Datei in einen Ordner. Die so erzeugte Datei wird in
“02_Import_in_Industrial_Physics” erneut aufgegriffen und in die Industrial Physics Umgebung
importiert.
Da es seien kann, dass das importierte Modell auf die Achsen der IPhysics Umgebung falsch
ausgerichtet ist erklärt “03_Ausrichten_des_Modells_und_anpassen_der_Farben” wie man das
Gesamtmodell Dreht und es auf die neue Umgebung anpasst. Außerdem wird auch erklärt wie man
die Farben der einzelnen Objekte anpasst und diese auch transparent macht.
Um nachträglich einfache Objekte in Industrial Physics zu erzeugen geht der Punkt
“04_Intern_Objekt_Erzeugen” näher darauf ein. Es wird anhand eines Zylinders gezeigt wie dieser
erzeugt, gedreht und verschoben wird. Er dient bei dieser Anlage als Material.
In Ordner “05_Objekteigenschaften_und_Bewegung” wird diesem Material die Eigenschaft
“Dynamisch” zugewiesen. Dies bedeutet, dass das Objekt zusätzlich zum Kollisionskörper auch eine
Masse besitzt. Das Objekt reagiert somit auf Seine Umgebung. Es wird außerdem gezeigt wie ein
Hydraulikzylinder seine Bewegungsreichweite eingestellt bekommt. Es wird seine Achse in die
gewünschte Position gedreht, dann die Translation entlang der gewünschten Achse eingestellt und
die Antriebsart, sowie die Bewegungsgrenzen definiert. Bei diesem Körpe r handelt es sich anders als
bei dem Material um einen Kinematischen Körper, da uns seine Masse für die Simulation nicht
weiter interessiert und er sich auch nur in seinen Grenzen entlang seiner Achse bewegen soll.
Punkt “06_Lichttaster” erklärt wie man nachträglich das Modell um einen Lichttaster erweitert.
Dieses wird auch so eingestellt das der ausgelöste Taster optisch im Modell erkennbar ist.
Um das Modell noch vor der Verbindung mit dem Automation Studio in Bewegung zu sehen wird in
Punkt “07_Simulation_in_IPhysics” erklärt wie man die Bewegungsabläufe bereits vorher in einer
internen Simulation getestet werden können. Hier können auch Signale innerhalb von IPhysics
genutzt werden um einzelne Bewegungen zu starten.Um die Simulation länger durchlaufen lassen zu können kann es nützlich sein statt einzelner
Materialien eine Materialquelle zu erstellen. Diese Erzeugt nach einer bestimmten Zeit ein Material
nach Vorbild des untergeordneten Objektes. Das vorgehen wird in “08_Materialquelle_erzeugen”
erläutert.
Punkt “09_ComTCP_Verbindung” beschäftigt sich mit dem vorbereiten aller Einstellungen in IPhysics
die für die Kommunikation noch erforderlich sind. Dazu gehört das verknüpfen der gewünschten Ein-
und Ausgänge, sowie das einstellend er IP-Adresse des Servers bzw. Clienten und das exportieren
der HIL Konfiguration.
Um die Kommunikation im Automation Studio herzustellen muss die Erzeugte Datei importiert
werden und verknüpft. Diese Schritte werden alle in Punkt
“10_Verbidnung_mit_dem_Automation_Studio” erklärt.
In “11_Simulieren_ueber_das_Automation_Studio” wird aufgeführt wie die bis hier erstellte
Simulation zu starten ist und wie man die Variablen und somit die voreingestellten Bewegungen vom
Automation Studio steuert.
