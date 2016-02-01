SUBDIRS = 1-inspectArgv 2-2DArray     3-problematic 4-malloc      5-array       6-warmup1     7-answarmup

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
