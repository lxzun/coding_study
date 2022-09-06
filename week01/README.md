# 94. [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)

<div><p>Given the <code>root</code> of a binary tree, return <em>the inorder traversal of its nodes' values</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/15/inorder_1.jpg" style="width: 125px; height: 200px;">
<pre><strong>Input:</strong> root = [1,null,2,3]
<strong>Output:</strong> [1,3,2]
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> root = []
<strong>Output:</strong> []
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> root = [1]
<strong>Output:</strong> [1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[0, 100]</code>.</li>
	<li><code>-100 &lt;= Node.val &lt;= 100</code></li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> Recursive solution is trivial, could you do it iteratively?</div>

---

# 896. [Monotonic Array](https://leetcode.com/problems/monotonic-array/)

<div><p>An array is <strong>monotonic</strong> if it is either monotone increasing or monotone decreasing.</p>

<p>An array <code>nums</code> is monotone increasing if for all <code>i &lt;= j</code>, <code>nums[i] &lt;= nums[j]</code>. An array <code>nums</code> is monotone decreasing if for all <code>i &lt;= j</code>, <code>nums[i] &gt;= nums[j]</code>.</p>

<p>Given an integer array <code>nums</code>, return <code>true</code><em> if the given array is monotonic, or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,2,3]
<strong>Output:</strong> true
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [6,5,4,4]
<strong>Output:</strong> true
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [1,3,2]
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>5</sup> &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
</ul>
</div>

---

# 2305. [Fair Distribution of Cookies](https://leetcode.com/problems/fair-distribution-of-cookies/)

<div><p>You are given an integer array <code>cookies</code>, where <code>cookies[i]</code> denotes the number of cookies in the <code>i<sup>th</sup></code> bag. You are also given an integer <code>k</code> that denotes the number of children to distribute <strong>all</strong> the bags of cookies to. All the cookies in the same bag must go to the same child and cannot be split up.</p>

<p>The <strong>unfairness</strong> of a distribution is defined as the <strong>maximum</strong> <strong>total</strong> cookies obtained by a single child in the distribution.</p>

<p>Return <em>the <strong>minimum</strong> unfairness of all distributions</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> cookies = [8,15,10,20,8], k = 2
<strong>Output:</strong> 31
<strong>Explanation:</strong> One optimal distribution is [8,15,8] and [10,20]
- The 1<sup>st</sup> child receives [8,15,8] which has a total of 8 + 15 + 8 = 31 cookies.
- The 2<sup>nd</sup> child receives [10,20] which has a total of 10 + 20 = 30 cookies.
The unfairness of the distribution is max(31,30) = 31.
It can be shown that there is no distribution with an unfairness less than 31.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> cookies = [6,1,3,2,2,4,1,2], k = 3
<strong>Output:</strong> 7
<strong>Explanation:</strong> One optimal distribution is [6,1], [3,2,2], and [4,1,2]
- The 1<sup>st</sup> child receives [6,1] which has a total of 6 + 1 = 7 cookies.
- The 2<sup>nd</sup> child receives [3,2,2] which has a total of 3 + 2 + 2 = 7 cookies.
- The 3<sup>rd</sup> child receives [4,1,2] which has a total of 4 + 1 + 2 = 7 cookies.
The unfairness of the distribution is max(7,7,7) = 7.
It can be shown that there is no distribution with an unfairness less than 7.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= cookies.length &lt;= 8</code></li>
	<li><code>1 &lt;= cookies[i] &lt;= 10<sup>5</sup></code></li>
	<li><code>2 &lt;= k &lt;= cookies.length</code></li>
</ul>
</div>
