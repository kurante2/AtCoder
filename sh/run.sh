#!/bin/bash

# 実行ファイルの指定（第1引数）→ デフォルトは ./a.out
EXEC="./a.out"
MODE="default"

if [ $# -ge 1 ]; then
    # 引数1が "term" なら モード変更（実行ファイルは変更しない）
    if [ "$1" == "term" ]; then
        MODE="term"
    else
        # 第1引数が実行ファイル名なら、それを使う
        EXEC="./$1"
    fi
fi

# 第2引数でモード指定（省略可）
if [ $# -ge 2 ]; then
    if [ "$2" == "term" ]; then
        MODE="term"
    elif [ "$2" != "" ]; then
        MODE="$2"
    fi
fi

# 入力ファイルの存在確認
if [ ! -f "in.txt" ]; then
    echo "⚠️ 入力ファイル in.txt が見つかりません（現在のディレクトリ: $(pwd)）"
    exit 1
fi

# 実行ファイルの存在確認
if [ ! -f "$EXEC" ]; then
    echo "⚠️ 実行ファイル $EXEC が見つかりません"
    exit 1
fi

# 実行処理
case "$MODE" in
    "term")
        $EXEC < in.txt
        ;;
    "default")
        $EXEC < in.txt > out.txt
        ;;
    *)
        $EXEC < in.txt > "$MODE.txt"
        ;;
esac
