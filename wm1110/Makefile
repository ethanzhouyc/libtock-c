TOCK_USERLAND_BASE_DIR ?= ..
LIBNAME := wm1110
$(LIBNAME)_DIR := $(TOCK_USERLAND_BASE_DIR)/$(LIBNAME)

DEPPATH += --dep-path $(WM1110_DIR)
VPATH += :$(WM1110_DIR)

WM1110_DIR = $(TOCK_USERLAND_BASE_DIR)/wm1110/wm1110

SRC_UNCHANGED = $(WM1110_DIR)/src_unchanged

ifeq ($(wildcard $(SRC_UNCHANGED)/.*),)
    $(error Error: $(SRC_UNCHANGED) directory does not exist. Please run `make -f Makefile.setup` first)
endif

override CPPFLAGS += -I$(TOCK_USERLAND_BASE_DIR)/libtock

CSRCS := $(wildcard $(WM1110_DIR)/src_unchanged/*.c) $(wildcard $(WM1110_DIR)/src_changed/*.c)

DEPPATH += --dep-path $(WM1110_DIR)/inc_changed
VPATH += :$(WM1110_DIR)/inc_changed
DEPPATH += --dep-path $(WM1110_DIR)/inc_unchanged
VPATH += :$(WM1110_DIR)/inc_unchanged

override CFLAGS += -I$(WM1110_DIR)/$(WM1110_DIR_NAME)/inc_unchanged -DREGION_US_915 -DRP2_103 -DTASK_EXTENDED_2
override CFLAGS += -I$(WM1110_DIR)/$(WM1110_DIR_NAME)/inc_changed
override CFLAGS += -I$(TOCK_USERLAND_BASE_DIR)/libtock

# List all C and Assembly files
$(LIBNAME)_SRCS  := $(CSRCS)

include $(TOCK_USERLAND_BASE_DIR)/TockLibrary.mk