## 1. Présentation de KidsBlock

### 1.1 Installation de KidsBlock

#### 1.1.1 Installer KidsBlock sur un système Windows

1. Vous pouvez télécharger KidsBlock depuis :

   - Lien : http://xiazai.keyesrobot.cn/KidsBlock.exe

   - Fichier fourni : ![img](../media/an1-1.png)

2. Après le téléchargement, cliquez sur « KidsBlock.exe » ![image1](../media/an1.png)

3. Cochez « **Anyone who uses this computer(all users)** » (Toute personne utilisant cet ordinateur (tous les utilisateurs)) puis cliquez sur « **Next** » (Suivant).

![img](../media/an2.png)

4. Cliquez sur « **Browse...** » (Parcourir...) pour choisir un chemin d'installation (ici nous choisissons le disque C ; vous pouvez choisir n'importe quel emplacement), puis cliquez sur « **Install** » (Installer). L'installation est en cours !

![img](../media/an3.png)

![img](../media/an4.png)

5. Une fois l'installation terminée, cliquez sur « **Finish** » (Terminer) pour l'ouvrir.

![img](../media/an5.png)

6. Si un avertissement apparaît, cliquez simplement sur « **Allow access** » (Autoriser l'accès) pour accéder à la page principale du logiciel.

![img](../media/an6.png)

---

#### 1.1.2 Installer KidsBlock sur MacOS

1. Veuillez d'abord télécharger le package KidsBlock : http://xiazai.keyesrobot.cn/KidsBlock.dmg

![img](../media/an7.png)

2. Cliquez sur KidsBlock et faites glisser le « **KidsBlock Desktop** » dans « **Applications** », comme indiqué ci-dessous.

![img](../media/an8.png)

3. Après l'installation, l'icône KidsBlock apparaîtra dans le pavé d'opération :

![img](../media/an9.png)

4. Cliquez sur l'icône KidsBlock pour entrer dans le logiciel. Si cela échoue, veuillez modifier certains paramètres de l'ordinateur pour y accéder à nouveau. Cela est dû au fait que les systèmes Mac, par défaut, n'autorisent l'installation que depuis l'App Store, de sorte que les autres ne sont pas autorisés à être installés.

![img](../media/an9-1.png)

5. Ouvrez les paramètres et cliquez sur Confidentialité et sécurité. Changez l'option de sécurité en « App Store et développeurs approuvés », et cliquez sur « Ouvrir quand même ».

![img.](../media/an9-2.png)

6. Cliquez sur « Ouvrir » pour accéder à nouveau au logiciel bloqué.

![img](../media/an9-3.png)

7. Après les réglages, cela peut fonctionner normalement.

![img](../media/an9-4.png)

8. L'interface de démarrage est comme ci-dessous. Profitez maintenant de votre voyage de programmation !

![img](../media/an9-5.png)

---

### 1.2 Guide logiciel

(**Les démonstrations suivantes sont basées sur le système Windows et ne sont qu'une référence pour MacOS.**)

#### 1.2.1 Distribution des fonctions de la page principale 1

![img](../media/an10.png)

#### 1.2.2 Sélectionner la langue

Cliquez sur ![image2](../media/an11.png) pour sélectionner « English » ou « 简体中文 » ![image3](../media/an12.png)

#### 1.2.3 Sélectionner les appareils

**Choisir un appareil et un port série**

- Cliquez sur ![image5](../media/an27.png) pour choisir un appareil.

- Ici, nous entrons **Kit** pour trouver **Smart farm for ESP32** et l'ajouter. Notez que tous les capteurs sont inclus dans ce kit, vous n'avez donc pas besoin de les importer en plus.

![img](../media/an28.png)

- Après avoir importé ce kit, vous verrez l'interface suivante de sélection de port. Cliquez sur **Connect** sur le bon port.

![img](../media/an29.png)

- Appuyez sur **Go to Editor**.

![img](../media/an30.png)

- Page principale :

![img](../media/an31.png)

**Déconnecter l'appareil**

- Si vous souhaitez déconnecter le kit et le port, veuillez cliquer sur ![image6](../media/an32.png).

- Ensuite, appuyez sur **Disconnect** pour délier la connexion actuelle.

![img](../media/an33.png)

---

#### 1.2.4 Distribution des fonctions de la page principale 2

![img](../media/an34.png)

#### 1.2.5 Étendre un capteur/module

**NOTE : Cette partie peut être SAUTÉE, car tous les capteurs requis sont intégrés dans le kit sans avoir besoin d'être étendus. Si vous souhaitez adopter un module exclu, veuillez vous référer aux procédures suivantes.**

- Cliquez sur ![an42](../media/an35.png) pour entrer dans la bibliothèque d'extension des capteurs/modules.

- Choisissez une extension.

![img](../media/an36.png)

- Par exemple, si un module buzzer est requis, veuillez cliquer sur buzzer passif :

- ![img](../media/an37.png)

- Lorsque « **Not loaded** » (Non chargé) devient « **Loaded** » (Chargé), ce module est importé avec succès.

![img](../media/an38.png)

- Cliquez sur ![image7](../media/an39.png) pour revenir à l'éditeur. Vous constaterez maintenant qu'un bloc de buzzer passif apparaît dans le Code.

![img](../media/an41.png)

- Si vous souhaitez supprimer le « Passive buzzer », cliquez simplement sur ![image8](../media/an42.png) pour entrer dans la bibliothèque et appuyez.

![img](../media/an38.png)

- Lorsque « Loaded » (Chargé) passe à « Not loaded » (Non chargé), ce module est supprimé avec succès.

![img](../media/an37.png)

#### 1.2.6 Importer un fichier

- Méthode 1

  - Si le logiciel n'est pas en cours d'exécution, cliquez directement sur le fichier SB3 pour l'ouvrir. Par exemple, cliquez sur ![image9](../media/an46.png) pour l'ouvrir. N'oubliez pas de sélectionner un appareil.

![img](../media/an54.png)

- Méthode 2

  - Ouvrez KidsBlock. Cliquez sur « **file** » (fichier) pour choisir « **Load from your computer** » (Charger depuis votre ordinateur). ![image10](../media/an47.png)

- Sélectionnez un fichier SB3 (comme ![image11](../media/an46.png)).

![img](../media/an50.png)

  - Importation réussie !

![img](../media/an54.png)

#### 1.2.7 Télécharger le code et définir le débit en bauds

**Télécharger le code**

- Téléchargez le fichier ![image12](../media/an47.png) vers KidsBlock.

- Connectez la carte de développement à votre ordinateur (si vous ne voyez pas de port, veuillez d'abord installer un pilote), sélectionnez le bon port et cliquez sur ![image13](../media/an52.png).

![img](../media/an54.png)

- Attendez le téléchargement.

![img](../media/an53.png)

**Définir le débit en bauds**

- S'il n'y a pas de boîte d'impression, veuillez cliquer sur l'une des ![image14](../media/an56.png) pour ajuster la taille de la boîte.

  - Petite boîte d'impression ![image15](../media/an58.png)
  - Grande boîte d'impression ![image16](../media/an59.png)
  - Pas de boîte d'impression ![image17](../media/an60.png)

- Cliquez sur ![image18](../media/an57.png) pour définir le débit en bauds correspondant.

![img](../media/an55.png)

- « **Hello KidsBlock** » commence à être imprimé dans la boîte après le réglage.

![img](../media/an62.png)