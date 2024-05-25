//SLICE'S BAKERY SHOPPING SYSTEM V1

//Function Declaration
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
double flourPrice_func(int items, int qty);
double leavenersPrice_func (int items, int qty);
double sugarPrice_func (int items, int qty);
double dairyPrice_func (int items, int qty);
double extractsPrice_func (int items, int qty);
double addonsPrice_func (int items, int qty);
string flourText_func(int items);
string leavenersText_func(int items);
string sugarText_func(int items);
string dairyText_func(int items);
string extractsText_func(int items);
string addonsText_func(int items);

//Function for calculate total
double total (double price,int qty)
{
    double total;
    total=price*qty;

    return total;
}

//Main code
int main ()
{
    //Variable declaration
    bool memberStatus;
    int itemQty,flourQty,leavenerQty,sugarQty,dairyQty,extractsQty,addonsQty,orderCount=0,sentinel=0;
    int select,select1,select3, menuSection,flourItems,leavenersItems,sugarNsalt_Items,dairyItems,extractsItems,addonsItems;
    string text,name,email,contact,memberText,discountText;
    double totalInCart,totalFlour,totalLeave,totalSugar,totalDairy,totalExtracts,totalAddons,totalDiscount,totalAfterDisc;
    double flourPrice,leavePrice,sugarPrice,dairyPrice,extratcsPrice,addonsPrice,netTotal,discount,combinedNetTotal,tax;
    
    //Welcome interface
    cout<<"-----------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tSLICE BAKERY ENTERPRISE"<<endl;
    cout<<"-----------------------------------------------------------------------------------------------"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"************************************************************************************************************************"<<endl;
    cout<<"Welcome to our shopping programme !" <<endl<<endl;
    cout<<"This programme was fully developed for making our customers feels comfortable in shopping with us."<<endl<<endl;
    cout<<"With organized and systematic library of our bakery items, it's pleasant our customers in making orders."<<endl<<endl;
    cout<<"************************************************************************************************************************"<<endl<<endl;
    cout<<"Press enter to continue [1] Yes [0] No"<<endl;
    cin>>select; // Initialization Value (Order operation)

    //Loop for main order operation
    while(select!=0)//Evaluation Value (Order operation )
    {
        system("CLS");
        orderCount++;
        
        //Customer information interface
        information:
        cout<<"________________________________________________"<<endl;
        cout<<"\t\t CUSTOMER INFORMATION "<<endl;
        cout<<"________________________________________________"<<endl;
        cout<<"Please enter your name : ";
        cin.ignore(1,'\n');
        getline(cin,name);
        cout<<"Please enter your email : ";
        getline(cin,email);
        cout<<"Please enter your contact number : ";
        getline(cin,contact);
        cout<<"\nDo you wanna continue ? \n[1] Yes [0] I need to edit the information"<<endl;
        cin>>select3;
        
            if(select3==0) //If user wrong input information and wanted to edit it
            {
                system("CLS");
                goto information; 
            }

            else if(select3!=1) //Wrong typed statements
            {
                cout<<"You've typed wrong key ! Please re-enter : "<<endl;
                cin>>select3;
            }

        system("CLS");

        //Interface for section operation
        iniValue1:
        cout<<"---------------------------------------------------------------------------------------"<<endl;
        cout<<"\t\t\tSLICE BAKERY ENTERPRISE"<<endl;
        cout<<"---------------------------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t\tMAIN MENU"<<endl<<endl;
        cout<<"\t\tPlease select your desired sections : "<<endl<<endl;
        cout<<"\t [1] Flour\t [2] Leaveners\t [3] Sugar and salt"<<endl<<endl;
        cout<<"[4] Dairy\t [5] Extracts, flavouring and spices\t [6] Add-ons \t[0] Exit "<<endl<<endl;
        cin>>menuSection; // Initialization value (section operation)

        //Loop for menu section operation
        while (menuSection!=0) //Evaluation value (section operation)
        {
            if(menuSection==1) //Selection for flour  
            {
                
                system("CLS");
                cout<<"--------------------------------------------------------------------------"<<endl;
                cout<<"\t\t\tSLICE BAKERY ENTERPRISE"<<endl;
                cout<<"--------------------------------------------------------------------------"<<endl;
                cout<<"\t\t\tSECTION 01 : FLOUR "<<endl<<endl;
                cout<<"\t\tPlease select your desired items : "<<endl<<endl;
                cout<<"\t [1] All-purpose flour 850g \t [2] All-purpose flour 5kg"<<endl<<endl;
                cout<<"\t [3] Cake flour 800g \t [4] Corn starch 400g \t [0] Back "<<endl<<endl;
                cin>>flourItems;
                    
                if(flourItems==0) 
                {
                    if(select1!=1)
                    {
                        itemQty=0;
                        text=" ";
                    }
                    goto main;
                }

                else if (flourItems>4)
                {
                    if(select1!=1)
                    {
                        itemQty=0;
                        text=" ";
                    }
                    continue;
                }

                else (flourItems<=4);
                {
                    cout<<"\n******************"<<endl;
                    cout<<"Quantity : "<<endl;
                    cin>>itemQty;
                    flourPrice=flourPrice_func(flourItems, itemQty);
                    text=flourText_func(flourItems);
                }

                system("CLS");
                cout<<"**************************************************************************"<<endl;
                cout<<fixed<<setprecision(2);
                cout<<"\t\t The selected items : "<<text<<endl<<endl;
                cout<<"\t\t Total for Flour section : RM"<<flourPrice<<endl<<endl;
                cout<<"\t\t[1] Add to Cart [0] Exit"<<endl;
                cin>>select1;
                    if(select1==1)
                    {
                        totalFlour=totalFlour+flourPrice;

                    }
                    else;
                    {
                        continue;
                    }
            }

            else if(menuSection==2) //Selection for leaveners 
            {
                system("CLS");
                cout<<"--------------------------------------------------------------------------"<<endl;
                cout<<"\t\t\tSLICE BAKERY ENTERPRISE"<<endl;
                cout<<"--------------------------------------------------------------------------"<<endl;
                cout<<"\t\t\tSECTION 02 : LEAVENERS "<<endl<<endl;
                cout<<"\t\tPlease select your desired items : "<<endl<<endl;
                cout<<"\t [1] Baking soda 100g \t [2] Baking powder 100g"<<endl<<endl;
                cout<<"\t [3] Yeast 11g \t [4] Sourdough starter 150g \t [0] Back "<<endl<<endl;
                cin>>leavenersItems;
                
                    if(leavenersItems==0)
                    {
                       
                        if(select1!=1)
                        {
                            itemQty=0;
                            text=" ";
                        }
                        goto main;
                    }

                    else if (leavenersItems>4)
                    {
                        if(select1!=1)
                        {
                            itemQty=0;
                            text=" ";
                        }
                        continue;
                    }

                    else (leavenersItems<=4);
                    {
                        cout<<"\n******************"<<endl;
                        cout<<"Quantity : "<<endl;
                        cin>>itemQty;
                        leavePrice=leavenersPrice_func(leavenersItems, itemQty);
                        text=leavenersText_func(leavenersItems);
                    }
                system("CLS");    
                cout<<"**************************************************************************"<<endl;
                cout<<fixed<<setprecision(2);
                cout<<"\t\t The selected items : "<<text<<endl<<endl;
                cout<<"\t\t Total for Leaveners section : RM"<<leavePrice<<endl<<endl;
                cout<<"\t\t[1] Add to Cart [0] Exit"<<endl;
                cin>>select1;
                    if(select1==1)
                    {
                        totalLeave=totalLeave+leavePrice;
                    }
                    else;
                    {
                        continue;
                    }

            }

            else if(menuSection==3) //Selection for sugar and salt
            {
                system("CLS");
                cout<<"--------------------------------------------------------------------------"<<endl;
                cout<<"\t\t    SLICE BAKERY ENTERPRISE"<<endl;
                cout<<"--------------------------------------------------------------------------"<<endl;
                cout<<"\t\t   SECTION 03 : SUGAR AND SALT "<<endl<<endl;
                cout<<"\t\t Please select your desired items : "<<endl<<endl;
                cout<<"\t [1] Sugar 1kg \t [2] Brown sugar 500g \t [3] Icing sugar 500g"<<endl<<endl;
                cout<<"\t [4] Table salt 700g \t [5] Sea salt 500g \t [0] Back "<<endl<<endl;
                cin>>sugarNsalt_Items;
                
                    if(sugarNsalt_Items==0)
                    {
                        if(select1!=1)
                        {
                            itemQty=0;
                            text=" ";
                        }
                        goto main;
                    }

                    else if (sugarNsalt_Items>5)
                    {
                        if(select1!=1)
                        {
                            itemQty=0;
                            text=" ";
                        }
                        continue;
                    }

                    else (sugarNsalt_Items<=5);
                    {
                        cout<<"\n******************"<<endl;
                        cout<<"Quantity : "<<endl;
                        cin>>itemQty;
                        sugarPrice=sugarPrice_func(sugarNsalt_Items, itemQty);
                        text=sugarText_func(sugarNsalt_Items);
                    }
                system("CLS");    
                cout<<"**************************************************************************"<<endl;
                cout<<fixed<<setprecision(2);
                cout<<"\t\t The selected items : "<<text<<endl<<endl;
                cout<<"\t\t Total for Sugar and Salt section : RM"<<sugarPrice<<endl<<endl;
                cout<<"\t\t[1] Add to Cart [0] Exit"<<endl;
                cin>>select1;
                    if(select1==1)
                    {
                        totalSugar=totalSugar+sugarPrice;
                    }
                    else;
                    {
                        continue;
                    }
                    
            }

            else if(menuSection==4) //Selction for dairy
            {
                system("CLS");
                cout<<"--------------------------------------------------------------------------"<<endl;
                cout<<"\t\t\tSLICE BAKERY ENTERPRISE"<<endl;
                cout<<"--------------------------------------------------------------------------"<<endl;
                cout<<"\t\t\tSECTION 04 : DAIRY "<<endl<<endl;
                cout<<"\t\tPlease select your desired items : "<<endl<<endl;
                cout<<"[1] Butter 250g \t [2] Milk \t [3] Egg 15pcs \t [4] Egg Large 10pcs"<<endl<<endl;
                cout<<"\t\t [5] Vegetable oil 1kg \t\t [0] Back "<<endl<<endl;
                cin>>dairyItems;
                
                    if(dairyItems==0)
                    {
                        if(select1!=1)
                        {
                            itemQty=0;
                            text=" ";
                        }
                        goto main;
                    }

                    else if (dairyItems>5)
                    {  
                        if(select1!=1)
                        {
                        itemQty=0;
                        text=" ";
                        }
                        continue;
                    }

                    else (dairyItems<=5);
                    {
                        cout<<"\n******************"<<endl;
                        cout<<"Quantity : "<<endl;
                        cin>>itemQty;
                        dairyPrice=dairyPrice_func(dairyItems, itemQty);
                        text=dairyText_func(dairyItems);
                    }


                system("CLS");    
                cout<<"**************************************************************************"<<endl;
                cout<<fixed<<setprecision(2);
                cout<<"\t\t The selected items : "<<text<<endl<<endl;
                cout<<"\t\t Total for Dairy section : RM"<<dairyPrice<<endl<<endl;
                cout<<"\t\t[1] Add to Cart [0] Exit"<<endl;
                cin>>select1;
                    if(select1==1)
                    {
                        totalDairy=totalDairy+dairyPrice;
                    }
                    else;
                    {
                        continue;
                    }
                
            }

            else if(menuSection==5) //Selection for extracts, flavouring and spices
            {
                system("CLS");
                cout<<"--------------------------------------------------------------------------"<<endl;
                cout<<"\t\t\tSLICE BAKERY ENTERPRISE"<<endl;
                cout<<"--------------------------------------------------------------------------"<<endl;
                cout<<"\t\tSECTION 05 : EXTRACTS, FLAVOURING AND SPICES "<<endl<<endl;
                cout<<"\t\tPlease select your desired items : "<<endl<<endl;
                cout<<"\t[1]Vanilla extract 25g\t[2] Ground cinnamon 28g\t[0] Back"<<endl<<endl;
                cin>>extractsItems;
                
                    if(extractsItems==0)
                    {
                        if(select1!=1)
                        {
                        itemQty=0;
                        text=" ";
                        }
                        goto main;
                    }

                    else if (extractsItems>2)
                    {
                        if(select1!=1)
                        {
                        itemQty=0;
                        text=" ";
                        }
                        continue;
                    }

                    else (extractsItems<=2);
                    {
                        cout<<"\n******************"<<endl;
                        cout<<"Quantity : "<<endl;
                        cin>>itemQty;
                        extratcsPrice=extractsPrice_func(extractsItems, itemQty);
                        text=extractsText_func(extractsItems);
                    }
                system("CLS");    
                cout<<"**************************************************************************"<<endl;
                cout<<fixed<<setprecision(2);
                cout<<"\t\t The selected items : "<<text<<endl<<endl;
                cout<<"\t\t Total for Extracts, Flavouring and Spices section : RM"<<extratcsPrice<<endl<<endl;
                cout<<"\t\t[1] Add to Cart [0] Exit"<<endl;
                cin>>select1;
                    if(select1==1)
                    {
                        totalExtracts=totalExtracts+extratcsPrice;
                    }
                    else;
                    {
                        continue;
                    }
                

            }

            else if(menuSection==6) //Selection for addons
            {
                system("CLS");
                cout<<"--------------------------------------------------------------------------------------------"<<endl;
                cout<<"\t\t\tSLICE BAKERY ENTERPRISE"<<endl;
                cout<<"--------------------------------------------------------------------------------------------"<<endl;
                cout<<"\t\t\tSECTION 06 : ADD-ONS "<<endl<<endl;
                cout<<"\t\tPlease select your desired items : "<<endl<<endl;
                cout<<"[1] Dark chocolate bar 200g\t[2] Chocolate chips 500g\t[3] Cocoa powder 200g"<<endl<<endl;
                cout<<"\t[4] Food colouring (4 colour pack) 25ml x 4 \t [5] Sprinkles 50g "<<endl<<endl;
                cout<<"\t\t[6]Matcha powder 100g \t[0] Back"<<endl<<endl;
                cin>>addonsItems;
                
                    if(addonsItems==0)
                    {
                        if(select1!=1)
                        {
                            itemQty=0;
                            text=" ";
                        }
                        goto main;
                    }

                    else if (addonsItems>6)
                    {
                        if(select1!=1)
                        {
                            itemQty=0;
                            text=" ";
                        }
                        continue;
                    }

                    else (addonsItems<=6);
                    {
                        cout<<"\n******************"<<endl;
                        cout<<"Quantity : "<<endl;
                        cin>>itemQty;
                        addonsPrice=addonsPrice_func(addonsItems,itemQty);
                        text=addonsText_func(addonsItems);
                    }

                system("CLS");    
                cout<<"**************************************************************************"<<endl;
                cout<<fixed<<setprecision(2);
                cout<<"\t\t The selected items : "<<text<<endl<<endl;
                cout<<"\t\t Total for Extracts, Flavouring and Spices section : RM"<<addonsPrice<<endl<<endl;
                cout<<"\t\t[1] Add to Cart [0] Exit"<<endl;
                cin>>select1;
                    if(select1==1)
                    {
                        totalAddons=totalAddons+addonsPrice;
                    }
                    else;
                    {
                       continue;
                    }  
            }

            else;
            {
            system("CLS");
            goto iniValue1;
            }

            //Main interface 
            main:
            system("CLS");
            cout<<fixed<<setprecision(2);
            totalInCart=totalAddons+totalDairy+totalExtracts+totalFlour+totalInCart+totalLeave+totalLeave+totalSugar;
            cout<<"****************************************************************************************"<<endl;
            cout<<"Total in cart: "<<totalInCart<<endl<<endl;
            cout<<"Recent selected items : "<<text<<"\t\t x"<<itemQty<<endl;
            cout<<"****************************************************************************************"<<endl<<endl<<endl;
            cout<<"--------------------------------------------------------------------------"<<endl;
            cout<<"\t\tSLICE BAKERY ENTERPRISE"<<endl;
            cout<<"--------------------------------------------------------------------------"<<endl;
            cout<<"\t\t\tMAIN MENU"<<endl<<endl;
            cout<<"\t\tPlease select your desired sections : "<<endl<<endl;
            cout<<"\t [1] Flour\t [2] Leaveners\t [3] Sugar and salt"<<endl<<endl;
            cout<<"[4] Dairy\t [5] Extracts, flavouring and spices\t [6] Add-ons \t[0] Done "<<endl<<endl<<endl;
            cin>>menuSection;
        }
        

        //Aftermath order operation
        cout<<"****************************************************************************************"<<endl;
        cout<<"Membership (Discount 10%) [1] Yes [0] No"<<endl; //Membership
        cin>>memberStatus;
            if(memberStatus==1)
            {
                
                memberText="YES";
                discount=0.10;
                totalDiscount=totalInCart*discount;
                totalAfterDisc=totalInCart-totalDiscount;
            }
            else;
            {
                memberText="NO";
                discountText="0.00";
                totalAfterDisc=totalInCart;
            }
        
        tax=totalAfterDisc*0.06;
        netTotal=totalAfterDisc+tax;

        
        
        system("CLS");
        cout<<fixed<<setprecision(2);
        cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"\t\t\tSLICE BAKERY ENTERPRISE"<<endl;
        cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"\t\t\tOfficial Invoice #"<<orderCount<<endl<<endl<<endl;
        cout<<"**********************************************************************************************************"<<endl;
        cout<<"\t\t\tCONTACT INFORMATION"<<endl<<endl;
        cout<<"\t\t Name \t\t\t: "<<name<<endl;
        cout<<"\t\t Email \t\t\t: "<<email<<endl;
        cout<<"\t\t Contact Number \t: "<<contact<<endl;
        cout<<"\t\t Membership \t\t: "<<memberText<<endl<<endl;
        cout<<"**********************************************************************************************************"<<endl;
        cout<<"\t\t\tTOTAL IN SPECIFIED SECTION"<<endl<<endl;
        cout<<"\t\t Total in Flour section \t\t\t\t= RM"<<totalFlour<<endl;
        cout<<"\t\t Total in Leaveners section \t\t\t\t= RM"<<totalLeave<<endl;
        cout<<"\t\t Total in Sugar and Salt section \t\t\t= RM"<<totalSugar<<endl;
        cout<<"\t\t Total in Dairy section \t\t\t\t= RM"<<totalDairy<<endl;
        cout<<"\t\t Total in Extracts, Flavouring and Spices section \t= RM"<<totalExtracts<<endl;
        cout<<"\t\t Total in Addons section \t\t\t\t= RM"<<totalAddons<<endl<<endl;
        cout<<"**********************************************************************************************************"<<endl;
        cout<<"\t\t\tTOTAL VALUE FOR ORDER"<<endl<<endl;
        cout<<"\t\t Total in cart \t\t= RM"<<totalInCart<<endl;
        cout<<"\t\t Total Discount \t= RM"<<totalDiscount<<endl;
        cout<<"\t\t Total After Discount \t= RM"<<totalAfterDisc<<endl;
        cout<<"\t\t Total Tax (6%) \t= RM"<<tax<<endl;
        cout<<"**********************************************************************************************************"<<endl;
        cout<<"\t\t NET TOTAL \t\t= RM"<<netTotal<<endl;
        cout<<"**********************************************************************************************************"<<endl<<endl<<endl;
        cout<<"Do you want make another order ? [1] Yes [0] No"<<endl;
        cin>>select; //Update value
            if(select==1)
            {
                totalInCart=0.00;
                totalFlour=0.00;
                totalLeave=0.00;
                totalSugar=0.00;
                totalDairy=0.00;
                totalExtracts=0.00;
                totalAddons=0.00;
                discount=0.00;
                totalDiscount=0.00;
                totalAfterDisc=0.00;
                tax=0.00;
                netTotal=0.00;
                text=system("CLS");
                itemQty=0;
            }
        
    }
    //Last order operation
    cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tSLICE BAKERY ENTERPRISE"<<endl;
    cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t THANK YOU FOR SHOPPING WITH US <3"<<endl;

    return 0;
    
    
}


