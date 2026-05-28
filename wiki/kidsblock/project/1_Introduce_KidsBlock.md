## 1. KidsBlockの紹介

### 1.1 KidsBlockのインストール

#### 1.1.1 WindowsシステムへのKidsBlockのインストール

1. KidsBlockは以下からダウンロードできます。

   - リンク: http://xiazai.keyesrobot.cn/KidsBlock.exe

   - 提供ファイル: ![img](../media/an1-1.png)

2. ダウンロード後、「KidsBlock.exe」をクリックします。![image1](../media/an1.png)

3. 「**このコンピューターを使用するすべてのユーザー(all users)**」にチェックを入れ、「**Next**」をクリックします。

![img](../media/an2.png)

4. 「**Browse...**」をクリックしてインストールパスを選択し（ここではCドライブを選択していますが、お好きな場所を選択できます）、「**Install**」をクリックします。インストールが開始されます！

![img](../media/an3.png)

![img](../media/an4.png)

5. インストール完了後、「**Finish**」をクリックして開きます。

![img](../media/an5.png)

6. 警告が表示された場合は、「**Allow access**」をクリックしてソフトウェアのメインページに入ります。

![img](../media/an6.png)

---

#### 1.1.2 MacOSへのKidsBlockのインストール

1. まずKidsBlockパッケージをダウンロードしてください: http://xiazai.keyesrobot.cn/KidsBlock.dmg

![img](../media/an7.png)

2. KidsBlockをクリックし、「**KidsBlock Desktop**」を「**Applications**」にドラッグします。以下に示す通りです。

![img](../media/an8.png)

3. インストール後、KidsBlockアイコンが操作パッドに表示されます。

![img](../media/an9.png)

4. KidsBlockアイコンをクリックしてソフトウェアに入ります。失敗した場合は、一部のコンピューター設定を変更して再入力してください。これは、MacシステムがデフォルトでApp Storeでのインストールのみを許可しており、他のインストールが許可されていないためです。

![img](../media/an9-1.png)

5. 設定を開き、「プライバシーとセキュリティ」をクリックします。セキュリティオプションを「App Storeと承認済み開発者」に切り替え、「それでも開く」をクリックします。

![img](../media/an9-2.png)

6. 「開く」をクリックして、ブロックされたソフトウェアに再入力します。

![img](../media/an9-3.png)

7. 設定後、正常に動作します。

![img](../media/an9-4.png)

8. 起動インターフェースは以下の通りです。さあ、プログラミングの旅を楽しんでください！

![img](../media/an9-5.png)

---

### 1.2 ソフトウェアガイド

（**以下のデモンストレーションはWindowsシステムに基づいており、MacOSの参考としてのみです。**）

#### 1.2.1 メインページ機能の分布 1

![img](../media/an10.png)

#### 1.2.2 言語の選択

![image2](../media/an11.png)をクリックして「English」または「简体中文」を選択します。![image3](../media/an12.png)

#### 1.2.3 デバイスの選択

**デバイスとシリアルポートを選択する**

- ![image5](../media/an27.png)をクリックしてデバイスを選択します。

- ここでは**Kit**に入り、**Smart farm for ESP32**を見つけて追加します。すべてのセンサーはこのキットに含まれているため、追加でインポートする必要はありません。

![img](../media/an28.png)

- このキットをインポートすると、ポート選択の以下のインターフェースが表示されます。正しいポートで「**Connect**」をクリックします。

![img](../media/an29.png)

- 「**Go to Editor**」をタップします。

![img](../media/an30.png)

- メインページ:

![img](../media/an31.png)

**デバイスの切断**

- キットとポートを切断したい場合は、![image6](../media/an32.png)をクリックしてください。

- 次に「**Disconnect**」をタップして、現在の接続を解除します。

![img](../media/an33.png)

---

#### 1.2.4 メインページ機能の分布 2

![img](../media/an34.png)

#### 1.2.5 センサー/モジュールの拡張

**注: 必要なすべてのセンサーがキットに統合されており、拡張する必要がないため、この部分はスキップできます。除外されたモジュールを採用したい場合は、以下の手順を参照してください。**

- ![an42](../media/an35.png)をクリックしてセンサー/モジュール拡張ライブラリに入ります。

- 拡張機能を選択します。

![img](../media/an36.png)

- 例えば、ブザーモジュールが必要な場合は、パッシブブザーをクリックします。

- ![img](../media/an37.png)

- 「**Not loaded**」が「**Loaded**」に変わると、このモジュールは正常にインポートされました。

![img](../media/an38.png)

- ![image7](../media/an39.png)をクリックしてエディターに戻ります。これで、コードにパッシブブザーブロックが表示されていることがわかります。

![img](../media/an41.png)

- 「Passive buzzer」を削除したい場合は、![image8](../media/an42.png)をクリックしてライブラリに入り、タップします。

![img](../media/an38.png)

- 「Loaded」が「Not loaded」に変わると、このモジュールは正常に削除されました。

![img](../media/an37.png)

#### 1.2.6 ファイルのインポート

- 方法 1

   - ソフトウェアが動作していない場合は、SB3ファイルを直接クリックして開きます。例えば、![image9](../media/an46.png)をクリックして開きます。デバイスを選択することを忘れないでください。

![img](../media/an54.png)

- 方法 2

   - Kidsblockを開きます。「**file**」をクリックして「**Load from your computer**」を選択します。![image10](../media/an47.png)

- SB3ファイルを選択します（例: ![image11](../media/an46.png)）。

![img](../media/an50.png)

   - 正常にインポートされました！

![img](../media/an54.png)

#### 1.2.7 コードのアップロードとボーレートの設定

**コードのアップロード**

- ファイル![image12](../media/an47.png)をKidsblockにアップロードします。

- 開発ボードをコンピューターに接続し（ポートが表示されない場合は、まずドライバーをインストールしてください）、正しいポートを選択して![image13](../media/an52.png)をクリックします。

![img](../media/an54.png)

- アップロードを待ちます。

![img](../media/an53.png)

**ボーレートの設定**

- 印刷ボックスがない場合は、![image14](../media/an56.png)のいずれかをクリックしてボックスサイズを調整してください。

   - 小さい印刷ボックス ![image15](../media/an58.png)
   - 大きい印刷ボックス ![image16](../media/an59.png)
   - 印刷ボックスなし ![image17](../media/an60.png)

- ![image18](../media/an57.png)をクリックして対応するボーレートを設定します。

![img](../media/an55.png)

- 設定後、ボックスに「**Hello KidsBlock**」が印刷され始めます。

![img](../media/an62.png)