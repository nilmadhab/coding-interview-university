public class LinkedList{


	static class Node{

		private int item;
		private Node next;

		public Node(int num){
			item = num;
			next = null;
		}

		public Node(int num, Node node){
			item = num;
			next = node;
		}

		public Node getNext(){
			return next;
		}

		public int getItem(){
			return item;
		}

		public boolean isEmpty(){
			return size == 0;
		}

		public int valueAt(int index){
			
		}
	}

	static class SList{

		private Node head;

		private int size;

		public SList(){
			head = null;
			size = 0;
		}

		public void appendBegin(int num){
			head = new Node(num, head);
			size+=1;
		}

		public int getSize(){
			return size;
		}

		public void printAll(){
			Node start = head;

			while( start != null){
				System.out.print(start.getItem() + "-->");
				start = start.getNext();
			}

			System.out.println(" ");	
		}
	}


	public static void main(String[] args) {


		SList sList = new SList();

		sList.appendBegin(3);
		sList.appendBegin(2);
		sList.appendBegin(1);

		sList.printAll();
		
	}
}