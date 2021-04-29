// AUM SHREEGANESHAAYA NAMAH||
#ifndef __GFCC_IRC__
#define __GFCC_IRC__

#include <fstream>
#include <string>

#include <gfcc_lexer.h>
#include <types2.h>

typedef struct _irquad_t {
    std::string dst = "";
    std::string opr = ""; // irop_t opr;
    std::string src1 = "";
    std::string src2 = "";
    std::string label = "";
    // some constructors
    _irquad_t(std::string, std::string, std::string, std::string);
} irquad_t;

extern std::vector<irquad_t> IRDump;

extern std::string eps; // empty string (epsilon)

extern std::string nextQuadLabel; // label for next (upcoming) instruction

extern unsigned int totLabels;

extern unsigned int totalTmp;

unsigned int nextIdx();

void emit(std::string, std::string, std::string, std::string); // emit into global (incremental) code stream

void emit(std::string, std::string, std::string); // emit into global (incremental) code stream

void dumpIR(std::ofstream &f, std::vector<irquad_t> &irArr); // dump into a file

std::string newLabel(); // generate a unique new label

std::string newLabel(std::string); // generate a unique new label (with preffered name - not guaranteed)

std::string newTmp(); // generate a unique new temporary

std::string newTmp(class Type *); // store class (after CLONING!) for the temp. var.

void backpatch(std::vector<unsigned int> &, unsigned int);

void backpatch(std::vector<unsigned int> &, std::string);

std::vector<unsigned int> merge(std::vector<unsigned int> &, std::vector<unsigned int> &);

std::vector<unsigned int> merge(std::vector<std::vector<unsigned int>>);

void handle(node_t*,node_t*,node_t*, int, std::string);

Type* handle_as(int ,node_t*,node_t*, std::string &, std::string &, bool, bool);

#endif
