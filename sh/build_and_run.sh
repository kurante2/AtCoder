#!/bin/bash

# --- 設定 ---

# ソースファイル（デフォルト: main.cpp）
SOURCE_FILE="${1:-main.cpp}"
EXECUTABLE="${SOURCE_FILE%.*}"

# 出力モード（デフォルト: out.txt、"term"で標準出力）
MODE="${2:-default}"

# --- ビルド設定 ---
PCH_PATH="$HOME/AtCoder/gch/std.cpp"
ACLIB_PATH="$HOME/AtCoder/ac-library"

# コンパイルフラグ
CXX_FLAGS="-std=c++20 -O2 -Wall -Wextra -include $PCH_PATH"

if grep -q '#include\s*<atcoder/' "$SOURCE_FILE"; then
    CXX_FLAGS="$CXX_FLAGS -I$ACLIB_PATH"
fi


# コンパイル実行
echo "🔧 コンパイル中: $SOURCE_FILE → $EXECUTABLE"
g++ $CXX_FLAGS "$SOURCE_FILE" -o "$EXECUTABLE"
if [ $? -ne 0 ]; then
    echo "❌ コンパイル失敗"
    exit 1
fi

# --- 実行設定 ---

if [ ! -f "in.txt" ]; then
    echo "⚠️ 入力ファイル in.txt が見つかりません（カレントディレクトリ: $(pwd)）"
    exit 1
fi

echo "🚀 実行中..."

case "$MODE" in
    "term")
        ./"$EXECUTABLE" < in.txt
        ;;
    *)
        ./"$EXECUTABLE" < in.txt > out.txt
        echo "✅ 出力結果を out.txt に保存しました"
        ;;
esac