//Price for flour
double flourPrice_func (int items, int qty)
{
    double total1;
    double price[4]={3.00,15.00,6.00,2.00};
        switch(items)
        {
            case 1:
            total1=price[0];
            break;

            case 2:
            total1=price[1];
            break;

            case 3:
            total1=price[2];
            break;

            case 4:
            total1=price[3];
            break;

            default:
            total1=0.00;
            break;

        }
    total1=total(total1, qty);
    return total1;    
}

//Price for leaveners
double leavenersPrice_func (int items, int qty)
{
    double total1;
    double price[4]={2.00,2.00,1.00,30.00};
        switch(items)
        {
            case 1:
            total1=price[0];
            break;

            case 2:
            total1=price[1];
            break;

            case 3:
            total1=price[2];
            break;

            case 4:
            total1=price[3];
            break;

            default:
            total1=0.00;
            break;

        }
    total1=total(total1, qty);
    return total1;
}

//Price for sugar and salt
double sugarPrice_func (int items, int qty)
{
    double total1;
    double price[5]={5.00,4.00,3.00,12.00,12.00};
        switch(items)
        {
            case 1:
            total1=price[0];
            break;

            case 2:
            total1=price[1];
            break;

            case 3:
            total1=price[2];
            break;

            case 4:
            total1=price[3];
            break;

            default:
            total1=0.00;
            break;

        }
    total1=total(total1,qty);
    return total1;
}

