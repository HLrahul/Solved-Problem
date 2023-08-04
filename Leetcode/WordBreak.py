class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        N = len(s)

        has_cache = [False] * (N + 1)
        cache = [None] * (N + 1)

        def can_break(index):
            if index == N:
                return True

            if has_cache[index]:
                return cache[index]
            
            has_cache[index] = True
            for word in wordDict:
                if s[index:].startswith(word) and can_break(index + len(word)):
                    cache[index] = True
                    return True
            
            cache[index] = False
            return False

        return can_break(0)