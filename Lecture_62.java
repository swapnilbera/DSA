import java.util.*;
class tree{
    int data;
    tree left;
    tree right;
    public tree(int data){
        this.data=data;
        left=null;
        right=null;
    }
}
public class lecture_62 {
    public static tree create_tree(){
        System.out.println("Enter Node Data: ");
        int data;
        Scanner sc=new Scanner(System.in);
        data=sc.nextInt();
        tree root=new tree(data);
        if(data == -1) {
            return null;
        }
        System.out.println("Enter data for inserting in left of " + data);
        root.left=create_tree();
        System.out.println("Enter data for inserting in right of " +data);
        root.right=create_tree();
        return root;
    }
    public static void tree_level_order_traversal(tree node){
        Queue<tree> queue=new java.util.LinkedList<>();
        queue.add(node);
        queue.add(null);
        while (!queue.isEmpty()){
            tree temp=queue.remove();
            if(temp==null){
                System.out.println();
                if(!queue.isEmpty())
                    queue.add(null);
            }
            else {
                System.out.print(temp.data + " ");
                if (temp.left != null) {
                    queue.add(temp.left);
                }
                if (temp.right != null) {
                    queue.add(temp.right);
                }
            }
        }

    }
    public static tree cratefrom_level_order() {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Data For Node: ");
        int data=sc.nextInt();
        tree node=new tree(data);
        Queue<tree> queue=new LinkedList<>();
        queue.add(node);
        while(!queue.isEmpty()){
            tree temp=queue.remove();
            System.out.println("Enter Data For left child of  "+temp.data);
            int leftdata=sc.nextInt();
            if(leftdata!=-1){
               temp.left=new tree(leftdata);
               queue.add(temp.left);
            }
            System.out.println("Enter Data For right child of  "+temp.data);
            int rightdata=sc.nextInt();
            if(rightdata!=-1){
                temp.right=new tree(rightdata);
                queue.add(temp.right);
            }
        }
        return node;
    }
    public static void main(String[] args) {
        //tree main_tree=create_tree();
        tree main_tree=cratefrom_level_order();
        tree_level_order_traversal(main_tree);
    }

}
