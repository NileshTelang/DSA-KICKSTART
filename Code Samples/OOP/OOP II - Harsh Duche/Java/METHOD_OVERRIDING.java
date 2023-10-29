class gdsc_member {
    String name;

    public gdsc_member(String name) {
        this.name = name;
    }

    public void introduce() {
        System.out.println("My name is " + this.name + " & I'm a GDSC member");
    }
}

class dev_team extends gdsc_member {
    String domain;

    public dev_team(String name, String domain) {
        super(name);
        this.domain = domain;
    }

    public void introduce() {
        System.out.println("My name is " + this.name + " & I'm a development team member. My domain is " + this.domain);
    }
}

public class METHOD_OVERRIDING {
    public static void main(String[] args) {
        gdsc_member member1 = new gdsc_member("Harsh");
        dev_team dev1 = new dev_team("Harsh", "AI/ML");

        member1.introduce();
        dev1.introduce();
    }
}
