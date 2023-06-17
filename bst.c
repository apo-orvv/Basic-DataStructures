#include <stdio.h>
#include <stdlib.h>
struct node { int key; struct node *left, *right; };
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item; temp->left = temp->right = NULL;
  return temp;
}
void inorder(struct node *root) {
  if (root != NULL) {
    inorder(root->left); printf("%d ", root->key); inorder(root->right);
  }
}
struct node *insert(struct node *node, int key) {
  if (node == NULL) return newNode(key);
  if (key < node->key) node->left = insert(node->left, key);
  else node->right = insert(node->right, key);
  return node;
}
struct node *minValueNode(struct node *node) {
  struct node *current = node;
  while (current && current->left != NULL) current = current->left;
  return current;
}
struct node *deleteNode(struct node *root, int key) {
  if (root == NULL) return root;
  if (key < root->key) root->left = deleteNode(root->left, key);
  else if (key > root->key) root->right = deleteNode(root->right, key);
  else {
    if (root->left == NULL) {
      struct node *temp = root->right; free(root); return temp;
    } 
    else if (root->right == NULL) {
      struct node *temp = root->left; free(root); return temp;
    }
    struct node *temp = minValueNode(root->right);
    root->key = temp->key; root->right = deleteNode(root->right, temp->key);
  }
  return root;
}
void smallest(struct node *root) {
    while(root != NULL && root->left != NULL) { root = root->left; }
    printf("%d\n", root->key);
}
void largest(struct node *root) {
    while (root != NULL && root->right != NULL) { root = root->right; }
    printf("%d\n", root->key);
}
int main() {
  struct node *root = NULL; int x,ele,x1,x2; scanf("%d",&x);
  for(int i=0;i<x;i++) { scanf("%d",&ele); root=insert(root,ele); }
  inorder(root); printf("\n");
  smallest(root); largest(root);
  scanf("%d%d",&x1,&x2);
  root = deleteNode(root,x1); root = deleteNode(root,x2);
  inorder(root);
}