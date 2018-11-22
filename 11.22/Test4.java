class Person{
	public void print(){
		//this表示当前对象
		System.out.println("[Person类的print方法]"+this);
	}
}

public class Test4{
	public static void main(String[] args){
		Person per1 = new Person();
		System.out.println("[main方法的输出]"+per1);//此时per1中存放的是堆空间的地址
		per1.print();
		System.out.println("------------------分割线------------------");
		Person per2 = new Person();
		System.out.println("[main方法的输出]"+per2);
		per2.print();
	}
}


	/*public Person(){
			System.out.println("******************");  //1
	}
	public Person(String name){
			//System.out.println("******************");  //2
			//调用本类无参构造
			this();
			this.name = name;						     //3
	} 
	public Person(String name, int age){
	        //System.out.println("******************");  //4
			// this.name = name;                         //5   注释掉的代码出现大量重复, 1,2,4重复三次,3,5重复两次
			 //调用本类一个参数的有参构造				 //    Java中不允许出现重复代码，否则需要文档说明为什么重复
			 this(name);
			 this.age = age;	   					     
	}	
	public void getPersoninfo(){
		System.out.println("姓名为"+name+",年龄为"+age);  //此时都在一个类中，可以不用getter,setter方法调用
	}
}
*/
	//public void setName(String n){
		//name = n;
	//}
	//public String getName(){
		//return name;
	//}
	//public void setAge(int num){
	//if(num <= 0 || num >= 150){
	//	age = 0;
	//}else{
		//age = num;
	 //}
	//}
	//public int getAge(){
		//return age;
	//}





/*class Person{
	public String name;
	public int age;
	public void eat(){
		System.out.println(name+"在吃饭");
	}
	
	public void sleep(){
		System.out.println(name+"在睡觉");
	}
	
	public void work(){
		if(age<22){
			System.out.println(name+"老老实实上学");
		}else{
			System.out.println(name+"老老实实搬砖");
		}
	}
}

public class Test4{  //主类，有且仅有一个且与源文件名字相同
	public static void main(String[] args){
		//根据Person类生产一个对象
		Person per1 = new Person();
		per1.name = "张三";
		per1.age = 18;
		Person per2 = new Person();
		per2.name = "李四";
		per2.age = 38;
		per1.work();
		per2.work();
		
	}
}*/