public class Person{ //定义类的名字是person
	
	String name;     //类中的属性 name
	int age;		//类中的属性  age
	
	//构造方法   如果不写，系统会默认给你写上默认方法
	//           如果写了，系统不会给你写上默认方法
	// 构造方法的方法名：与类名相同
	//            返回值：无
	public Person(){ 	//接收对象一，对象二创建的对象
		
	}
	
	//重载方法
		public Person(String name,int age){  //接收对象三创建的对象
		this.name = name;
		this.age = age;
	}
	
	String personinfo(){  
		return"这个人的名字"+name+" 年龄是"+age;
	}
	
	public static void main(String[] args){  //主函数
	
		//对象1
		Person person = new Person();   //创建对象
		person.name = "jack";  //对对象属性进行赋值
		person.age = 18;	   //如果不赋值将默认为默认值
	
		//对象2
		Person person2 = new Person();  
		person.name = "tom";
		person.age = 22;
		
			
		Person person4 = person2;
		person.age = 25;
		//对象3
		Person person3 = new Person("Alice",22);
		
		
		
		System.out.println(person.personinfo());
		System.out.println(person2.personinfo());
		System.out.println(person3.personinfo());
	}
}







