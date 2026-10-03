enum Laptop
{
    Samsung(60000), Iphone(82000), Oneplus(30000), Poco;

    private int price;

    private Laptop()
   {
    price = 18000;
   } 

    private Laptop(int price)
    {
        this.price=price;
    }    


    public static void main(String[] args) {
        
        for(Laptop lap : Laptop.values())
        {
            System.out.println(lap +" : "+ lap.price +"/-");
        }
    }
}