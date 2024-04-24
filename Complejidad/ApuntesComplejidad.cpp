// Complejidad O(1) Constante 
int arreglo[100]; 
int elemento = arreglo[0]; 

// Complejidad O(log n) Logarítmica 
int binary_search(int arr[], int n, int x){
    int left=0, right = n-1;
    while(left<=right){
        int mid = left + (right-left) / 2;
        if (arr[mid]==x)return mid;
        else if (arr[mid]<x) left = mid +1;
        else right = mid -1;
    }
    return 0;
}

// Complejidad O(n) Lienal 
void print_array(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout << arr[i]<< " ";
    }
}

// Complejidad O (n log n) Logarítmica lineal 
void merge(int arr[], int left, int right){
    // combinar dos subarreglos ordenados
}
void merge_sort(int arr[], int left, int right){
    if(left<right){
        int mid = left+(right-left)/2;
        merge_sort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

// Complejidad O(n²) Cuadrática
void bubble_sort(int arr[], int n){
    for(int i=0; j<n-i-1; j++){
        if (arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
}

//Complejidad O(2ⁿ) Exponencial
int knapsack(int values[], int weights[], int n, int W){
    if (n==0 || W==0) return 0;
    if (weights[n-1] > W) return knapsack(values, weights, n-1, W);
    else;
        return max(values[n-1]+knapsack(values, weights, n-1, W-weights[n-1]));
            knapsack(values. weights, n-1, W);
}

