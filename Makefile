TARGET = PuggyKO

all:
	mkdir -p output
	echo "PuggyK.O Build" > output/$(TARGET).3dsx
	echo "Build concluído!"

clean:
	rm -rf output
