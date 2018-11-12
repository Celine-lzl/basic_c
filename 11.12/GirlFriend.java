//对现实生活抽象
//GirlFriend --> 类
//		         	类的组成：1.属性(变量，描述每个对象的具体特点）
//					   	      2.方法（操作的行为）

public class GirlFriend{
	
	//对女朋友的要求 -->特点 -->属性
	
	private String gender = "女";  //未初始化时默认为 null
	private int age;				// 0
	private String name;			// null 
	private int height;				// 0
	private int weight;				// 0	
	
		//女朋友能做的事情-->行为 -->方法
	
	public void movie(){
		System.out.println("看电影");
	}
	public void fire(){
		System.out.println("你是个好人");
	}

	public static void main(String[] args){
	// 女，夏雨荷，24岁,170CM,60KG --> 具体信息 -->具体化的过程也就是初始化对象
	//具体化后为对象
	GirlFriend girlFriend = new GirlFriend(); //赋值具体信息
	girlFriend.gender = "女";
	girlFriend.name = "夏雨荷";
	girlFriend.age = 24;
	girlFriend.height = 170;
	girlFriend.weight = 60;
	
	// 面向对象  对象.方法调用
	girlFriend.movie(); 
	girlFriend.fire();
	
	}
}










