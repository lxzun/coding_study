# [2186. Minimum Number of Steps to Make Two Strings Anagram II](https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram-ii/)

<div><p>You are given two strings <code>s</code> and <code>t</code>. In one step, you can append <strong>any character</strong> to either <code>s</code> or <code>t</code>.</p>

<p>Return <em>the minimum number of steps to make </em><code>s</code><em> and </em><code>t</code><em> <strong>anagrams</strong> of each other.</em></p>

<p>An <strong>anagram</strong> of a string is a string that contains the same characters with a different (or the same) ordering.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> s = "<strong><u>lee</u></strong>tco<u><strong>de</strong></u>", t = "co<u><strong>a</strong></u>t<u><strong>s</strong></u>"
<strong>Output:</strong> 7
<strong>Explanation:</strong> 
- In 2 steps, we can append the letters in "as" onto s = "leetcode", forming s = "leetcode<strong><u>as</u></strong>".
- In 5 steps, we can append the letters in "leede" onto t = "coats", forming t = "coats<u><strong>leede</strong></u>".
"leetcodeas" and "coatsleede" are now anagrams of each other.
We used a total of 2 + 5 = 7 steps.
It can be shown that there is no way to make them anagrams of each other with less than 7 steps.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> s = "night", t = "thing"
<strong>Output:</strong> 0
<strong>Explanation:</strong> The given strings are already anagrams of each other. Thus, we do not need any further steps.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length, t.length &lt;= 2 * 10<sup>5</sup></code></li>
	<li><code>s</code> and <code>t</code> consist of lowercase English letters.</li>
</ul>
</div>

---

# [1145. Binary Tree Coloring Game](https://leetcode.com/problems/binary-tree-coloring-game/)

<div><p>Two players play a turn based game on a binary tree. We are given the <code>root</code> of this binary tree, and the number of nodes <code>n</code> in the tree. <code>n</code> is odd, and each node has a distinct value from <code>1</code> to <code>n</code>.</p>

<p>Initially, the first player names a value <code>x</code> with <code>1 &lt;= x &lt;= n</code>, and the second player names a value <code>y</code> with <code>1 &lt;= y &lt;= n</code> and <code>y != x</code>. The first player colors the node with value <code>x</code> red, and the second player colors the node with value <code>y</code> blue.</p>

<p>Then, the players take turns starting with the first player. In each turn, that player chooses a node of their color (red if player 1, blue if player 2) and colors an <strong>uncolored</strong> neighbor of the chosen node (either the left child, right child, or parent of the chosen node.)</p>

<p>If (and only if) a player cannot choose such a node in this way, they must pass their turn. If both players pass their turn, the game ends, and the winner is the player that colored more nodes.</p>

<p>You are the second player. If it is possible to choose such a <code>y</code> to ensure you win the game, return <code>true</code>. If it is not possible, return <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/08/01/1480-binary-tree-coloring-game.png" style="width: 500px; height: 310px;">
<pre><strong>Input:</strong> root = [1,2,3,4,5,6,7,8,9,10,11], n = 11, x = 3
<strong>Output:</strong> true
<strong>Explanation: </strong>The second player can choose the node with value 2.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> root = [1,2,3], n = 3, x = 1
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is <code>n</code>.</li>
	<li><code>1 &lt;= x &lt;= n &lt;= 100</code></li>
	<li><code>n</code> is odd.</li>
	<li>1 &lt;= Node.val &lt;= n</li>
	<li>All the values of the tree are <strong>unique</strong>.</li>
</ul>
</div>
