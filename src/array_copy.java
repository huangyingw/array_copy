public class array_copy {
	static void array_copy(int array[]) {
		int len = array.length;

		int[] result = new int[len];
		for (int i = 0; i < len; i++) {
			result[i] = array[i];
		}
		int temp;
		temp = result[0];
		result[0] = result[1];
		result[1] = temp;
	}

	static void array_uncopy(int array[]) {
		int temp;
		temp = array[0];
		array[0] = array[1];
		array[1] = temp;
	}

	static void print_array(int array[]) {
		int len = array.length;
		for (int i = 0; i < len; i++) {
			System.out.print(array[i] + ",");
		}
		System.out.println();
	}

	public static void main(String arg[]) {
		int a[] = { 4, 2, 5 };

		print_array(a);
		array_copy(a);
		print_array(a);
		System.out.println();

		print_array(a);
		array_uncopy(a);
		print_array(a);

	}
}
