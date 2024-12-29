package Heap;

public class heap
{
    private int[] heap;
    private int size;
    private int capacity;

    public heap(int capacity){
        this.capacity=capacity;
        this.heap=new int[capacity];
        this.size=0;
    }

    private int parent(int i){
        return (i-1)/2;
    }

    private int left(int i){
        return 2*i+1;

    }

    private int right(int i){
        return 2*i+2;
    }

    public void insert(int i){
        if(size==capacity){
            System.out.println("Heap is full");
        }

        heap[size]=i;
        size++;
        rearrangeup(size-1);
    }

    public void swap(int i, int j){
        int temp = heap[i];
        heap[i] = heap[j];
        heap[j] = temp;
    }

    public void rearrangeup(int index){
        while(index>0 && heap[parent(index)]<heap[index]){
            swap(index, parent(index));
            index=parent(index);
        }
    }

    public int exracttop(){
        if(size==0){
            System.out.println("heap is empty");
        }

        int root=heap[0];
        heap[0]=heap[size-1];
        size--;
        heapifydown(0);
        return root;
    }

    public void heapifydown(int index){
        int largest=index;
        int l=left(index);
        int r=right(index);

        if(l<size && heap[largest]< heap[l]){
            largest=l;
        }
        if(r<size && heap[largest]< heap[r]){
            largest=r;
        }

        if(largest!=index){
            swap(index,largest);
            heapifydown(largest);
        }

    }

    public static void main(String[] args) {
        heap maxheap=new heap(10);

        maxheap.insert(2);
        maxheap.insert(5);
        maxheap.insert(7);
        maxheap.insert(1);
        System.out.println(maxheap.exracttop()+"the top element");
        System.out.println("----------------------");
        for(int i=0;i< maxheap.size;i++){
            System.out.println(maxheap.heap[i]);
        }
    }
}
