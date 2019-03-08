//
// Created by vory on 3/4/19.
//

#ifndef MMDB_TEST1_H
#define MMDB_TEST1_H
void printf1(int key){
    printf("%d",key);
}

#define Tnode_min_num = 8;
#define Tnode_max_num = 16

typedef struct Tnode{
    struct Ttreenode * parent;
    struct Ttreenode * successor;
    struct Ttreenode * left;
    struct Ttreenode * right;
    int                Tnode_size;
    int              * TTnode_data[Tnode_max_num];

    char * keys;
}Tnode;



typedef struct T_star_tree{
    struct  Tnode * root;
    int     node_count;
    int     keys_per_node;



}T_star_tree;





//#define HU printf("%d",a)
#endif //MMDB_TEST1_H
