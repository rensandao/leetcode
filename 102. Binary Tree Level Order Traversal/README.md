### 描述


### 思路

*181214*

1.有问题的思路：

完全不知道要用queue。但是逻辑上知道，每一层的数据可以保存在容器vlevel里面，然后循环再对vlevel每一层的结点再判断输出，压入；但实现代码较复杂。
考虑到每次循环，vlevel的数据需要清空，还得需要一个备用容器。这还是这是结点指针。对于数据的存储也得考虑个容器，还得备份。这都用多少个容器了。
直到看到queue，才再一次感受到数据结构的巧妙之处。这应该就是最底层的轮子了。你自己造轮子还是太嫩，得记住它再多用它。

2.思路1：迭代法，利用queue

queue这种结构，单方向向前推动的（如食堂排队打饭），不像栈来回折腾（容易让人生闷气）。queue很好解决一段段，一层一层向前推进，从而符合层序遍历的方式。

需要注意的是，由于在迭代循环过程中，队列是有进有出的，所以size在变动；因为不能放在for循环条件里面。

3.思路2：递归调用

对于每一层的结点及所在层数flag，递归循环保存在每一层的数据，并且直接在vector<vector<int>> res中操作。这个下标直接操作的方法倒是没碰到，但显然不错。





### 代码

见[solution.h](https://github.com/rensandao/LeetCode/blob/master/102.%20Binary%20Tree%20Level%20Order%20Traversal/solution.h)

### 知识点
* 队列queue
* 双端队列deque(double-ended-queue)
