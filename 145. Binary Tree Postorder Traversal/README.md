### 描述

### 思路

1.用栈

*181210*

已经做了先序遍历144和中序遍历094。两者的实现逻辑是有区别的。

先序遍历结束的判断条件是：栈不为空。 while(!st.empty())

中序遍历结束的判断条件是：栈不为空或当前结点不为空指针。 while(!st.empty() || temp != nullptr)

本题，后序遍历的顺序即：先输出left, 再right, 最后root.

1）整体

2）先仍然是左结点，然后需要判断右结点（右子树）的终止条件以及收尾操作

3）小三角结构


### 代码
1.用栈

2.Morris

### 知识点
