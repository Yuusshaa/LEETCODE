class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
       int m = grid.size();
        int n = grid[0].size();

        for (int x = 0; x <m; x++) {
            for (int y = 0; y < n; y++) {

                if (grid[x][y] == 1) {
                    ans += 4;

                    
                    if (x > 0 && grid[x - 1][y] == 1) {
                        ans -= 2;
                    }

                   
                    if (y > 0 && grid[x][y - 1] == 1) {
                        ans -= 2;
                    }
                }
            }
        }

        return ans;
    }
};

#pragma GCC optimize("Ofast")
static constexpr size_t BUFFER_SIZE = 64ull << 20;
alignas(std::max_align_t)
static unsigned char BUFFER[BUFFER_SIZE];
static unsigned char* ptr = BUFFER;
void* operator new(std::size_t n) {
    constexpr size_t A = alignof(std::max_align_t);
    n = (n + A - 1) & ~(A - 1);
    if (ptr + n > BUFFER + BUFFER_SIZE)throw std::bad_alloc();
    void* r = ptr;    ptr += n;
    return r;
}
void* operator new[](std::size_t n) {
    return operator new(n);
}
void operator delete(void*) noexcept {}
void operator delete[](void*) noexcept {}
void operator delete(void*, std::size_t) noexcept {}
void operator delete[](void*, std::size_t) noexcept {}