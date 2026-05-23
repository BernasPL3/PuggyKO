TARGET := PuggyKO
BUILD := build
SOURCES := source
INCLUDES := include

LIBS := -lctru -lm

DEVKITPRO ?= /opt/devkitpro

include $(DEVKITPRO)/3ds_rules
