#!/bin/bash

# ソースファイルの決定
SOURCE_FILE="${1:-main.cpp}" # 引数がない場合はmain.cppを使用

# ファイルの存在チェック
if [ ! -f "$SOURCE_FILE" ]; then
    echo "❌ ファイル $SOURCE_FILE が見つかりません"
    exit 1
fi

# 実行ファイル名を決定(.cpp を除去)
OUTPUT_FILE="${SOURCE_FILE%.cpp}"

# コンパイルオプション
PCH_PATH="$HOME/AtCoder/gch/std.cpp"
ACLIB_PATH="$HOME/AtCoder/ac-library"

CXX_FLAGS="-std=c++20 -O2 -Wall -Wextra -include $PCH_PATH"

if grep -q '#include\s*<atcoder/' "$SOURCE_FILE"; then
    CXX_FLAGS="$CXX_FLAGS -I$ACLIB_PATH"
fi

# コンパイル実行
g++ $CXX_FLAGS "$SOURCE_FILE" -o "$OUTPUT_FILE"

# 実行結果
if [ $? -eq 0 ]; then
    echo "✅ ビルド成功！"
else
    echo "❌ ビルド失敗..."
fi