//Price for dairy    
double dairyPrice_func (int items, int qty)
{
    double total1;
    double price[5]={9.00,8.00,11.00,10.00,7.00};
        switch(items)
        {
            case 1 :
            total1=price[0];
            break;

            case 2 :
            total1=price[1];
            break;

            case 3 :
            total1=price[2];
            break;

            case 4 :
            total1=price[3];
            break;

            case 5 :
            total1=price[4];
            break;

            default:
            total1=0.00;
            break;

        }
    total1=total(total1,qty);
    return total1;
}

//Price for extracts, flavouring and spices
double extractsPrice_func (int items, int qty)
{
    double total1;
    double price[2]={5.00,9.00};
        switch(items)
        {
            case 1:
            total1=price[0];
            break;

            case 2:
            total1=price[1];
            break;

            default:
            total1=0.00;
            break;

        }
    total1=total(total1,qty);
    return total1;
}

//Price for addons
double addonsPrice_func (int items, int qty)
{
    double total1;
    double price[6]={6.00,12.00,7.00,12.00,3.00,17.00};
        switch(items)
        {
            case 1:
            total1=price[0];
            break;

            case 2:
            total1=price[1];
            break;

            case 3:
            total1=price[2];
            break;

            case 4:
            total1=price[3];
            break;

            case 5:
            total1=price[4];
            break;

            case 6:
            total1=price[5];
            break;

            default:
            total1=0.00;
            break;

        }
    total1=total(total1, qty);
    return total1;
}

