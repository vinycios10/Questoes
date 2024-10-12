public class Q2
{
	public static void main(String[] args) {
	    String frase = "abra cAdabrA";
	    int i = 0, count = 0;
	    for (;i< frase.length(); i++){
	        if (frase.charAt(i) == 'a' || frase.charAt(i) == 'A')
	            count++;
	    }
	    if(count==0)
	        System.out.println("A frase \""+frase+"\" nao possui \'a\'");
	    else
		    System.out.println("A frase \""+frase+"\" possui "+count+" \'a\'");
		
	}
}
