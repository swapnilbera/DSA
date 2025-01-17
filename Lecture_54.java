public class stack_array {
    public static void main(String[] args) {
        stack s=new stack();
        s.setsize(5);
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(5);
        s.print();
        s.pop();
        s.pop();
        s.pop();
        s.print();

    }
}
class stack{
    int arr[];
    int size;
    int top;
    void setsize(int size){
        this.size=size;
        arr=new int[size];
        int top=-1;
    }
    void push(int element){
        if(top!=size-1){
            top++;
            arr[top]=element;
        }
        else{
            System.out.println("Stack Overflow....");
        }
    }
    void pop(){
        if(top!=-1){
            top--;
        }
        else{
            System.out.println("Stack Underflow....");
        }
    }
    void print(){
        for (int i = 0; i <= top; i++) {
            System.out.println("Element is: "+arr[i]);
        }
    }
}
