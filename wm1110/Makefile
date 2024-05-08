TOCK_USERLAND_BASE_DIR ?= ..
LIBNAME := wm1110
$(LIBNAME)_DIR := $(TOCK_USERLAND_BASE_DIR)/$(LIBNAME)

WM1110_DIR = $(TOCK_USERLAND_BASE_DIR)/wm1110/wm1110

override CPPFLAGS += -I$(TOCK_USERLAND_BASE_DIR)/libtock

CSRCS := $(wildcard $(WM1110_DIR)/src_tock/*.c) $(wildcard $(WM1110_DIR)/src_seeed/*.c)

# override CFLAGS += -I$(WM1110_DIR)/$(WM1110_DIR_NAME)/include -DREGION_US_915 -DRP2_101
override CFLAGS += -I$(WM1110_DIR)/include_seeed/include -DREGION_US_915 -DRP2_103 -DTASK_EXTENDED_2
override CFLAGS += -I$(WM1110_DIR)/include_tock/include
override CFLAGS += -I$(TOCK_USERLAND_BASE_DIR)/libtock


# List all C and Assembly files
$(LIBNAME)_SRCS  := $(CSRCS)

include $(TOCK_USERLAND_BASE_DIR)/TockLibrary.mk


