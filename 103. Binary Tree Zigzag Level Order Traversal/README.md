### 描述
```
Given a binary tree, return the zigzag level order traversal of its nodes' values. 

(ie, from left to right, then right to left for the next level and alternate between).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its zigzag level order traversal as:
[
  [3],
  [20,9],
  [15,7]
]
```

### 思路

### 代码

### 知识点
* 容器的操作：`res[level-1].insert(res[level-1].begin(), node->val); `
