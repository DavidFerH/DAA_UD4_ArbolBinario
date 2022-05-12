#include <stdio.h>
#include "trees.h"

int main() {
    // El alumno debe crear aquí la inicialización del árbol que se desea recorrer.
    insert(50);
    insert(25);
    insert(70);
    insert(8);
    insert(30);

    printf("Preorder: "); tree_preorder(tree_init); printf("\n");
    printf("Inorder: "); tree_inorder(tree_init); printf("\n");
    printf("Postorder: "); tree_postorder(tree_init); printf("\n");
    printf("Arbol liberado..."); tree_destroy(tree_init);

    return 0;
}