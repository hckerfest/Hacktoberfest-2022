import org.springframework.data.domain;

public class StringCheck{
    public StringCheck(){
        ipv4 = ("(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])");
        ipv6 = ("((([0-9a-fA-F]){1,4})\\:){7}([0-9a-fA-F]){1,4}");
       if( ExampleMatcher.StringMatcher(ipv4))
         return ipv4;
        else
        return ipv6;
    }
    public sttaic void main(String args[]){
        new StringCheck();
    }
}
