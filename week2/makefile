CC := g++
LDFLAGS := -lm
TARGETS := a b c d e f g h i j k l m
a_OBJ :=
b_OBJ := 
c_OBJ := 
d_OBJ := 
e_OBJ := 

.PHONY:all
all:$(TARGETS)

.SECONDEXPANSION:

$(TARGETS):$$($$@_OBJ)
	$(CC) $@.cpp $^ -o $@ $(LDFLAGS)

%.o:%.c
	$(CC) -c $^ -o $@


.PHONY:clean
clean:
	rm -rf $(TARGETS) $(foreach targ,$(TARGETS),$(foreach obj, $($(targ)_OBJ), $(obj)))
