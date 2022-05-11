#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct tree {
    int dato;
    struct tree *left, *right;
};

struct tree *root = NULL;

void insert (int dato_) {
    struct tree *newNode;
    newNode = malloc(sizeof(struct tree));

    newNode->dato = dato_;
    newNode->left = NULL;
    newNode->right = NULL;

    if (root == NULL) {
        root = newNode;
    } else {
        struct tree *preNode, *reco;
        reco = root;

        while (reco) {
            preNode = reco;

            if (dato_ < reco->dato) {
                reco = reco->left;
            } else {
                reco = reco->right;
            }
        }

        if (dato_ < preNode->dato) {
            preNode->left = newNode;
        } else {
            preNode->right = newNode;
        }
    }
}

void tree_preorder(struct tree *t) {
    if (t) {
        printf("%i ", t->dato);
        tree_preorder(t->left);
        tree_preorder(t->right);
    }
}

void tree_inorder(struct tree *t){
    if (t) {
        tree_inorder(t->left);
        printf("%i ", t->dato);
        tree_inorder(t->right);
    }
}

void tree_postorder(struct tree *t){
    if (t) {
        tree_postorder(t->left);
        tree_postorder(t->right);
        printf("%i ", t->dato);
    }
};

void tree_isEmpty (struct tree *t) {
    if (root == NULL)
        printf("El arbol esta vacio");
    else
        printf("El arbol no esta vacio");
}

void tree_destroy(struct tree *t) {
    if (t) {
        tree_destroy(t->left);
        tree_destroy(t->right);
        free(t);
    }
}