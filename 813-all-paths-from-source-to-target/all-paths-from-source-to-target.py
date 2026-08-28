class Solution:
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        target = len(graph) - 1
        ans = []
        path = []
        def dfs(node):
            path.append(node)
            if node == target:
                ans.append(path.copy())
            else:
                for nxt in graph[node]:
                    dfs(nxt)
            path.pop()

        dfs(0)
        return ans 