//Text for flour
string flourText_func (int items)
{
    string text;
    string name[4]={"All-purpose flour 850g","All-purpose flour 5kg","Cake flour 800g","Cornstarch 400g"};
        switch(items)
        {
            case 1:
            text=name[0];
            break;

            case 2:
            text=name[1];
            break;

            case 3:
            text=name[2];
            break;

            case 4:
            text=name[3];
            break;

            default:
            text=" ";
            break;

        }
    return text;    
}

//Text for leaveners
string leavenersText_func (int items)
{
    string text;
    string name[4]={"Baking soda 100g","Baking powder 100g","Yeast 11g","Sourdough starter 150g"};
        switch(items)
        {
            case 1:
            text=name[0];
            break;

            case 2:
            text=name[1];
            break;

            case 3:
            text=name[2];
            break;

            case 4:
            text=name[3];
            break;

            default:
            text=" ";
            break;

        }
    return text;    
}

// Text for sugar and salt
string sugarText_func (int items)
{
    string text;
    string name[5]={"Sugar 1kg","Brown sugar 500g","Icing sugar 500g","Table salt 700g","Sea salt 500g"};
        switch(items)
        {
            case 1:
            text=name[0];
            break;

            case 2:
            text=name[1];
            break;

            case 3:
            text=name[2];
            break;

            case 4:
            text=name[3];
            break;

            case 5:
            text=name[4];
            break;

            default:
            text=" ";
            break;

        }
    return text;    
}


