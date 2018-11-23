/*public class Test6{
	public static void main(String[] args){
		
	}
}*/

public class Test6{
	public static void main(String[] args){
	  String str = "hello";
	  str += "world";
	  System.out.println(str);
	}
}


/*public class Test6{
	public static void main(String[] args){
	  StringBuffer sb = new StringBuffer("helloworld");
	  System.out.println(sb.delete(5,10).insert(5,"真好"));
	}
}*/

//删除指定范围字符串
/*public class Test6{
	public static void main(String[] args){
	  StringBuffer sb = new StringBuffer("helloworld");
	  sb.delete(0,5);  //是delete不是delate
	  System.out.println(sb);
	}
}*/

//字符串反转
/*public class Test6{
	public static void main(String[] args){
	  StringBuffer sb = new StringBuffer("helloworld");
	  sb.reverse();
	  System.out.println(sb);
	}
}*/

//stringBuffer-->String
/*public class Test6{
	public static void main(String[] args){
	  StringBuffer sb = new StringBuffer("hello");
	  String result = sb.toString();
	  System.out.println(result.isEmpty());//调用字符串的方法证明现在是字符串
	}
}*/

//首字母大写
/*public class Test6{
	public static void main(String[] args){
		String str = "hello";
		System.out.println(str.substring(0,1).toUpperCase()+str.substring(1));  
	}
}*/

/*//转大小写
public class Test6{
	public static void main(String[] args){
		String str = " hello world ";
		System.out.println(" hello world ".toUpperCase());  //转大写
		System.out.println(str.toLowerCase());  //转小写
	}
}*/

//去掉空格
/*public class Test6{
	public static void main(String[] args){
		String str = " hello world ";
		String result = str.trim();
		System.out.println(result);

	}
}*/

/*public class Test6{
	public static void main(String[] args){
			String str = "192.168.1.1";
			String[] result = str.split("\\.");
			for(String temp:result){
				System.out.println(temp);
			}
	}
}*/
//字符串拆分
/*public class Test6{
	public static void main(String[] args){
		String str2 = "hello bit hello java";
		String[] result = str2.split(" ",2); //数字小于长度，能拆几个是几个，超出则全拆
		for(String str: result){
			System.out.println(str);
		}
	}
}*/

/*//字符串替换
public class Test6{
	public static void main(String[] args){
		String str2 = "hello world!";
		System.out.println(str2.replaceAll("l","_")); //前一个为要被替换的，后一位替换的
		System.out.println(str2.replaceFirst("l","_"));
	}
}*/

/*//判断是否从指定位置开始以指定字符串开头
public class Test6{
	public static void main(String[] args) throws Exception{
		String str1 = "e";
		String str2 = "hello";
		System.out.println(str2.startsWith(str1,1));
	}
}*/

/*//判断STR是否在本字符串中
public class Test6{
	public static void main(String[] args){
		String str1 = "he";
		String str2 = "hello";
		System.out.println(str2.contains(str1));
	}
}*/
/*//比较两个字符串大小
public class Test6{
	public static void main(String[] args){
		String str1 = "hello";
		String str2 = "Hello";
		System.out.println(str1.compareTo(str2));
		
	}
}*/

/*public class Test6{
	public static void main(String[] args){
		System.out.println("hello".equalsIgnoreCase("HELLO"));
	}
}*/

/*//将字符串按照指定编码转为字节数组
public class Test6{
	public static void main(String[] args) throws Exception{ //抛出异常是因为以下那种编码格式会产生异常
		String str = "hello";
		byte[] data = str.getBytes("ISO-8859-1");  //一种编码格式
		for(byte b : data){
			System.out.println(b);
		}
		}
}*/

//将字符串变为字节数组
/*public class Test6{
	public static void main(String[] args){
		String str = "hello";
		byte[] data = str.getBytes();
		System.out.println(data);
		for(byte b : data){
			System.out.println(b);
		}
	}
}*/

/*//将字符串变为字符数组
public class Test6{
	public static void main(String[] args){
		char[] c = "hello".toCharArray();
		System.out.println(c); //输出为hello,此时不知hello到底是数组还是字符串
		System.out.println(c.length); //若为数组，调用lengrh为属性，输出为5
		System.out.println("hello".length()); //若为字符串，调用length为方法，输出为5
	}
}*/

//判断一个字符串是否是数组
/*public class Test6{
	public static void main(String[] args){
		System.out.println(isNumber("abc"));
	}

	
	public static boolean isNumber(String str){
		char[] data = str.toCharArray();
		for(int i=0; i<data.length; i++){
			if(data[i]<'0' || data[i]>'9'){
				return false;
				}
			}
			return true;
		}
}*/

//判断一个字节是否是字符串
/*public class Test6{
	public static void main(String[] args){
		byte[] data = new byte[]{1,3,5,7,9};
		String str = new String(data);
		System.out.println(data);
	}
}*/









