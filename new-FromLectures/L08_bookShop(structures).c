#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
struct bookShop
{
    char author[20];
    char title[20];
    int price;
    char publisher[25];
    int stockPosition;
};

int main(){
    struct bookShop books[5] = 
    {
        {"Humayun", "Himu", 300, "Sheba", 10},
        {"Jafar", "AI", 450, "Oitijjo", 5},
        {"Imran", "CProgramming", 500, "Subarna", 2},
        {"Anisul", "Python", 600, "TechBD", 8},
        {"Arafat", "Math", 250, "NCTB", 15}
    };
    char titleF[20], authorF[20];
    scanf("%s %s", titleF, authorF);
    for (int i = 0; i < 5; i++)
    {
        if(strcmp(authorF, books[i].author) == 0 && strcmp(titleF, books[i].title) == 0)
        {
            printf("Book is found\n");
            printf("author :%s\n", books[i].author);
            printf("title :%s\n", books[i].title);
            printf("price :%d\n", books[i].price);
            printf("publisher :%s\n", books[i].publisher);
            printf("stock :%d\n", books[i].stockPosition);
            int copies; scanf("%d",&copies);
            if(copies <= books[i].stockPosition) printf("Cost :%d\n",copies*books[i].price);
            else printf("Required copies are not in the stock\n");
            break;
        }
    }
    
    return 0;
}
// A book shop uses a personal computer to maintain the inventory of books that are being sold at the shop. The list includes details such as author, title, price, publisher, stock position, etc. Whenever a customer wants a book, the shopkeeper inputs the title and author of the book and the system replies whether it is in the list or not. If it is not, an appropriate message is displayed. If book is in the list, then the system displays the book details and asks for number of copies. If the requested copies are available, the total cost of the books is displayed; otherwise the message “Required copies is not in the stock” is displayed. Write a program to accomplish the above task.