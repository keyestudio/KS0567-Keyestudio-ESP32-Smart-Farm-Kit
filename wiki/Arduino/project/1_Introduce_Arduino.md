## 1. Arduinoの紹介

### 1.1 Arduinoとは？

Arduinoは、使いやすいハードウェアとソフトウェアに基づいたオープンソースの電子プラットフォームです。Arduinoボードは、センサーの光、ボタンの指、Twitterメッセージなどの入力を読み取り、モーターの作動、LEDの点灯、オンラインでの公開などの出力に変換することができます。IDEでプログラムコードを記述し、ボード上のマイクロコントローラーに指示を送信することで、ボードに何をさせるかを指示できます。これを行うには、Arduinoプログラミング言語（Wiringに基づく）と、Processingに基づくArduinoソフトウェア（IDE）を使用します。

### 1.2 Windows用Arduino IDEのインストール

Arduino公式: `Software |
Arduino <https://www.arduino.cc/en/software/>`。

ここでは、最も簡単なインストールのために、![image-20250416143412683](../media/image-20250416143412683.png)オプションをクリックします。

![image](../media/a2.png)

1. ここでは、Windowsシステムを例に、ダウンロードとインストール方法を紹介します。Windows向けには、インストール用とダウンロード用（zipファイル、インストール不要）の2つのバージョンが提供されています。

![a3](../media/a3.png)

ソフトウェアをダウンロードするには、**JUST DOWNLOAD**をクリックします。

2. ソフトウェアページからダウンロードした.exeファイルをハードドライブに保存し、ファイルを単に実行します。

![a5](../media/a5.png)

3. ライセンス契約を読み、同意します。

![a6](../media/a6.png)

4. インストールオプションを選択します。

![a7](../media/a7.png)

5. インストール場所を選択します。

![a8](../media/a8.png)

6. 完了をクリックしてArduino IDEを実行します。

![a9](../media/a9-1744785033221-7.png)

### 1.3 Arduino IDE 2.0の紹介

![image-20250416145828363](../media/image-20250416145828363.png)

**Verify / Upload** - コードをコンパイルしてArduinoボードにアップロードします。

**Select Board & Port** - 検出されたArduinoボードがポート番号とともにここに自動的に表示されます。

**Sketchbook** - ここには、コンピューターにローカルに保存されているすべてのスケッチがあります。さらに、Arduino Cloudと同期したり、オンライン環境からスケッチを取得したりすることもできます。

**Boards Manager** - インストール可能なArduinoおよびサードパーティのパッケージを参照します。たとえば、MKR WiFi 1010ボードを使用するには、Arduino SAMD Boardsパッケージがインストールされている必要があります。

**Library Manager** - Arduinoとそのコミュニティによって作成された何千ものArduinoライブラリを参照します。

**Debugger** - プログラムをリアルタイムでテストおよびデバッグします。

**Search** - コード内のキーワードを検索します。

**Open Serial Monitor** - コンソールの新しいタブとしてシリアルモニターツールを開きます。

Arduino IDEについてさらに詳しく知りたい場合は、このドキュメントを参照してください：Getting Started with Arduino IDE 2
