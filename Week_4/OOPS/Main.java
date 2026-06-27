


interface Test {
    int square(int n);
}

class Arithmetic implements Test {
    public int square(int n) {
        return n * n;
    }
}

class ToTestInt {
    void show() {
        Arithmetic a = new Arithmetic();
        System.out.println("Square of 5 = " + a.square(5));
    }
}

class Outer {
    void display() {
        System.out.println("Display method of Outer class");
    }

    class Inner {
        void display() {
            System.out.println("Display method of Inner class");
        }
    }
}

class Point {
    private int x, y;

    public Point() {
        x = 0;
        y = 0;
    }

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void display() {
        System.out.println("Point : (" + x + ", " + y + ")");
    }
}

class Box {
    double length, breadth;

    Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    double area() {
        return length * breadth;
    }
}

class Box3D extends Box {
    double height;

    Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    double volume() {
        return length * breadth * height;
    }
}

public class Main {
    public static void main(String[] args) {

        // Ques 1
        ToTestInt t = new ToTestInt();
        t.show();

        // Ques 2
        Outer o = new Outer();
        o.display();

        Outer.Inner i = o.new Inner();
        i.display();

        // Ques 3
        Point p1 = new Point();
        Point p2 = new Point(10, 20);

        p1.display();
        p2.display();

        p1.setXY(5, 15);
        p1.display();

        // Ques 4
        Box b = new Box(10, 5);
        System.out.println("Area of Box = " + b.area());

        Box3D b3 = new Box3D(10, 5, 8);
        System.out.println("Area of Box3D base = " + b3.area());
        System.out.println("Volume of Box3D = " + b3.volume());
    }
}


