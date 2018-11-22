/*public class Test1{
	public static void main(String[] args){
		System.out.println("Hello java");
		//命令行向主方法传参： java 主类名称 参数一 参数二 ...(中间有空格)
		//args表示添加字符数组中的第二个元素
		//但是也要把第一个元素写出来 
		System.out.println(args[1]);
	}
}*/


/*public class Test1{
	public static void main(String[] args){
		long maxValue = Integer.MAX_VALUE+1L;		//在整型常量后加上字母L表示常量当前为long类型
		long minValue = (long)Integer.MIN_VALUE-1;  //将最小值强行类型声明为long型
		System.out.println(maxValue);			    //严格来讲不是强制类型转换										         //Java中的强转指的是大类型转为小类型	
		System.out.println(minValue);				//java中的强转指的是大类型转为小类型            
		}
}*/

/*public class Test1{
	public static void main(String[] args){
		long maxValue = Integer.MAX_VALUE+1L;
		int num = (int)maxValue;
		System.out.println(num);
	}
}*/

/*public class Test1{
	public static void main(String[] args){
		int b = 120;
		byte b1 = b;
		System.out.println(b1);
	}
}*/

class Person{
	private String name;
	//这不是构造方法，只是命名不规范的普通方法，如果它是构造方法，
	//主方法中Person per1 = new Person();相当于调用它的构造方法了，
	//应该要输出星号，但结果并没有输出。
	public void Person(){
		System.out.println("*****************");
	}
	//构造方法
	public Person(){
		System.out.println(">>>>>>>>>>>>>>>>>>");
	}
	
	public void setName(String n){
		name = n;
	}

	public void getPersoninfo(){
		System.out.println("姓名为"+name);
	}
}

public class Test1{
	public static void main(String[] args){
		Person per1 = new Person();
		   //不要写成per1.setAge = (-100);
		per1.setName("张三"); //这是方法调用！！！
		per1.getPersoninfo();
	}
}







