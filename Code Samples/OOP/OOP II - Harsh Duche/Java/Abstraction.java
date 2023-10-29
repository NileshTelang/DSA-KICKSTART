
abstract class GdscMember {
    public abstract void id();
}

class DevTeam extends GdscMember {
    @Override
    public void id() {
        System.out.println("My name is Harsh & I'm development team member");
    }
}

public class Abstraction {
    public static void main(String[] args) {
        DevTeam dev1 = new DevTeam();
        dev1.id();
    }
}
