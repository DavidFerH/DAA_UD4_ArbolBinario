#include <stdio.h>
#include "treesPrueba.h"

void main() {
    // El alumno debe crear aquí la inicialización del árbol que se desea recorrer.
    insert(50);
    insert(25);
    insert(70);
    insert(8);
    insert(30);

    printf("Preorder: "); tree_preorder(root); printf("\n");
    printf("Inorder: "); tree_inorder(root); printf("\n");
    printf("Postorder: "); tree_postorder(root); printf("\n");
    printf("Arbol liberado..."); tree_destroy(root);
}