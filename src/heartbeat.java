
public class heartbeat {
public static void main(String[] args) {
	int time = 0;
	while(true) {
		
		
		try {
			Thread.sleep(1000);
			time += 1;
		} catch(InterruptedException e) {
			
		}
		System.out.println(time + " sec have elapsed");
	}
	
}
}
