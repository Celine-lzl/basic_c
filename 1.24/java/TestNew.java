package www.bit.java;

public class TestNew{
    public static void main(String[] args) {

    }
}
/*interface IColor{
    String color();
}
enum Color implements  IColor{
    RED("红"),GREEN("绿"),BLUE("蓝");
    private String title;  //若将该行放在首行，则会报错
    //public Color(String title){ 枚举是多例模式，不能用public,
    // 构造方法公有化外部便可以直接访问了必须是private
    private Color(String title){
        this.title = title;
    }

    @Override
    public String toString() {
        return this.title;
    }
    public String color(){
        return this.name();
    }
}
public  class TestNew{
    public static void main(String[] args) {
        for(Color color : Color.values()){
            System.out.println(color);
        }
        IColor color = Color.RED;//枚举类对象，通过向上转型转型成color
        System.out.println(color);
        System.out.println(color.color());
    }
}*/
/*class Color{
    private String title;
    public static final int RED_FLAG = 1;
    public static final int GREEN_FLAG = 5;
    public static final int BLUE_FLAG = 10;
    private static final Color RED = new Color("红");
    private static final Color GREEN = new Color("绿");
    private static final Color BLUE = new Color("蓝");
    private Color(String title){
        this.title = title;
    }
    public static Color getInstance(int flag){
        switch(flag){
            case RED_FLAG:
                return RED;
            case GREEN_FLAG:
                return GREEN;
            case BLUE_FLAG:
                return  BLUE;
            default:
                return null;
        }
    }

    @Override
    public String toString() {
        return this.title;
    }
}
public class TestNew{
    public static void main(String[] args) {
        Color color = Color.getInstance(Color.RED_FLAG);
        System.out.println(color);
    }
}*/
/*interface IInterface<T>{
    T test(T t);
}
// 1. 子类继续保留泛型
class InterfaceImpl<T> implements IInterface<T>{
    @Override
  public T test(T t) {
    return t;
  }
}
public class TestNew{
    public static void main(String[] args) {
        IInterface<String> iInterface = new InterfaceImpl<String>();
        System.out.println(iInterface.test("hello"));
    }
}*/

/*//2.子类定义时确定好类型
class InterfaceImpl implements  IInterface<String>{
    @Override
    public String test(String s) { //确定好为泛型
        return s;
    }
}
public class TestNew{
    public static void main(String[] args) {
        IInterface<String> iInterface = new InterfaceImpl();
        System.out.println(iInterface.test("hello"));
    }
}*/

/*class MyClass<T> {
    private T value1;
    public T getValue1() { return value1; }
    public void setValue1(T value1) { this.value1 = value1; }
}
public class TestNew {
    public static void main(String[] args) {

    }
    public static void print(MyClass<? super String> myClass){
       myClass.setValue1("hello");//此处可以修改，因为子类到父类是自动的向上转型
        System.out.println(myClass.getValue1());
    }
}*/
/*class MyClass<T,E>{
    private T value1;
    private E value2;
    public T getValue1() { return value1; }
    public void setValue1(T value1) { this.value1 = value1; }
    public E getValue2() { return value2; }
    public void setValue2(E value2) { this.value2 = value2; }
}
public class TestNew{
    public static void main(String[] args) {
        MyClass<String,Integer> myClass = new MyClass<String,Integer>();
        myClass.setValue1("hello");  //也可将两个定义为相同类型
        myClass.setValue2(10);
        System.out.println(myClass.getValue1());
        System.out.println(myClass.getValue2());
    }
}*/
/*class MyClass<T>{
    private T value1;
    public T getValue1() {
        return value1;
    }
    public void setValue1(T value1) {
        this.value1 = value1;
    }
}
public class TestNew{
    public static void main(String[] args) {
        MyClass<String> myclass = new MyClass<String>();  //使用时再定义类型
        myclass.setValue1("hello");                       //避免强转异常
        System.out.println(myclass.getValue1());
        MyClass<Integer> myclass1 = new MyClass<Integer>();
        myclass1.setValue1(123);
        //myclass1.setValue1("ww"); //若用户误输为String型，出现红波浪线，即编译报错
        System.out.println(myclass1.getValue1());
    }
}*/
/*
//课件中2.1泛型的引出
class Point{
    private Object X;
    private Object y;

    public Object getX() { return X; }
    public void setX(Object x) { X = x; }
    public Object getY() { return y; }
    public void setY(Object y) { this.y = y; }
}
public class TestNew{
    public static void main(String[] args) {
        //第一种情况，X,Y都是整型
        /*Point point = new Point();
        point.setX(10);//Object是引用数据类型，10是int型
        point.setY(20);//因为此处自动装箱了,故可以用Object接int型
        int x = (Integer) point.getX();//自动拆箱，Int不能直接接Object
        int y = (Integer) point.getY();
        System.out.println(x+"、"+y);*/
        //第二种情况，X为10.1，Y为20.1，两个都为double型
        /*       Point point = new Point();
                point.setX(10.1);
                point.setY(20.1);
                double x = (double) point.getX();
                double y = (double) point.getY();
               System.out.println(x+"、"+y);*/
        // 第三种情况,X为北纬10度，Y为东经20度
        /*Point point = new Point();
        point.setX("北纬10度");
        point.setY("东经20度");
        String x = (String) point.getX();
        String y = (String) point.getY();
        System.out.println(x+"、"+y);*/
        //第四种情况，用户输入时，将X输入整型,Y输入字符型
       /* Point point = new Point();
        point.setX(10);
        point.setY("东经20度");
        String x = (String) point.getX(); //Integer不能变为String,数据转换异常，故引入泛型
        String y = (String) point.getY();//可以检查类型和类型转换
        System.out.println(x+"、"+y);
    }
}
*/
/*public class TestNew {
    public static void main(String[] args) {
        System.out.println(add(new int[] {1,3,5}));
        System.out.println((add(new int[] {1,3,5,7})));
    }
    public static int add(int... data){
        int result = 0;
        for(int i = 0; i<data.length; i++){
            result += data[i];
        }
        return result;
    }
}*/
