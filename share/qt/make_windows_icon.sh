#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/cosmoscoin.png
ICON_DST=../../src/qt/res/icons/cosmoscoin.ico
convert ${ICON_SRC} -resize 16x16 cosmoscoin-16.png
convert ${ICON_SRC} -resize 32x32 cosmoscoin-32.png
convert ${ICON_SRC} -resize 48x48 cosmoscoin-48.png
convert cosmoscoin-16.png cosmoscoin-32.png cosmoscoin-48.png ${ICON_DST}

