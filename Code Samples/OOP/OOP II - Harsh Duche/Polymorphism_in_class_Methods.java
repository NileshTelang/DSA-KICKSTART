
class dev_team {
    String name;
    String dept;

    public dev_team(String name, String dept) {
        this.name = name;
        this.dept = dept;
    }

    public void introduce() {
        System.out.printf("I am Tech Lead %s from %s\n", this.name, this.dept);
    }

    public void skills() {
        System.out.println("We can code anything and we are the best\n");
    }
}

class design_team {
    String name;
    String dept;

    public design_team(String name, String dept) {
        this.name = name;
        this.dept = dept;
    }

    public void introduce() {
        System.out.printf("I am Design Lead %s from %s\n", this.name, this.dept);
    }

    public void skills() {
        System.out.println("We can design cool digital content");
    }
}

public class Polymorphism_in_class_Methods {
  public static void main(String[] args) {
      dev_team dev1 = new dev_team("Nilesh Telang", "Computer");
      design_team designer1 = new design_team("Anshusingh Rajput", "ENTC");

      dev1.introduce();
      dev1.skills();

      designer1.introduce();
      designer1.skills();
  }
}