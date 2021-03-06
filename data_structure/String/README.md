### 串
1.定义（what?）

``` 
串(string)是由零个或多个字符组成的有限序列，又叫 字符串。
```


2.为什么有串（why?）

  
 ```  
 字典的使用即是串的应用。  
 ```
3.串的使用(how?)
   
  (1)ADT
  ```
  串的基本操作与线性表差别较大。线性表更关注单个元素的操作，比如查找、插入或删除一个元素。
  
  串更多的是查找子串位置、获取指定位置子串、替换子串等操作。
  
  Operation
  * StrAssign(T,*chars) 生成一个其值等于字符串常量chars的串T
  * StrCopy(T,S) 复制S
  * ClearString(S)
  * StringEmpty(S)
  * StrLength(S)
  * StrCompare(S,T)
  * Concat(T,S1,S2)
  * SubString(Sub,S,pos,len)
  * Index(S,T,pos)
  * Replace(S,T,V)
  * StrInsert(S,pos,T)
  * StrDelete(S,pos,len)
  
  ```
  (2)串的存储结构
   ```
    * 串的顺序存储结构
      
      由于数组的长度预先确定，所以对于字符串的一些操作，如两串连接、新串插入、字符串替换等，都可能超过数组长度。
      
      所以有一些变化，串的存储空间可以再程序执行过程中动态分配。如计算机自由存储区——"堆"，可由C语言动态分配
      函数malloc()和free()来管理。
      
    * 串的链式存储结构
      
      与线性表相似，但由于是元素，一个节点对应一个字符空间浪费。一个节点可以存放多个字符，最后一个结点未被占满，
      用#或其他非串值字符补全。关键的是，每一个结点存多少个字符才是很重要，直接影响串处理效率，需根据实际选择。
      
      串的链式结构除了在串与串连接操作有一定方便，总体上灵活性和性能都不如顺序存储结构，
    
    
  ```
  
  (3)朴素模式匹配算法
  ```
  该算法思想是与主串的每一个字符进行首字符比较后，如相等，再下一个字符，直到全部匹配。如果失败，则重新从主串的
  第二字符开始比对。
  
  这种方法，比较直接粗暴。对于在超长主串，譬如一篇文章中查找某些单词串，时间复杂高，低效。所以有改进的空间。
  ```
  
  (4)KMP模式匹配算法
