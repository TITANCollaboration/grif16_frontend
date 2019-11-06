DRV_DIR   = $(MIDASSYS)/drivers/vme
INC_DIR   = $(MIDASSYS)/include
LIB_DIR   = $(MIDASSYS)/lib
#LIB_DIR   = $(MIDASSYS)/linux/lib
SRC_DIR   = $(MIDASSYS)/src

CC     = g++	
CFLAGS = -g -Wall -DOS_LINUX -Dextname -fpermissive -fPIC
CFLAGS += -g -I$(DRV_DIR) -I. -I$(INC_DIR) -I$(DRV_DIR)/vmic -I$(VME_DIR)/include -L$(VME_DIR)/lib
LIBS = -lm -lz -lutil -lnsl -lpthread
LIB = $(LIB_DIR)/libmidas.a -lrt

MODULES = $(LIB_DIR)/mfe.o grifc.o odb_io.c

all: fegrif16

fegrif16: $(LIB) $(MODULES) fegrif16.c
	$(CC) $(CFLAGS) -o fegrif16 fegrif16.c $(MODULES) $(LIB) $(LDFLAGS) $(LIBS)

%.o: %.c grifc.h experim.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean::
	rm -f *.o *~ \#*
