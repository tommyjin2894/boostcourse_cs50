CC = gcc
CFLAGS = -Wall -Wextra -lcs50
TARGET = all
BUILD_DIR = run

# 현재 디렉토리의 모든 .c 파일을 찾아서 SRC에 저장
SRC = $(wildcard *.c)
# .c 파일들의 이름에서 .c를 제거하여 실행 파일 이름 목록 생성
EXECUTABLES = $(addprefix $(BUILD_DIR)/, $(SRC:.c=))

$(TARGET): $(BUILD_DIR) $(EXECUTABLES)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%: %.c
	$(CC) $< -o $@ $(CFLAGS)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: clean all 