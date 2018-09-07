# Settings for Linux on apq8096 (Snapdragon 820).
ifeq ($(TARGET), apq8096)
  # Add location of toolchain to PATH
  export PATH := /home/mgpqcbuild/toolchain/openembedded-core/build/tmp-glibc/sysroots/x86_64-linux/usr/bin/aarch64-oe-linux:$(PATH)
  INCLUDES := \
-I/home/mgpqcbuild/toolchain/sysroots/apq8096/usr/include/c++/4.9.3 \
-I/home/mgpqcbuild/toolchain/sysroots/apq8096/usr/include/c++/4.9.3/aarch64-oe-linux \
-I/home/mgpqcbuild/toolchain/sysroots/apq8096/usr/include \
-I/media/sf_sandbox/tensorflow/third_party/fft2d

TARGET_TOOLCHAIN_PREFIX := aarch64-oe-linux-
TARGET_ARCH := aarch64

  CXXFLAGS += \
    -fPIC \
    -DGEMMLOWP_ALLOW_SLOW_SCALAR_FALLBACK \
    -pthread
  # TODO(petewarden): In the future we may want to add architecture-specific
  # flags like -msse4.2
	LIBS += \
-ldl \
-L/home/mgpqcbuild/toolchain/sysroots/apq8096/usr/lib64/aarch64-oe-linux/4.9.3 \
-L/home/mgpqcbuild/toolchain/sysroots/apq8096/usr/lib64 \
--sysroot=/home/mgpqcbuild/toolchain/sysroots/apq8096

endif
