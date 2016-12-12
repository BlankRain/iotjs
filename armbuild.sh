#export PATH=/home/abc/source/openwrt/openwrt-sxx/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin:$PATH
#export PATH=/home/abc/source/openwrt/OpenWrt-Toolchain-ramips-rt305x_gcc-5.2.0_musl-1.1.12.Linux-x86_64/toolchain-mipsel_24kec+dsp_gcc-5.2.0_musl-1.1.12/bin:$PATH
#export PATH=/home/abc/source/openwrt/openwrt-ar9331/staging_dir/toolchain-mips_34kc_gcc-4.8-linaro_uClibc-0.9.33.2/bin:$PATH

export PATH=/home/glove/wrtnode/sdk-ramips-mt7620_gcc4.8/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/:$PATH

export STAGING_DIR=/home/glove/wrtnode/sdk-ramips-mt7620_gcc4.8/staging_dir/

./tools/build.py  $(cat jsconfig.txt) --no-check-test --target-arch=mipsel --target-os=openwrt
