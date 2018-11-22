//浮点型：float double(默认值0.0)
//小数常量默认也是double类型，若要定义float变量，需要在小数后追加f或者F
//float f1 = 10.2F
/*public class Test2{
	public static void main(String[] args){
		System.out.println(1.1*1.1);
	}
}*/

/*public class Test2{
	public static void main(String[] args){
		float f1 = 1.1F;
		//float f2 = 1.1F;
		//System.out.println(f1*f2);
		//不可以写成下面这种
		System.out.println(1.1*f1);
		//1.1还是被默认为double型，double*float结果还是double
	}
}*/

/*public class Test2{
	public static void main(String[] args){
		System.out.println(10/4);   //运算结果是2
		System.out.println(10F/4);  //运算结果是2.5
		System.out.println(10/4.0); //运算结果是2.5，数据总是由低精度向高精度转换
		}
}*/

/*public class Test2{
	public static void main(String[] args){
		
	}
}*/


/*public class Test2{
	public static void main(String[] args){
		System.out.println(new int[]{1,3,5,7,9}[0]);
	}
}*/


/*public class Test2{
	public static void main(String[] args){
		int[] data = new int[]{1,3,5,7,9,11};
		System.out.println(data.length);
	}
}*/


/*public class Test2{
	public static void main(String[] args){
		int[] data = new int [3];
		data[0] = 10;
		data[1] = 20;
		data[2] = 30;
		//引用传递
		int[] tmp = data;
		tmp[2] = 40;
		System.out.println(data[2]);
	}
}*/


/*public class Test2{
	public static void main(String[] args){
		int[] data = new int[3];
		data[0] = 10;
		data[1] = 20;
		for(int x:data){
			System.out.println(x);
		}
		
	}
}*/


/*public class Test2{
	public static void main(String[] args){
		int[] data = new int[3];
		data[0] = 10;
		data[1] = 20;
		for(int i = 0; i < data.length; i++){
			System.out.println(data[i]+" ");
		}
	}
}*/


/*public class Test2{
	public static void main(String[] args){
		System.out.println(recursion(100));
	}
	public static int recursion(int x){
		if(x==1){
			return 1;
		}else{
			return x+recursion(x-1);
		}
	}	
}*/


/*public class Test2{
	public static void main(String[] args){	
		System.out.println(add(5));
		System.out.println(add(5,5));
	}
	public static int add(int x){
		return x+5;
	}
	public static int add(int x, int y){
		return x+y+5;
	}
}*/


/*public class Test2{
	public static void main(String[] args){
		}
		public static void Switch(int x,int y){
			
		}
		public static int Switch(int x,int y){
			
		}
}*/

/*public class Test2{
	public static void main(String[] args){
		SwitchInt(2);  //输出为空
		SwitchInt(10); //输出10
	}
	public static void SwitchInt(int x){
		if(x==2){
			return;
		}
		System.out.println(x);
	}
}*/

public class Test2{
	public static void main(String[] args){
			System.out.println(add(5,5));
	}
	public static int add(int x, int y){
		return x+y;
	}
}


/*import java.util.Scanner;
public class Test2{
	public static void main(String[] args)throws Exception{
		System.out.println("请输入字符串");
		Scanner scanner = new Scanner(System.in);
		String str = scanner.nextLine();
		switch(str){
			case"abc":
				System.out.println("这是abc");
				break;
			case"def":
				System.out.println("这是def");
				break;
			default:
				System.out.println("hahah ");
				break;		
		}
	}
}*/


/*public class Test2{
	public static void main(String[] args) throws Exception{
     System.out.println("请输入一个字符");
	 char c = (char)System.in.read();
		switch(c){
		  case 'a':
					System.out.println("这是a");
		  case 'b':
					System.out.println("这是b");
		  default:
					System.out.println("hhhhhh");
					
	  }
	  
	}
}*/


/*public class Test2{
	public static void main(String[] args){
		int line = 10;
		for(int x= 0; x<line; x++){
			for(int y = 0; y<line-x; y++){
				System.out.print(" ");
			}
			for(int z = 0; z<x; z++){
				System.out.print("* ");
			}
			System.out.println();
		}
	}
}*/

/*public class Test2{
	public static void main(String[] args){
		if(1<3&&10/0==0){
			System.out.println("表达式为真");
		}
	}
}*/

/*public class Test2{
	public static void main(String[] args){
		int x = 3;
		int y = 4;
		System.out.println((x>y)?x+y:x-y);
	}
}*/

/*public class Test2{
	public static void main(String[] args){
		System.out.println("比特科技\n\t第一节\'java\'课开课啦");
		System.out.println("比特科技\n\t第一节\"java\"课开课啦");
	}
}*/

/*public class Test2{
	public static void main(String[] args){
			String str1 = "lalala ";
			String str2 = "hahaha ";
			System.out.println(str1+str2);  //用"+"将两个字符串拼接起来
			int num1 = 10;
			int num2 = 20;
			System.out.println("计算结果是"+10+20);
			System.out.println("计算结果是"+(10+20));
			}
}*/

/*public class Test2{
	public static void main(String[] args){
		char c = 'A';
		int num = c;
		System.out.println(num); 	//输出结果是65
		System.out.println((char)(c+32));	//输出结果为a
	}
}*/

/*public class Test2{
	public static void main(String[] args){
		if('0' == 0){
			System.out.println("字符0与数值0相等");
		}else{
				System.out.println("字符0与数值0不相等");
			}
		
	}
}*/







