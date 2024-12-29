package linkedlist;

import static linkedlist.linkedlist.node.del;
import static linkedlist.linkedlist.node.insert;

public class linkedlist
{
    node head;
    static  class node
    {

        int data;
        node next;

        node(int k){
            data=k;
            next=null;

        }


        public static linkedlist insert(linkedlist n, int data){
            node new_node=new node(data);

            if(n.head==null){
                n.head=new_node;
            }

            else{
                node temp=n.head;
                while(temp.next!=null){
                    temp=temp.next;
                }

                temp.next=new_node;
            }
            return n;
        }

        public static void print(linkedlist n){
            node temp=n.head;
            while(temp.next!=null){
                System.out.print(temp.data+"-->");
                temp=temp.next;
            }
            System.out.print("null");


        }

        public static void del(linkedlist n, int d){
            node temp=n.head;

            if(temp.data==d){
                n.head=temp.next;
                return;
            }

            while (temp.next.data!=d){
                temp=temp.next;
            }


            node todel=temp.next;
            temp.next=temp.next.next;


        }

        public static void mid(linkedlist n)
        {
            node fast=n.head;
            node slow=n.head;

            while(fast!=null && fast.next!=null)
            {
                fast=fast.next.next;
                slow=slow.next;
            }

            System.out.println(slow.data);
        }
    }



    public static void main(String[] args) {
        linkedlist list=new linkedlist();

        list=insert(list,3);
        list=insert(list,4);
        list=insert(list,2);
        list=insert(list,9);
        node.print(list);
        node.mid(list);
        node.print(list);
    }

}
