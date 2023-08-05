# leetcode-everyday

[toc]

## 数组

### 二分查找

#### [704. 二分查找](https://leetcode.cn/problems/binary-search/)

给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。

https://github.com/StudyingByYourself/leetcode-everyday/blob/main/leetcode0704.c

#### [35. 搜索插入位置](https://leetcode.cn/problems/search-insert-position/)

给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

请必须使用时间复杂度为 O(log n) 的算法。

https://github.com/StudyingByYourself/leetcode-everyday/blob/main/leetcode0035.c

#### [69. x 的平方根 ](https://leetcode.cn/problems/sqrtx/)

给你一个非负整数 x ，计算并返回 x 的 算术平方根 。

由于返回类型是整数，结果只保留 整数部分 ，小数部分将被 舍去 。

注意：不允许使用任何内置指数函数和算符，例如 pow(x, 0.5) 或者 x ** 0.5 。

https://github.com/StudyingByYourself/leetcode-everyday/blob/main/leetcode0069.c

#### [367. 有效的完全平方数](https://leetcode.cn/problems/valid-perfect-square/)

给你一个正整数 num 。如果 num 是一个完全平方数，则返回 true ，否则返回 false 。

完全平方数 是一个可以写成某个整数的平方的整数。换句话说，它可以写成某个整数和自身的乘积。

不能使用任何内置的库函数，如  sqrt 。

https://github.com/StudyingByYourself/leetcode-everyday/blob/main/leetcode0367.c



### 移除元素

#### [27. 移除元素](https://leetcode.cn/problems/remove-element/)

给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。

不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。

元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

#### [26. 删除有序数组中的重复项](https://leetcode.cn/problems/remove-duplicates-from-sorted-array/)

#### [283. 移动零](https://leetcode.cn/problems/move-zeroes/)

#### [844. 比较含退格的字符串](https://leetcode.cn/problems/backspace-string-compare/)

#### [977. 有序数组的平方](https://leetcode.cn/problems/squares-of-a-sorted-array/)



### 有序数组的平方

#### [977. 有序数组的平方](https://leetcode.cn/problems/squares-of-a-sorted-array/)

### 长度最小的子数组

#### [209. 长度最小的子数组](https://leetcode.cn/problems/minimum-size-subarray-sum/)

给定一个含有 n 个正整数的数组和一个正整数 target 。

找出该数组中满足其和 ≥ target 的长度最小的 连续子数组 [numsl, numsl+1, ..., numsr-1, numsr] ，并返回其长度。如果不存在符合条件的子数组，返回 0 。

#### [904. 水果成篮](https://leetcode.cn/problems/fruit-into-baskets/)

你正在探访一家农场，农场从左到右种植了一排果树。这些树用一个整数数组 fruits 表示，其中 fruits[i] 是第 i 棵树上的水果 种类 。

你想要尽可能多地收集水果。然而，农场的主人设定了一些严格的规矩，你必须按照要求采摘水果：

你只有 两个 篮子，并且每个篮子只能装 单一类型 的水果。每个篮子能够装的水果总量没有限制。
你可以选择任意一棵树开始采摘，你必须从 每棵 树（包括开始采摘的树）上 恰好摘一个水果 。采摘的水果应当符合篮子中的水果类型。每采摘一次，你将会向右移动到下一棵树，并继续采摘。
一旦你走到某棵树前，但水果不符合篮子的水果类型，那么就必须停止采摘。
给你一个整数数组 fruits ，返回你可以收集的水果的 最大 数目。



解题思路
滑动窗口也可以理解为双指针法的一种！只不过这种解法更像是一个窗口的移动，所以叫做滑动窗口更适合一些。

实现滑动窗口，主要确定如下三点：

窗口内是什么？
如何移动窗口的起始位置？
如何移动窗口的结束位置？
对于本题：

窗口-> 果树的类型
如何移动窗口的起始位置-> 数组开始位置即可设置为滑动窗口开始的位置，当窗口内果树类型大于2时，窗口向前移动，也就是收缩窗口，收缩到什么时候为止呢？果树类型小于2
如何移动窗口的结束位置-> 遍历数组的指针即可设置为滑动窗口结束的位置，当窗口内果树类型小于等于2时，窗口向前移动，也就是扩大窗口，扩大到什么时候为止呢？果树类型大于2
具体实现
值得注意的是，如何高效快捷的统计窗口中果树的类型，以及同种类型果树在当前窗口存在多少呢？因为我们在收缩窗口的时候，要收缩到果树类型小于2才能停止。面对这种同类型数量统计问题或者是查重问题，哈希表是不二之选。我们定义一个简易的哈希表，以树的类型为键，转换到我们简易哈希表中就是对应下标，然后记录相同类型树的数目即可。



## 链表

#### [203. 移除链表元素](https://leetcode.cn/problems/remove-linked-list-elements/)

#### [206. 反转链表](https://leetcode.cn/problems/reverse-linked-list/)

#### [24. 两两交换链表中的节点](https://leetcode.cn/problems/swap-nodes-in-pairs/)

#### [19. 删除链表的倒数第 N 个结点](https://leetcode.cn/problems/remove-nth-node-from-end-of-list/)

#### [160. 相交链表](https://leetcode.cn/problems/intersection-of-two-linked-lists/)

#### [141. 环形链表](https://leetcode.cn/problems/linked-list-cycle/)

#### [142. 环形链表 II](https://leetcode.cn/problems/linked-list-cycle-ii/)

![屏幕截图 2023-07-30 141455.png](https://pic.leetcode.cn/1690697707-QQlZqm-%E5%B1%8F%E5%B9%95%E6%88%AA%E5%9B%BE%202023-07-30%20141455.png)