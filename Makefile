SUBDIRS = w2 w3

all:
	for dir in $(SUBDIRS) ; \
	do \
		make -C $$dir; \
	done
clean:
	for dir in $(SUBDIRS) ; \
	do \
		make -C $$dir clean; \
	done
