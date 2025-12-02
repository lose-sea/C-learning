#include<iostream> 
#include<vector> 
using namespace std; 

// 合并两个有序数组
void merge(vector<int>& arr, int left, int mid, int right) {
    // 创建临时数组存储合并结果,大小为当前区间长度
    vector<int> temp (right - left + 1); 
    int i = left; 
    int j = mid + 1; 
    int k = 0; 
    // 合并两个有序数组,比较两个数组的元素,选择较小的放入临时数组
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++]; 
        } else {
            temp[k++] = arr[j++]; 
        }
    }
    // 如果左半部分还有元素,直接复制 
    while (i <= mid) { 
        temp[k++] = arr[i++];  
    } 
    // 如果右半部分还有元素,直接复制 
    while (j <= right) {
        temp[k++] = arr[j++];
    }
    // 将临时数组中已排序的元素赋值回原数组
    for (int p = 0; p < k; p++) {
        arr[left + p] = temp[p]; 
    } 
} 


// 迭代版本
void mergeSort(vector<int>& arr) {
    int n = arr.size(); 
    vector<int> temp(n);  // 临时数组,用于归并操作 
    // 外层循环: 控制归并的子数组大小,从1开始,每次翻倍
    for (int size = 1; size < n; size++) {
        // 中层循环
        for (int left = 0; left < n; left += 2 * size) {
            int mid = min(left + size - 1, n - 1);   // 第一个子数组的右边界
            int right = min(left + 2 * size - 1, n -1);   // 第二个子数组的右边界

            // 合并arr[left, mid] 和 arr[mid + 1, right] 两个有序子数组 
            int i = left;  
            int j = mid + 1;  
            int k = left;  
            // 比较两个子数组的元素,选择小的放入临时数组
            while(i <= mid && j <= right) {
                if (arr[i] <= arr[j]) {
                    temp[k++] = arr[i++]; 
                } else {
                    temp[k++] = arr[j++]; 
                }
            } 

            // 处理第一个子数组的剩余元素
            while (i <= mid) {
                temp[k++] = arr[i++]; 
            } 
            // 处理第二个子数组的剩余元素 
            while (j <= mid) {
                temp[k++] = arr[j++];
            }  
            // 将归并好的数据从临时数组中复制回原数组
            for (int p = left; p <= right; p++) {
                arr[p] = temp[p]; 
            }
        }
    }


}


// 归并排序主函数(递归实现)
void mergeSort(vector<int>& arr, int left, int right) { 
    // 递归终止条件
    if (left >= right) {
        return; 
    } 
    // 计算中间位置,将数组分为两半 
    int mid = left + (right - left) / 2; // 防止整数溢出 
    // 递归左半部分 
    mergeSort(arr, left, mid);  
    // 递归右半部分 
    mergeSort(arr, mid + 1, right);  
    // 合并两个已经排好序的子数组  
    merge(arr, left, mid, right);    
}  







int main() { 
    int n = 0 ; 
    cin >> n; 
    vector<int> arr(n, 0); 
    for (int i = 0; i < n; i++) {
        cin >> arr.at(i); 
    }
    cout << "排序前" << endl; 
    for (int i = 0; i < n; i++) {
        cout << arr.at(i) << " "; 
    } 
    cout << endl; 
    mergeSort(arr, 0, arr.size() - 1); 
    cout << "排序后" << endl; 
    for (int i = 0; i < n; i++) {
        cout << arr.at(i) << " "; 
    } 
    cout << endl; 
    return 0; 
}


