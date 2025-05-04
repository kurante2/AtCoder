# My AtCoder Repository
AtCoderの提出コードを管理する自分用のリポジトリです。
各コンテストごとにディレクトリを分けています。
一部、環境構築に用いた設定ファイルも入っています。参考になれば幸いです。

## 🔧 開発環境

- **OS**: Windows11 + WSL2 (Ubuntu 24.04)
- **エディタ**: VSCode
- **コンパイラ**: gcc 12.3.0 / C++20
- **ライブラリ**: AtCoder Library (ac-library)を導入

---

## 📁 ディレクトリ構成
一部省略してますが大体こんな感じです。

```plaintext
AtCoder/
├── ABC/
│   ├── ABC001/
│   │   ├── a.cpp
│   │   ├── in.txt
│   │   └── out.txt
|
├── APG4b/
|   ├── section1
|
├── Typical90
├── gch/          # プリコンパイル済みヘッダ
├── ac-library/   # AtCoder公式ライブラリ
├── sh/           # シェルスクリプト群
├── .gitignore
└── README.md
```

## 🚀 シェルスクリプトの説明
shディレクトリ内には以下の.shファイルが含まれています。
```plaintext
sh/
├── build.sh
├── run.sh
└── build_and_run.sh
```
各ファイルの役割は以下の通りです。
```bash
build.sh
```
指定された C++ ファイルをビルドします。PCH と AtCoder Library を自動判定して使用。
```bash
run.sh
```
指定された実行ファイルを、in.txt を標準入力として実行します。出力は out.txt またはターミナルへ。任意の出力ファイル名の指定も可能です。
```bash
build_and_run.sh
```
ビルドと実行をまとめて行う統合スクリプト。

### 🔧 エイリアス設定（.bashrc）
.sh ファイルを毎回フルパスで実行するのは手間なので、以下のようなエイリアスを .bashrc に追加して呼び出しを簡略化しています：
```bash
alias bd="bash $HOME/AtCoder/sh/build.sh"
alias run="bash $HOME/AtCoder/sh/run.sh"
alias br="bash $HOME/AtCoder/sh/build_and_run.sh"
```