// Text for dairy
string dairyText_func (int items)
{
    string text;
    string name[5]={"Butter 250g","Milk","Egg 15pcs","Egg Large 10pcs","Vegetable oil 1kg"};
        switch(items)
        {
            case 1:
            text=name[0];
            break;

            case 2:
            text=name[1];
            break;

            case 3:
            text=name[2];
            break;

            case 4:
            text=name[3];
            break;

            case 5:
            text=name[4];
            break;

            default:
            text=" ";
            break;

        }
    return text;    
}

//Text for extracts, flavouring and spices
string extractsText_func (int items)
{
    string text;
    string name[2]={"Vanilla extract 25g","Ground cinnamon 28g"};
        switch(items)
        {
            case 1:
            text=name[0];
            break;

            case 2:
            text=name[1];
            break;

            default:
            text=" ";
            break;

        }
    return text;    
}

//Text for addons
string addonsText_func (int items)
{
    string text;
    string name[6]={"Dark chocolate bar 200g","Chocolate chips 500g","Cocoa powder 200g","Food colouring (4 colour pack) 25ml x 4","Sprinkles 50g","Matcha powder 100g"};
        switch(items)
        {
            case 1:
            text=name[0];
            break;

            case 2:
            text=name[1];
            break;

            case 3:
            text=name[2];
            break;

            case 4:
            text=name[3];
            break;

            case 5:
            text=name[4];
            break;

            case 6:
            text=name[5];
            break;

            default:
            text=" ";
            break;

        }
    return text;    
}

