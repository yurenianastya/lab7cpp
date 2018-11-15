#include <iostream>
#include <string.h>
using namespace std;

class Publications {
private:
    string name;
    string publisher;
public:
    void setName(string tempName) {
        this->name = tempName;
    }
    string getName() {
        return name;
    }
    void setPublisher(string tempPublisher) {
        this->publisher = tempPublisher;
    }
    string getPublisher() {
        return publisher;
    }
};

class Books:public Publications {
private:
    string author;
public:
    void setAuthor(string tempAuthor) {
        this->author = tempAuthor;
    }
    string getAuthor() {
        return author;
    }
};

class Magazines:public Publications {
private:
    int ArticlesCount;
public:
    void setArticlesCount(int tempArticlesCount) {
        this->ArticlesCount = tempArticlesCount;
    }
    int getArticlesCount() {
        return ArticlesCount;
    }
};

class Monograph:public Publications {
private:
    string scientificTheme;
public:
    void setScientificTheme(string tempScientificTheme) {
        this->scientificTheme = tempScientificTheme;
    }
    string getScientificTheme() {
        return scientificTheme;
    }
};

class PaperBooks: public Books {
private:
    int pages;
    string coverColour;
public:
    void setPages(int tempPages) {
        this->pages = tempPages;
    }
    int getPages() {
        return pages;
    }
    void setCoverColour(string tempCoverColour) {
        this->coverColour = tempCoverColour;
    }
    string getCoverColour() {
        return coverColour;
    }
};


class AudioBooks: public Books {
private:
    double duration;
    int filesize;
public:
    void setDuration(double tempDuration) {
        this->duration = tempDuration;
    }

    double getDuration() {
        return duration;
    }
void setFilesize(int tempFilesize) {
    this->filesize = tempFilesize;
}
int getFilesize() {
    return filesize;
};
};

class ElectronicBook: public Books {
    int pages;
    string filetype;
    int filesize;
public:
    void setPages(int tempPages) {
        this->pages = tempPages;
    }
    int getPages() {
        return pages;
    }
    void setFilesize(int tempFilesize) {
        this->filesize = tempFilesize;
    }
    int getFilesize() {
        return filesize;
    };
    void setFiletype(string tempFiletype) {
        this->filetype = tempFiletype;
    }
    string getFiletype() {
        return filetype;
    };
};

int main() {
    PaperBooks songOfIceAndFire;
    songOfIceAndFire.setName("Game of Thrones");
    songOfIceAndFire.setAuthor("G.R.R.Martin");
    songOfIceAndFire.setPages(694);
    songOfIceAndFire.setPublisher("KrayinaMriy");
    songOfIceAndFire.setCoverColour("Black");
    cout << "This is a book " << songOfIceAndFire.getName() << endl;
    cout << "It was written by " << songOfIceAndFire.getAuthor() << endl;
    cout << "It has " << songOfIceAndFire.getPages() << " pages" << endl;
    cout << "It was published by " << songOfIceAndFire.getPublisher() << endl;
    cout << "It has cover coloured in " << songOfIceAndFire.getCoverColour() << endl << "\n";
    Magazines gameMagazine;
    gameMagazine.setName("Shpil!");
    gameMagazine.setArticlesCount(15);
    gameMagazine.setPublisher("gamers and for gamers");
    cout << "This is a magazine " << gameMagazine.getName() << endl;
    cout << "It has " << gameMagazine.getArticlesCount() << " articles" << endl;
    cout << "It is published by " << gameMagazine.getPublisher() << endl << "\n";
    Monograph diplomaWork;
    diplomaWork.setName("the diploma Work");
    diplomaWork.setPublisher("student Jon Snow from Physic Faculty");
    diplomaWork.setScientificTheme("The theory of knowing nothing");
    cout << "This is a " << diplomaWork.getName() << endl;
    cout << "It is done by " << diplomaWork.getPublisher() << endl;
    cout << "The scientific theme of this work is: " << diplomaWork.getScientificTheme() << endl << "\n";
    AudioBooks fantasyBook;
    fantasyBook.setName("Lord of the rings");
    fantasyBook.setPublisher("Astrolyabia");
    fantasyBook.setAuthor("J.R.R.Tolkien");
    fantasyBook.setDuration(6.35);
    fantasyBook.setFilesize(575);
    cout << "This is a " << fantasyBook.getName() << " book" << endl;
    cout << "Is was written by " << fantasyBook.getAuthor() << endl;
    cout << "It was published by " << fantasyBook.getPublisher() << endl;
    cout << "Its length is " << fantasyBook.getDuration() << " Hours and minutes" << endl;
    cout << "Its size is " << fantasyBook.getFilesize() << " Mb" << endl << "\n";
    ElectronicBook adventureBook;
    adventureBook.setName("Witcher");
    adventureBook.setAuthor("Andzrej Sapkowskij");
    adventureBook.setPublisher("Family Club");
    adventureBook.setPages(256);
    adventureBook.setFilesize(134);
    adventureBook.setFiletype(".pdf");
    cout << "This is a book: " << adventureBook.getName() << endl;
    cout << "It was written by " << adventureBook.getAuthor() << endl;
    cout << "It was published by " << adventureBook.getPublisher() << endl;
    cout << "It has " << adventureBook.getPages() << " pages" << endl;
    cout << "Its size is " << adventureBook.getFilesize() << " Mb" << endl;
    cout << "The type of this file is " << adventureBook.getFiletype() << endl << "\n";
    return 0;
}

