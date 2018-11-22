/*public class Test3{
	Public static void main(String[] args){
		
	}
}*/

import java.util.Arrays;
public class Test3{
	public static void main(String[] args){
		int[] data1 = new int[]{1,3,4,5,6};
		int[] data2 = Arrays.copyOf(data1,data1.length+1);
		printarr(data2);
	}
	public static void printarr(int[] data1){
		for(int data2: data1){
		System.out.print(data2+"、");
			}
		}
}


/*public class Test3{
	public static void main(String[] args){
		int[] data1 = new int[]{1,2,3,4,5,6,7,8,9};
		int[] data2 = new int[]{11,22,33,44,55,66,77,88};
		//1 2 22 33 44 6 7 8 9
		//目标文件与哪个数组更接近，哪个就是目标数组
		//此题目标数组是data1,源数组是data2
		System.arraycopy(data2,1,data1,2,3);
		printarr(data1);
	}
	public static void printarr(int[] data1){
			for(int x: data1){
				System.out.print(x+"、");
			}
		}
}*/

/*import java.util.Arrays;
public class Test3{
	public static void main(String[] args){
		int[] data = new int[]{1,5,3,2,90,76};
		char[] c = new char[]{'c','b','g','l'};
		java.util.Arrays.sort(data);
		Arrays.sort(c);  //代码首行加了包可以简写  
		printArr(data);
		printArr(c);
	}
	public static void printArr(int[] data){
		for(int x:data){
			System.out.print(x+"、");
		}
	}	
	public static void printArr(char[] c){
		for(char temp:c){
			System.out.print(temp+"、");
		}
	}
	
}*/

/*public class Test3{
	public static void main(String[] args){
		int[] data = Init();
		printArr(data);
		modify(data);
	}
	public static void printArr(int[] data){  //记得传对参数
		for(int x: data){
			System.out.print(x+"、");
		}
	}
	public static int[] Init(){
		return new int[]{1,3,5,7,9};
	}
	public static void modify(int[] data){ //传的是data，不是X
		for (int i=0; i<data.length; i++){
			data[i] *= 2;
			System.out.print(data[i]+"、");
		}
	}
}*/

/*public class Test3{
	public static void main(String[] args){
	  int[] data = new int[]{1,3,5,7,9};
	  printArray(data);
	}
	public static void printArray(int[] data){ //记得传参
		for(int x: data){
		    System.out.print(x+"、");
	    } 
	}
}*/


/*public class Test3{
	public static void main(String[] args){
		int[][] data = new int[][]{{1,2,3},{4,5,6},{7,8,9,0}};	//每一行数据与每一行数据之间有","
		for(int i = 0; i<data.length; i++){  //总行数
			for(int j = 0; j<data[i].length; j++){  //总列数
				System.out.print(data[i][j]+"、");
			}
			System.out.println();
		}
	}
}*/