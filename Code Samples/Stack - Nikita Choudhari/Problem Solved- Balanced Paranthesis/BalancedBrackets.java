import java.util.*;

public class BalancedBrackets {

	// function to check if brackets are balanced
	static boolean areBracketsBalanced(String expr)
	{
		Deque<Character> stack
			= new ArrayDeque<Character>();

		
		for (int i = 0; i < expr.length(); i++) {
			char x = expr.charAt(i);

			if (x == '(' || x == '[' || x == '{') {
				// Push the element in the stack
				stack.push(x);
				continue;
			}

	
			if (stack.isEmpty())
				return false;
			char check;
			switch (x) {
			case ')':
				check = stack.pop();
				if (check == '{' || check == '[')
					return false;
				break;

			case '}':
				check = stack.pop();
				if (check == '(' || check == '[')
					return false;
				break;

			case ']':
				check = stack.pop();
				if (check == '(' || check == '{')
					return false;
				break;
			}
		}
		return (stack.isEmpty());
	}

	public static void main(String[] args)
	{
		String expr = "([{}])";

		// Function call
		if (areBracketsBalanced(expr))
			System.out.println("Balanced ");
		else
			System.out.println("Not Balanced ");
	}
}
