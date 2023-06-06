#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<fstream>
#include<windows.h>
#include<conio.h>
#include <sstream>
#include <cstdlib>
#include<cctype>
#include <chrono>
#include <ctime>
#include<algorithm>
#include<ctime>
#include<random>
using namespace std;
using namespace std::chrono;
// Initiaters
    // verifiers
        void databaseVerifier(int from, int to);
        void databaseSaperator(int from, int to);
    // Greetings
        void greet();
    // Option Pannels
        void starter();
        void accountStarter();
// Book A Ticket
    // Linear Flow
        void showMovieList();
        void getDate();
        void _month(vector<int> dateList, int day, int month, int year, char leapIdentifier, int endDate);
        void _monthChange(vector<int> dateList, char leapIdentifier, int endDate, string enteredDateToPass);
        void getMovie();
        void getTime(string a);
        void checkSlotTime(string a, string b);
        void displayMovieDetails();
        void seatArea();
        void normalSeatClass();
        void executiveSeatClass();
        void premiumSeatClass();
        void seatAreaCaller();
        void seatBookingNormal();
        void seatBookingExecutive();
        void seatBookingPremium();
    // Rotational Flow
        void rowA();
        void seatSelectionA();
        void seatInputA(int seatCount);
        int problemsolverA(int i, int seatCount);
        void rowB();
        void seatSelectionB();
        void seatInputB(int seatCount);
        int problemsolverB(int i, int seatCount);
        void rowC();
        void seatSelectionC();
        void seatInputC(int seatCount);
        int problemsolverC(int i, int seatCount);
        void rowD();
        void seatSelectionD();
        void seatInputD(int seatCount);
        int problemsolverD(int i, int seatCount);
        void rowE();
        void seatSelectionE();
        void seatInputE(int seatCount);
        int problemsolverE(int i, int seatCount);
        void rowF();
        void seatSelectionF();
        void seatInputF(int seatCount);
        int problemsolverF(int i, int seatCount);
        void rowG();
        void seatSelectionG();
        void seatInputG(int seatCount);
        int problemsolverG(int i, int seatCount);
        void rowH();
        void seatSelectionH();
        void seatInputH(int seatCount);
        int problemsolverH(int i, int seatCount);
        void rowI();
        void seatSelectionI();
        void seatInputI(int seatCount);
        int problemsolverI(int i, int seatCount);
        void rowJ();
        void seatSelectionJ();
        void seatInputJ(int seatCount);
        int problemsolverJ(int i, int seatCount);
        void rowK();
        void seatSelectionK();
        void seatInputK(int seatCount);
        int problemsolverK(int i, int seatCount);
        void rowL();
        void seatSelectionL();
        void seatInputL(int seatCount);
        int problemsolverL(int i, int seatCount);
    // Information Collector
        void infoGather(int a[], int seatCount);
        long long inputPhno();
    // Payment Gateway
        int paymentLogin(int a[], int seatCount, long long phNo);
    // Printer
        void printTicket(string tic_Name, string tic_Date, string tic_time, string tic_bClass, char tic_row, int tic_nOs, int tic_seatNum[], long long tic_phNo, int audi);
        void printTicketCaller(int a[], int seatCount, long long phNo);
    // File Handling
        void myDataWrite(string tic_bClass, string tic_Date, long long tic_Id[], string tic_Name, int tic_nOs, long long tic_phNo, char tic_row, int tic_seatNum[], string tic_time, int audi);
// Cancel Module
    void fetchBooking();
    void deduction();
    void addMoneyDeducted(double addBalance, int _lineFound, double actPrice);
    void cancelBooking(int lineFound, string falseSearch);
// Encrypters And Decrypters
    string encryptPassword(string password);
    string decryptPassword(string encrypted); // CURRENTLY NOT IN USE
// New User Functions
    // User Entries
        void enterUserName();
        void enterUserPassword();
        void enterUserAadhar();
    // Unique Id Generator
        void declaredUserUniqueId(long long userAadhar);
    // File Handling
        void sendData();
// Update Password
    void changePassword();
    void userConfirmed(int idLine);
// Find User Functions
    int userExistence(string flow);
// Password Matcher
    int passwordMatch();
// Bank Balance
    string returnBankBalance();
// Conversion
    long long convertToInt(string myString);
// Account Deletion
    void permissionDelete();
    void deleteUserExistence(int lineFound, string falseSearch);
// Transfer Amount
    void moneyTransfer();
// Quiz Game Fucntions
    // Controllers
        void updateUserBalance();
        void QuizGameModule();
        void QuizGameQuestions(int nOquestions);
    // Questions
        void question1(int j, int nOq);
        void question2(int j, int nOq);
        void question3(int j, int nOq);
        void question4(int j, int nOq);
        void question5(int j, int nOq);
        void question6(int j, int nOq);
        void question7(int j, int nOq);
        void question8(int j, int nOq);
        void question9(int j, int nOq);
        void question10(int j, int nOq);
        void question11(int j, int nOq);
        void question12(int j, int nOq);
        void question13(int j, int nOq);
        void question14(int j, int nOq);
        void question15(int j, int nOq);
        void question16(int j, int nOq);
        void question17(int j, int nOq);
        void question18(int j, int nOq);
        void question19(int j, int nOq);
        void question20(int j, int nOq);
    // Quiz Account Handler
        void creditTwoHundred();
        void debitFifty();
        void addMoney(double addBalance);
// Account Summary
    void passbook();
// Handlers
    // Tictet Id Line Fetcher
        void fetchTktLine();
    // User Unique If Line Fetcher
        void fetchUniqueLine();
// Changing Class
    // Linear Flow
        void fareByClass();
        void ifNormal();
        void ifExecutive();
        void ifPremium();
        void changeFarePaymentLogin(double price, int line_number_tkt, int line_number_id, char _class);
    // Rotational Flow
        void fareChangeSeatSelectionA(int seat_Count);
        void fare_seatInputA(int seatCount);
        int fare_problemsolverA(int i, int seatCount);
        void fareChangeSeatSelectionB(int seat_Count);
        void fare_seatInputB(int seatCount);
        int fare_problemsolverB(int i, int seatCount);
        void fareChangeSeatSelectionC(int seat_Count);
        void fare_seatInputC(int seatCount);
        int fare_problemsolverC(int i, int seatCount);
        void fareChangeSeatSelectionD(int seat_Count);
        void fare_seatInputD(int seatCount);
        int fare_problemsolverD(int i, int seatCount);
        void fareChangeSeatSelectionE(int seat_Count);
        void fare_seatInputE(int seatCount);
        int fare_problemsolverE(int i, int seatCount);
        void fareChangeSeatSelectionF(int seat_Count);
        void fare_seatInputF(int seatCount);
        int fare_problemsolverF(int i, int seatCount);
        void fareChangeSeatSelectionG(int seat_Count);
        void fare_seatInputG(int seatCount);
        int fare_problemsolverG(int i, int seatCount);
        void fareChangeSeatSelectionH(int seat_Count);
        void fare_seatInputH(int seatCount);
        int fare_problemsolverH(int i, int seatCount);
        void fareChangeSeatSelectionI(int seat_Count);
        void fare_seatInputI(int seatCount);
        int fare_problemsolverI(int i, int seatCount);
        void fareChangeSeatSelectionJ(int seat_Count);
        void fare_seatInputJ(int seatCount);
        int fare_problemsolverJ(int i, int seatCount);
        void fareChangeSeatSelectionK(int seat_Count);
        void fare_seatInputK(int seatCount);
        int fare_problemsolverK(int i, int seatCount);
        void fareChangeSeatSelectionL(int seat_Count);
        void fare_seatInputL(int seatCount);
        int fare_problemsolverL(int i, int seatCount);
    // Information Collector
        void fare_infoGather(int a[], int seatCount);
    // Payment Gateway
        int fare_paymentLogin(int  a[], int seatCount, long long phNo, double price, int tktLine, string seat, string lin, string bClass, char row);
    // Printer
        void fare_printTicket(int tic_seatNum[], int tic_nOs,  long long tic_phNo);
class infoGather {
    private:
        string movieName;
        string date;
        string time;
        int countOfSeats;
        string bClass;
        char row;
        int audi;
        double price, newBankBalance;
    public:
        void _getMovieName(string a) {
            movieName = a;
        }
        void _getDate(string a) {
            date = a;
        }
        void _getTime(string a) {
            time = a;
        }
        void _getCountOfSeats(int a) {
            countOfSeats = a;
        }
        void _getClass(string a) {
            bClass = a;
        }
        void _getRow(char a) {
            row = a;
        }
        void _getAudi(int a) {
            audi = a;
        }
        void _getPriceOfTicket(double a) {
            price = a;
        }
        void _getNewBankBalance(double a) {
            newBankBalance = a;
        }
        string _fetchMovieName() {
            return movieName;
        }
        string _fetchDate() {
            return date;
        }
        string _fetchTime() {
            return time;
        }
        int _fetchCountOfSeats() {
            return countOfSeats;
        }
        string _fetchClass() {
            return bClass;
        }
        char _fetchRow() {
        return row;
        }
        int _fetchAudi() {
            return audi;
        }
        double _fetchPriceOfTicket() {
            return price;
        }
        double _fetchNewBankBalance() {
            return newBankBalance;
        }
};
class userData {
    private:
        string userName, userPassword, search, falseSearch;
        long long TempUserAadhar, userAadhar, userUniqueId, bankBalance;
        int lineFound;
        double price, newBankBalance;
    public:
        void _getUserName(string a) {
            userName = a;
        }
        void _getUserPassword(string a) {
            userPassword = a;
        }
        void _getUserAadhar(long long a) {
            userAadhar = a;
        }
        void _getUserUniqueId(long long a) {
            userUniqueId = a;
        }
        void _getSearch(string a) {
            search = a;
        }
        void _getFalseSearch(string a) {
            falseSearch = a;
        }
        void _getLineFound(int a) {
            lineFound = a;
        }
        void _getBankBalance(long long a) {
            bankBalance = a;
        }
        void _getPriceOfTicket(double a) {
            price = a;
        }
        void _getNewBankBalance(double a) {
            newBankBalance = a;
        }
        string _fetchUserName() {
            return userName;
        }
        string _fetchUserPassword() {
            return userPassword;
        }
        long long _fetchAadhar() {
            return userAadhar;
        }
        long long _fetchUserUniqueId() {
            return userUniqueId;
        }
        string _fetchSearch() {
            return search;
        }
        string _fetchFalseSearch() {
            return falseSearch;
        }
        int _fetchLineFound() {
            return lineFound;
        }
        long long _fetchBankBalance() {
            return bankBalance;
        }
        double _fetchPriceOfTicket() {
            return price;
        }
        double _fetchNewBankBalance() {
            return newBankBalance;
        }
};
class userAcc {
    private:
        long long balance;
    public:
        void _creditBalance(long long amount) {
            balance = amount;
        }
        long long _fetchBalance() {
            return balance;
        }
};
class line {
    private:
        int _lineFoundTkt;
        int _lineFoundId;
    public:
        void _getTktLine(int a) {
            _lineFoundTkt = a;
        }
        void _getIdLine(int a) {
            _lineFoundId = a;
        }
        int _fetchTktLine() {
            return _lineFoundTkt;
        }
        int _fetchIdLine() {
            return _lineFoundId;
        }
};
class fareChange {
    private:
        char row, identifier = 'f';
        double add_deduct;
        string bClass;
        int iterator;
    public:
        void _getFareChangeRow(char r) {
            row = r;
        }
        void _getFareChangePrice(double a) {
            add_deduct = a;
        }
        void _getFareChangeClass(string a) {
            bClass = a;
        }
        void _getFareChangeIdentifier(char a) {
            identifier = a;
        }
        char _fetchFareChangeRow() {
            return row;
        }
        double _fetchFareChangePrice() {
            return add_deduct;
        }
        string _fetchFareChangeClass() {
            return bClass;
        }
        int _fetchFareChangeIterator() {
            return iterator;
        }
        char _fetchFareChangeIdentifier() {
            return identifier;
        }
};
class dateManager {
    private:
        string enteredDate;
        int current_real_date;
        int current_real_month;
        int current_real_year;
        int dataBaseVerifier = 0;
    public:
        void _getEnteredDate(string a) {
            enteredDate = a;
        }
        void _getCurrentRealDate(int a) {
            current_real_date = a;
        }
        void _getCurrentRealMonth(int a) {
            current_real_month = a;
        }
        void _getCurrentRealYear(int a) {
            current_real_year = a;
        }
        void getDBV(int i) {
            dataBaseVerifier = i;
        }
        string _fetchEnteredDate() {
            return enteredDate;
        }
        int _fetchCurrentRealDate() {
            return current_real_date;
        }
        int _fetchCurrentRealMonth() {
            return current_real_month;
        }
        int _fetchCurrentRealYear() {
            return current_real_year;
        }
        int _fetchDBV() {
            return dataBaseVerifier;
        }
};
class infoGather x; // Global Object
class userData y; // Global Object
class userAcc z; // Global Object
class line w; // Global Object
class fareChange v; // Global Object
class dateManager u; // Global Object
int main() {
    system("color 0F");
    system("cls");
    
    if(u._fetchDBV()==0) {
        databaseVerifier(1,5);
        string prompt = "\n\t\033[32m DATABASE_RELATIONS \033[0m : Established Successfully !";
        for(int i=0; i<=prompt.size(); i++) {
            Sleep(30);
            cout<<prompt[i];
        }
        u.getDBV(1);
        Sleep(1500);
    }
    system("cls");
    string yn, absurd;
    if(u._fetchDBV()==1) {
        cout<<"\nAre You An Existing User (Yes/No) : ";
        getline(cin, yn);
        u.getDBV(2);
    }
    else {
        yn = "YES";
    }
    if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
        Sleep(500);
        int checkExistence = userExistence("NULL");
        if(checkExistence==0) {
            Sleep(1500);
            greet();
            getline(cin, absurd);
            starter();
        }
        else {
            string yn, absurd;
            getline(cin, absurd);
            main();
        }
    }
    else if((yn[0]=='N'||yn[0]=='n')&&(yn[1]=='O'||yn[1]=='o')) {
        Sleep(500);
        cout<<"\nPlease Register Yourself First\n";
        Sleep(900);
        enterUserName();
    }
    else {
        Sleep(500);
        cout<<"Enter a Valid Input !";
        Sleep(500);
        main();
    }
    return 0;
}
void databaseVerifier(int from, int to) {
    databaseSaperator(from, to);
    ifstream check("userDetVerification.txt", ios::in);
    ifstream check1("userDetVerification.txt", ios::in);
    ifstream check2("userDetVerification.txt", ios::in);
    ifstream check3("userDetVerification.txt", ios::in);
    string template1 = "Unique Id of The User : ";
    string template2 = "Aadhar Number of The User : ";
    string line, _line, line2, _line2, f_line, f_line2, ff_1, ff_2, cut, cut2;
    while(getline(check, line)) {
        if(line.erase(24, string::npos)==template1) {
            while(getline(check1, line2)) {
                if(line2.erase(28, string::npos)==template2) {
                    long long endLine1;
                    long long endLine2;
                    while(getline(check2, _line)) {
                        f_line = _line;
                        string _f = _line;
                        if(_f.erase(24, string::npos)==template1) {  
                            ff_1 = _line;
                            cut = ff_1.erase(24, string::npos);
                            break;
                        }
                    }
                    while(getline(check3, _line2)) {
                        f_line2 = _line2;
                        string _f2 = _line2;
                        if(_f2.erase(28, string::npos)==template2) {    
                            ff_2 = _line2;
                            cut2 = ff_2.erase(28, string::npos);
                            break;
                        }
                    }
                    endLine1 = std::stoll(f_line.erase(0, 24));
                    endLine2 = std::stoll(f_line2.erase(0, 28));
                    long long _endLine2 = endLine2;
                    long long userUniqueId = 0;
                    int unique[12];
                    for(int i=0; i<12; i++) {
                        unique[i]=endLine2%10;
                        endLine2/=10;
                        userUniqueId = userUniqueId + unique[i];
                    }
                    userUniqueId *= 18756;
                    if(to_string(userUniqueId)!=to_string(endLine1)) {
                        string prompt = "\n    \033[31;2m ER_DISRUPTED_DATABASE\033[0m : Unique Id and Aadhar Number, Mismatched\n\n";
                        for(int i=0; i<=prompt.size(); i++) {
                            Sleep(30);
                            cout<<prompt[i];
                        }
                        prompt = "    \033[31;2m ER_FOUND_AT\033[0m : Unique Id => "+to_string(endLine1)+"\n";
                        for(int i=0; i<=prompt.size(); i++) {
                            Sleep(30);
                            cout<<prompt[i];
                        }
                        cout<<endl;
                        prompt = "    \033[32m!ER_CONVERT_TO\033[0m : Unique Id => "+to_string(userUniqueId)+"\n";
                        for(int i=0; i<=prompt.size(); i++) {
                            Sleep(30);
                            cout<<prompt[i];
                        }
                        cout<<endl;
                        Sleep(1000);
                        exit(0);
                    }
                    else {
                        Sleep(600);
                    }
                }
            }
            from += 5;
            to += 5;
            databaseSaperator(from, to);
            databaseVerifier(from, to);
        }
    }
    check.close();
    check1.close();
    check2.close();
    check3.close();
}
void databaseSaperator(int from, int to) {
    int currentLineNumber = 1, countSet = 1;
    string importLine;
    ifstream importFrom("userDet.txt", ios::in);
    ofstream exportTo("userDetVerification.txt", ios::out);
    for(int i=0; getline(importFrom, importLine); i++) {
        if(importFrom.fail()) {
            cerr<<"\n\nError 2 ! In Opening The File !"<<i;
            exit(0);
        }
        if(currentLineNumber>=from && currentLineNumber<=to-1) {
            exportTo<<importLine<<endl;
            countSet++;
        }
        if(currentLineNumber==to) {
            exportTo<<importLine;
            countSet++;
        }
        currentLineNumber++;
    }
    importFrom.close();
    exportTo.close();
}
void greet() {
    system("cls");
    string line;
    int currentLine = 1;
    int nameLine = w._fetchIdLine();
    ifstream fetchName("userDet.txt");
    while(getline(fetchName, line)) {
        if(currentLine==nameLine+1) {
            break;
        }
        currentLine++;
    }
    char smiley = char(1);
    line = "\n\tWelcome "+line.erase(0, 19)+" "+smiley+" ";
    for(int i=0; i<=line.size(); i++) {
        Sleep(30);
        cout<<line[i];
    }
    Sleep(1200);
    char _continue;
    line = "\n\n\tPlease Press Any Key To Continue Availing Our Facilities ";
    for(int i=0; i<=line.size(); i++) {
        Sleep(30);
        cout<<line[i];
    }
    _continue = getch();
    Sleep(1000);
}
void starter() {
    system("color 0F");
    system("cls");
    string select;
    cout<<"____________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\tWHAT YOU WISH TO GO FOR\n\n\n\n\n";
    cout<<"\t1.Book A Ticket\t\t\t              2.Cancel A Ticket\t\t\t                   3.Update Ticket\t\t\t                4.Earn Money\t\t\t            5.Manage Account\n\n";
    cout<<"\n\n\n____________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n";
    cout<<"Enter Your Choice : ";
    getline(cin, select);
    if((select=="1")||(select[0]=='B'||select[0]=='b')&&(select[1]=='O'||select[1]=='o')&&(select[2]=='O'||select[2]=='o')&&(select[3]=='K'||select[3]=='k')&&(select[5]=='A'||select[5]=='a')&&(select[7]=='T'||select[7]=='t')&&(select[8]=='I'||select[8]=='i')&&(select[9]=='C'||select[9]=='c')&&(select[10]=='K'||select[10]=='k')&&(select[11]=='E'||select[11]=='e')&&(select[12]=='T'||select[12]=='t')) {
        Sleep(1000);
        system("cls");
        getDate();
        Sleep(1000);
        system("cls");
        showMovieList();
        getMovie();
    }
    else if((select=="2")||(select[0]=='C'||select[0]=='c')&&(select[1]=='A'||select[1]=='a')&&(select[2]=='N'||select[2]=='n')&&(select[3]=='C'||select[3]=='c')&&(select[4]=='E'||select[4]=='e')&&(select[5]=='L'||select[5]=='l')&&(select[7]=='A'||select[7]=='a')&&(select[9]=='T'||select[9]=='t')&&(select[10]=='I'||select[10]=='i')&&(select[11]=='C'||select[11]=='c')&&(select[12]=='K'||select[12]=='k')&&(select[13]=='E'||select[13]=='e')&&(select[14]=='T'||select[14]=='t')) {
        system("cls");
        int confirmPassword = passwordMatch();
        if(confirmPassword==0) {
            string prompt = "\n\n\t\033[32m ACCESS_REQUEST \033[0m : Granted !\n\n";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(500);
            fetchBooking();
        }
        else {
            string prompt = "\n\n\t\033[31;2m ERROR_401 ACCESS_REQUEST \033[0m : Denied !\n\n";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(1000);
            starter();
        }
    }
    else if((select=="3")||(select[0]=='U'||select[0]=='u')&&(select[1]=='P'||select[1]=='p')&&(select[2]=='D'||select[2]=='d')&&(select[3]=='A'||select[3]=='a')&&(select[4]=='T'||select[4]=='t')&&(select[5]=='E'||select[5]=='e')&&(select[7]=='T'||select[7]=='t')&&(select[8]=='I'||select[8]=='i')&&(select[9]=='C'||select[9]=='c')&&(select[10]=='K'||select[10]=='k')&&(select[11]=='E'||select[11]=='e')&&(select[12]=='T'||select[12]=='t')) {
        system("cls");
        fareByClass();
        
    }
    else if((select=="4")||(select[0]=='E'||select[0]=='e')&&(select[1]=='A'||select[1]=='a')&&(select[2]=='R'||select[2]=='r')&&(select[3]=='N'||select[3]=='n')&&(select[5]=='M'||select[5]=='m')&&(select[6]=='O'||select[6]=='o')&&(select[7]=='N'||select[7]=='n')&&(select[8]=='E'||select[8]=='e')&&(select[9]=='Y'||select[9]=='y')) {
        system("cls");
        int confirmPassword = passwordMatch();
        if(confirmPassword==0) {
            string prompt = "\n\n\t\033[32m ACCESS_REQUEST \033[0m : Granted !\n\n";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(500);
            QuizGameModule();
        }
        else {
            Sleep(700);
            string prompt = "\n\n\t\033[31;2m ERROR_401 ACCESS_REQUEST \033[0m : Denied !\n\n";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(1000);
            starter();
        }
        
    }
    else if((select=="5")||(select[0]=='M'||select[0]=='m')&&(select[1]=='A'||select[1]=='a')&&(select[2]=='N'||select[2]=='n')&&(select[3]=='A'||select[3]=='a')&&(select[4]=='G'||select[4]=='g')&&(select[5]=='E'||select[5]=='e')&&(select[7]=='A'||select[7]=='a')&&(select[8]=='C'||select[8]=='c')&&(select[9]=='C'||select[9]=='c')&&(select[10]=='O'||select[10]=='o')&&(select[11]=='U'||select[11]=='u')&&(select[12]=='N'||select[12]=='n')&&(select[13]=='T'||select[13]=='t')) {
        Sleep(900);
        accountStarter();
    }
    else {
        Sleep(500);
        cout<<"Please Enter A Valid Attribute Or Be Carefull At Spelling !"<<endl;
        Sleep(700);
        starter();
    }
}
void accountStarter() {
    system("color 0F");
    system("cls");
    string select;
    cout<<"____________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t      WHAT YOU WISH TO GO FOR\n\n\n\n\n";
    cout<<"\t1.New User Registration\t\t       2.Change Password\t\t\t3.View Passbook\t\t\t    4.Delete Your Account\t\t        5.Transfer Money\t\t    6.Go Back\n\n";
    cout<<"\n\n\n____________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n";
    cout<<"Enter Your Choice : ";
    getline(cin, select);
    if((select=="1")||(select[0]=='N'||select[0]=='n')&&(select[1]=='E'||select[1]=='e')&&(select[2]=='W'||select[2]=='w')&&(select[4]=='U'||select[4]=='u')&&(select[5]=='S'||select[5]=='s')&&(select[6]=='E'||select[6]=='e')&&(select[7]=='R'||select[7]=='r')&&(select[9]=='R'||select[9]=='r')&&(select[10]=='E'||select[10]=='e')&&(select[11]=='G'||select[11]=='g')&&(select[12]=='I'||select[12]=='i')&&(select[13]=='S'||select[13]=='s')&&(select[14]=='T'||select[14]=='t')&&(select[15]=='R'||select[15]=='r')&&(select[16]=='A'||select[16]=='a')&&(select[17]=='T'||select[17]=='t')&&(select[18]=='I'||select[18]=='i')&&(select[19]=='O'||select[19]=='o')&&(select[20]=='N'||select[20]=='n')) {
        system("cls");
        enterUserName();
    }
    else if((select=="2")||(select[0]=='C'||select[0]=='c')&&(select[1]=='H'||select[1]=='h')&&(select[2]=='A'||select[2]=='a')&&(select[3]=='N'||select[3]=='n')&&(select[4]=='G'||select[4]=='g')&&(select[5]=='E'||select[5]=='e')&&(select[7]=='P'||select[7]=='p')&&(select[8]=='A'||select[8]=='a')&&(select[9]=='S'||select[9]=='s')&&(select[10]=='S'||select[10]=='s')&&(select[11]=='W'||select[11]=='w')&&(select[12]=='O'||select[12]=='o')&&(select[13]=='R'||select[13]=='r')&&(select[14]=='D'||select[14]=='d')) {
        changePassword();
    }
    else if((select=="3")||(select[0]=='V'||select[0]=='v')&&(select[1]=='I'||select[1]=='i')&&(select[2]=='E'||select[2]=='e')&&(select[3]=='W'||select[3]=='w')&&(select[5]=='P'||select[5]=='p')&&(select[6]=='A'||select[6]=='a')&&(select[7]=='S'||select[7]=='s')&&(select[8]=='S'||select[8]=='s')&&(select[9]=='B'||select[9]=='b')&&(select[10]=='O'||select[10]=='o')&&(select[11]=='O'||select[11]=='o')&&(select[12]=='K'||select[12]=='k')) {
        system("cls");
        int confirmPassword = passwordMatch();
        if(confirmPassword==0) {
            string prompt = "\n\n\t\033[32m ACCESS_REQUEST \033[0m : Granted !\n\n";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(1000);
            passbook();
            Sleep(5000);
            system("cls");
            accountStarter();
        }
        else {
            string prompt = "\n\n\t\033[31;2m ERROR_401 ACCESS_REQUEST \033[0m : Denied !\n\n";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(1000);
            accountStarter();
        }
    }
    else if((select=="4")||(select[0]=='D'||select[0]=='d')&&(select[1]=='E'||select[1]=='e')&&(select[2]=='L'||select[2]=='l')&&(select[3]=='E'||select[3]=='e')&&(select[4]=='T'||select[4]=='t')&&(select[5]=='E'||select[5]=='e')&&(select[7]=='Y'||select[7]=='y')&&(select[8]=='O'||select[8]=='o')&&(select[9]=='U'||select[9]=='u')&&(select[10]=='R'||select[10]=='r')&&(select[12]=='A'||select[12]=='a')&&(select[13]=='C'||select[13]=='c')&&(select[14]=='C'||select[14]=='c')&&(select[15]=='O'||select[15]=='o')&&(select[16]=='U'||select[16]=='u')&&(select[17]=='N'||select[17]=='n')&&(select[18]=='T'||select[18]=='t')) {
        system("cls");
        permissionDelete();
        
    }
    else if((select=="5")||(select[0]=='T'||select[0]=='t')&&(select[1]=='R'||select[1]=='r')&&(select[2]=='A'||select[2]=='a')&&(select[3]=='N'||select[3]=='n')&&(select[4]=='S'||select[4]=='s')&&(select[5]=='F'||select[5]=='f')&&(select[6]=='E'||select[6]=='e')&&(select[7]=='R'||select[7]=='r')&&(select[9]=='M'||select[9]=='m')&&(select[10]=='O'||select[10]=='o')&&(select[11]=='N'||select[11]=='n')&&(select[12]=='E'||select[12]=='e')&&(select[13]=='Y'||select[13]=='y')) {
        moneyTransfer();
    }
    else if((select=="6")||(select[0]=='G'||select[0]=='g')&&(select[1]=='O'||select[1]=='o')&&(select[3]=='B'||select[3]=='b')&&(select[4]=='A'||select[4]=='a')&&(select[5]=='C'||select[5]=='c')&&(select[6]=='K'||select[6]=='k')) {
        Sleep(900);
        starter();
    }
    else {
        Sleep(500);
        cout<<"Please Enter A Valid Attribute Or Be Carefull At Spelling !"<<endl;
        Sleep(700);
        accountStarter();
    }
}
void showMovieList() {
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    cout<<"\t\t\t\t\t\t\t\t DRISHYAM 2\n"<<endl;
    cout<<"TIME\t\t\t\t\tRATING(5)\t\t\t\t\t    DURATION(min)\t\t\t\t AUDI\n"<<endl;
    cout<<"8:00 AM\t\t\t\t\t   4.5\t\t\t\t\t\t\t 180\t\t\t\t\t   1\n"<<endl;
    cout<<"11:00 AM\t\t\t\t   4.5\t\t\t\t\t\t\t 180\t\t\t\t\t   3\n"<<endl;
    cout<<"2:00 PM\t\t\t\t\t   4.5\t\t\t\t\t\t\t 180\t\t\t\t\t   2\n"<<endl;
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------\n\n"<<endl;
    Sleep(500);
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    cout<<"\t\t\t\t\t\t\t\t PATHAN\n"<<endl;
    cout<<"TIME\t\t\t\t\tRATING(5)\t\t\t\t\t    DURATION(min)\t\t\t\t AUDI\n"<<endl;
    cout<<"8:00 AM\t\t\t\t\t   3.8\t\t\t\t\t\t\t 180\t\t\t\t\t   2\n"<<endl;
    cout<<"11:00 AM\t\t\t\t   3.8\t\t\t\t\t\t\t 180\t\t\t\t\t   1\n"<<endl;
    cout<<"2:00 PM\t\t\t\t\t   3.8\t\t\t\t\t\t\t 180\t\t\t\t\t   3\n"<<endl;
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    Sleep(500);
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    cout<<"\t\t\t\t\t\t\t TU JHOOTHI MAIN MAKKAR\n"<<endl;
    cout<<"TIME\t\t\t\t\tRATING(5)\t\t\t\t\t    DURATION(min)\t\t\t\t AUDI\n"<<endl;
    cout<<"8:00 AM\t\t\t\t\t   4.7\t\t\t\t\t\t\t 180\t\t\t\t\t   3\n"<<endl;
    cout<<"11:00 AM\t\t\t\t   4.7\t\t\t\t\t\t\t 180\t\t\t\t\t   2\n"<<endl;
    cout<<"2:00 PM\t\t\t\t\t   4.7\t\t\t\t\t\t\t 180\t\t\t\t\t   1\n"<<endl;
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    Sleep(500);
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 2 STATES\n"<<endl;
    cout<<"TIME\t\t\t\t\tRATING(5)\t\t\t\t\t    DURATION(min)\t\t\t\t AUDI\n"<<endl;
    cout<<"8:00 AM\t\t\t\t\t   4.5\t\t\t\t\t\t\t 180\t\t\t\t\t   4\n"<<endl;
    cout<<"11:00 AM\t\t\t\t   4.5\t\t\t\t\t\t\t 180\t\t\t\t\t   5\n"<<endl;
    cout<<"5:00 PM\t\t\t\t\t   4.5\t\t\t\t\t\t\t 180\t\t\t\t\t   1\n"<<endl;
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    Sleep(500);
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    cout<<"\t\t\t\t\t\t\t\tANGRY BIRDS\n"<<endl;
    cout<<"TIME\t\t\t\t\tRATING(5)\t\t\t\t\t    DURATION(min)\t\t\t\t AUDI\n"<<endl;
    cout<<"8:00 AM\t\t\t\t\t   3.5\t\t\t\t\t\t\t 180\t\t\t\t\t   5\n"<<endl;
    cout<<"11:00 AM\t\t\t\t   3.5\t\t\t\t\t\t\t 180\t\t\t\t\t   4\n"<<endl;
    cout<<"5:00 PM\t\t\t\t\t   3.5\t\t\t\t\t\t\t 180\t\t\t\t\t   2\n"<<endl;
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    Sleep(500);
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    cout<<"\t\t\t\t\t\t\t\t ICE AGE\n"<<endl;
    cout<<"TIME\t\t\t\t\tRATING(5)\t\t\t\t\t    DURATION(min)\t\t\t\t AUDI\n"<<endl;
    cout<<"3:00 PM\t\t\t\t\t   2.5\t\t\t\t\t\t\t 180\t\t\t\t\t   4\n"<<endl;
    cout<<"8:00 PM\t\t\t\t\t   2.5\t\t\t\t\t\t\t 180\t\t\t\t\t   3\n"<<endl;
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------\n\n"<<endl;
}
void getDate() {
    system("cls");
    // Get the current system time
    auto now = system_clock::now();
    time_t now_c = system_clock::to_time_t(now);
    // Convert the system time to a tm struct
    tm* now_tm = localtime(&now_c);
    // Extract the date components from the tm struct
    int year = now_tm->tm_year + 1900;
    int month = now_tm->tm_mon + 1;
    int day = now_tm->tm_mday;

    u._getCurrentRealDate(day);
    u._getCurrentRealMonth(month);
    u._getCurrentRealYear(year);
    char leapIdentifier;
    ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)?leapIdentifier = 'Y':leapIdentifier = 'N';
    string enteredDate;
    vector<int>dateList;
    if(month==1) {
        for(int j=day; j<=day+7; j++) {
            if(j==32) { // what if we add the vector with all possible entries, will we able to remove the _monthChange function
                break;
            }
            dateList.push_back(j);
        }
        _month(dateList, day, month, year, leapIdentifier, 31);
    }
    else if(month==2) {
        int endDate;
        u._getCurrentRealMonth(2);
        for(int j=day; j<=day+7; j++) {
            if(leapIdentifier=='Y') {
                if(j==30) {
                    endDate = 29;
                    break;
                }
            }
            if(leapIdentifier=='N') {
                if(j==29) {
                    endDate = 28;
                    break;
                }
            }
            dateList.push_back(j);
        }
        cout<<"\nEnter Date On Which You Need To Book Your Seats (dd/mm/yyyy) : ";
        getline(cin, enteredDate);
        if(enteredDate.length()!=10) {
            Sleep(1000);
            string prompt = "\n\n\033[31;2m ER_DATE_FORMAT\033[0m : Enter The Date In Correct Format !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(1000);
            getDate();
        }
        string enteredDateToPass = enteredDate;
        string tempDate1 = enteredDate;
        string tempDate2 = enteredDate;
        string tempDate3 = enteredDate;
        string _date = tempDate1.erase(2,string::npos);
        int intDate = convertToInt(_date);
        string stringDate = to_string(intDate);
        string _month = tempDate2.erase(5,string::npos);
        _month = _month.erase(0,3);
        int intMonth = convertToInt(_month);
        string stringMonth = to_string(intMonth);
        string _year = tempDate3.erase(0,6);
        int intYear = convertToInt(_year);
        string stringYear = to_string(intYear);
        string _day = to_string(day);
        string _actMonth = to_string(month);
        string _actYear = to_string(year);
        if(intDate>=32||intDate<=0||intMonth>=13||intMonth<=0) {
        Sleep(1000);
            string prompt = "\n\n\033[31;2m ER_IVALID\033[0m : No Such Date Exists !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(1000);
            getDate();
        }
        else if(((endDate==28)&&((intDate>=day)&&(intDate<=28)))||((endDate==29)&&((intDate>=day)&&(intDate<=29)))&&(intMonth==month)) {
            if(stringYear!=_actYear) {
                Sleep(1000);
                if(stringYear>_actYear) {
                    string prompt = "\n\n\033[31;2m ER_YEAR\033[0m : Can't Book Ticket In Next Year(s) !";
                    for(int i=0; i<=prompt.size(); i++) {
                        Sleep(30);
                        cout<<prompt[i];
                    }
                    Sleep(1000);
                    getDate();
                }
                if(stringYear<_actYear) {
                    string prompt = "\n\n\033[31;2m ER_YEAR\033[0m : Can't Book Ticket In Previous Year(s) !";
                    for(int i=0; i<=prompt.size(); i++) {
                        Sleep(30);
                        cout<<prompt[i];
                    }
                    Sleep(1000);
                    getDate();
                }
            }
            else if(stringMonth!=_actMonth) {
                Sleep(1000);
                if(stringMonth>_actMonth) {
                    string prompt = "\n\n\033[31;2m ER_YEAR\033[0m : Can't Book Ticket In Next Month(s) !";
                    for(int i=0; i<=prompt.size(); i++) {
                        Sleep(30);
                        cout<<prompt[i];
                    }
                    Sleep(1000);
                    getDate();
                }
                if(stringMonth<_actMonth) {
                    string prompt = "\n\n\033[31;2m ER_YEAR\033[0m : Can't Book Ticket In Previous Month(s) !";
                    for(int i=0; i<=prompt.size(); i++) {
                        Sleep(30);
                        cout<<prompt[i];
                    }
                    Sleep(1000);
                    getDate();
                }
            }
            else {
                string date2return = enteredDate;
                int dateExtracted = convertToInt(enteredDate.erase(2, string::npos));
                int count=0, errorType;
                for(int i=0; i<dateList.size(); i++) {
                    if(dateExtracted==dateList[i]) {
                        count++;
                        string prompt = "\n\n\033[32m DATE_OPTED\033[0m : Booked, Please Continue !";
                        for(int i=0; i<=prompt.size(); i++) {
                            Sleep(30);
                            cout<<prompt[i];
                        }
                        x._getDate(date2return);
                        break;
                    }
                    if(dateExtracted<dateList[0]&&dateExtracted>0) {
                        errorType = 1;
                    }
                    if(dateExtracted>dateList[dateList.size()-1]) {
                        errorType = 2;
                    }
                    if(dateExtracted<1) {
                        errorType = 3;
                    }
                    if(leapIdentifier=='Y') {
                        if(dateExtracted==30) {
                            errorType = 4;
                        }
                        if(dateExtracted==31) {
                            errorType = 4;
                        }
                        if(dateExtracted>31) {
                            errorType = 6;
                        }
                    }
                    if(leapIdentifier=='N') {
                        if(dateExtracted==29) {
                            errorType = 5;
                        }
                        if(dateExtracted==30) {
                            errorType = 5;
                        }
                        if(dateExtracted==31) {
                            errorType = 5;
                        }
                        if(dateExtracted>31) {
                            errorType = 6;
                        }
                    }
                }
                if(count==0) {
                    Sleep(1000);
                    if(errorType==1) {
                        string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Previous Date !";
                        for(int i=0; i<=prompt.size(); i++) {
                            Sleep(30);
                            cout<<prompt[i];
                        }
                    }
                    else if(errorType==2) {
                        string prompt = "\n\n\033[31;2m ER_FAULT_AFTER\033[0m : Can't Book Ticket In 8 Days Prior !";
                        for(int i=0; i<=prompt.size(); i++) {
                            Sleep(30);
                            cout<<prompt[i];
                        } 
                    }
                    else if(errorType==3) {
                        string prompt = "\n\n\033[31;2m ER_FAULT INVALID\033[0m : Negative or Zero Date Does Not Exist !";
                        for(int i=0; i<=prompt.size(); i++) {
                            Sleep(30);
                            cout<<prompt[i];
                        } 
                    }
                    else if(errorType==4) {
                        string prompt = "\n\n\033[31;2m ER_FAULT_LEAP\033[0m : This Year Is Leap Year And Month Is February, It Has 29 Days Only !";
                        for(int i=0; i<=prompt.size(); i++) {
                            Sleep(30);
                            cout<<prompt[i];
                        } 
                    }
                    else if(errorType==5) {
                        string prompt = "\n\n\033[31;2m ER_FAULT_LEAP\033[0m : This Is A Not Leap Year And Month Is February, It Has 28 Days Only !";
                        for(int i=0; i<=prompt.size(); i++) {
                            Sleep(30);
                            cout<<prompt[i];
                        } 
                    }
                    else if(errorType==6) {
                        string prompt = "\n\n\033[31;2m ER_FAULT_INVALID\033[0m : No Such Date Exist !";
                        for(int i=0; i<=prompt.size(); i++) {
                            Sleep(30);
                            cout<<prompt[i];
                        } 
                    }
                    Sleep(1000);
                    getDate();
                }
            }
        }
        else if((endDate==28&&intDate>28)||(endDate==29&&intDate>29)) {
            cout<<"\n\nDate Exceeded Month Limit !\n\n";
        }
        else if(((((endDate==28)&&(intDate<day))&&(intMonth>month))&&(day<22))||((((endDate==29)&&(intDate<day))&&(intMonth>month))&&(day<23))) {
            string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Next Month X !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
        }
        else if(((endDate==28&&intDate<day)||(endDate==29&&intDate<day))&&(intMonth>month)) {
            if(intMonth>month+1) {
                string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Next to Next Month X !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(1000);
                getDate();
            }
            if(endDate==28) { // EDITING REQUIRED
                vector<int> monthCrossed28 = {1,2,3,4,5,6,7};
                for(int i=0; i<monthCrossed28.size(); i++) {
                    if(day==27) {
                        monthCrossed28.pop_back();
                        break;
                    }
                    else if(day==26) {
                        for(int i=1; i<=2; i++) {
                            monthCrossed28.pop_back();
                        }
                        break;
                    }
                    else if(day==25) {
                        for(int i=1; i<=3; i++) {
                            monthCrossed28.pop_back();
                        }
                        break;
                    }
                    else if(day==24) {
                        for(int i=1; i<=4; i++) {
                            monthCrossed28.pop_back();
                        }
                        break;
                    }
                    else if(day==23) {
                        for(int i=1; i<=5; i++) {
                            monthCrossed28.pop_back();
                        }
                        break;
                    }
                    else if(day==22) {
                        for(int i=1; i<=6; i++) {
                            monthCrossed28.pop_back();
                        }
                        break;
                    }
                }
                bool is_found = find(monthCrossed28.begin(), monthCrossed28.end(), intDate) != monthCrossed28.end();
                if (is_found) {
                    // cout<<"\n\nFunction Change Gama \n\n";
                    u._getCurrentRealMonth(month+1);
                    _monthChange(monthCrossed28, leapIdentifier, 28, enteredDateToPass);
                    exit(0);
                }
                else {
                    cout<<"\n\n#1.9 You Can't Book Ticket In 8 Days prior\n\n";      
                }
            }
            else if(endDate==29) {
                vector<int> monthCrossed29 = {1,2,3,4,5,6,7};
                for(int i=0; i<monthCrossed29.size(); i++) {
                    if(day==28) {
                        monthCrossed29.pop_back();
                        break;
                    }
                    else if(day==27) {
                        for(int i=1; i<=2; i++) {
                            monthCrossed29.pop_back();
                        }
                        break;
                    }
                    else if(day==26) {
                        for(int i=1; i<=3; i++) {
                            monthCrossed29.pop_back();
                        }
                        break;
                    }
                    else if(day==25) {
                        for(int i=1; i<=4; i++) {
                            monthCrossed29.pop_back();
                        }
                        break;
                    }
                    else if(day==24) {
                        for(int i=1; i<=5; i++) {
                            monthCrossed29.pop_back();
                        }
                        break;
                    }
                    else if(day==23) {
                        for(int i=1; i<=6; i++) {
                            monthCrossed29.pop_back();
                        }
                        break;
                    }
                }
                bool is_found = find(monthCrossed29.begin(), monthCrossed29.end(), intDate) != monthCrossed29.end();
                if (is_found) {
                    // cout<<"\n\nFunction Change Theta \n\n";
                    u._getCurrentRealMonth(month+1);
                    _monthChange(monthCrossed29, leapIdentifier, 29, enteredDateToPass);
                    exit(0);
                }
                else {
                    cout<<"\n\n#1.9 You Can't Book Ticket In 8 Days prior\n\n";      
                }
            }
        }
        else if(((endDate==28&&intDate<day)||(endDate==29&&intDate<day))&&(intMonth<month)) {
            string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Previous Month !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
        }
        else if((((endDate==28&&intDate<day)||(endDate==29&&intDate<day))&&(intMonth==month))&&(intYear==year)) {
            string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Previous Date !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
        }
        else if((((endDate==28&&intDate<day)||(endDate==29&&intDate<day))&&(intMonth==month))&&(intYear!=year)) {
            if(intYear>year) {
                string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Next Year(s) !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
            }
            else if(intYear<year) {
                string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Previous Year(s) !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
            }
        }
        else if((((endDate==30&&intDate<day)||(endDate==31&&intDate>=day))&&(intMonth>month))&&((intYear>year)||(intYear<year))) {
            if(intYear>year) {
                string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Next Year(s) !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(1000);
                getDate();
            }
            else if(intYear<year) {
                string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Previous Year(s) !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(1000);
                getDate();
            }
        }
        else if(((endDate==30&&intDate<day)||(endDate==31&&intDate>=day))&&((intMonth>month)||(intMonth<month))) {
            if(intMonth>month) {
                string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Next Month(s) !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(1000);
                getDate();
            }
            else if(intMonth<month) {
                string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Previous Month(s) !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(1000);
                getDate();
            }
        }
    }
    else if(month==3) {
        for(int j=day; j<=day+7; j++) {
            if(j==32) {
                break;
            }
            dateList.push_back(j);
        }
        _month(dateList, day, month, year, leapIdentifier, 31);
    }
    else if(month==4) {
        for(int j=day; j<=day+7; j++) {
            if(j==31) {
                break;
            }
            dateList.push_back(j);
        }
        _month(dateList, day, month, year, leapIdentifier, 30);
    }
    else if(month==5) {
        for(int j=day; j<=day+7; j++) {
            if(j==32) {
                break;
            }
            dateList.push_back(j);
        }
        _month(dateList, day, month, year, leapIdentifier, 31);
    }
    else if(month==6) {
        for(int j=day; j<=day+7; j++) {
            if(j==31) {
                break;
            }
            dateList.push_back(j);
        }
        _month(dateList, day, month, year, leapIdentifier, 30);
    }
    else if(month==7) {
        for(int j=day; j<=day+7; j++) {
            if(j==31) {
                break;
            }
            dateList.push_back(j);
        }
        _month(dateList, day, month, year, leapIdentifier, 31);
    }
    else if(month==8) {
        for(int j=day; j<=day+7; j++) {
            if(j==32) {
                break;
            }
            dateList.push_back(j);
        }
        _month(dateList, day, month, year, leapIdentifier, 31);
    }
    else if(month==9) {
        for(int j=day; j<=day+7; j++) {
            if(j==31) {
                break;
            }
            dateList.push_back(j);
        }
        _month(dateList, day, month, year, leapIdentifier, 30);
    }
    else if(month==10) {
        for(int j=day; j<=day+7; j++) {
            if(j==32) {
                break;
            }
            dateList.push_back(j);
        }
        _month(dateList, day, month, year, leapIdentifier, 31);
    }
    else if(month==11) {
        for(int j=day; j<=day+7; j++) {
            if(j==31) {
                break;
            }
            dateList.push_back(j);
        }
        _month(dateList, day, month, year, leapIdentifier, 30);
    }
    else if(month==12) {
        int endDate = 31;
        u._getCurrentRealMonth(12);
        for(int j=day; j<=day+7; j++) {
            if(j==32) {
                break;
            }
            dateList.push_back(j);
        }
        cout<<"\nEnter Date On Which You Need To Book Your Seats (dd/mm/yyyy) : ";
        getline(cin, enteredDate);
        if(enteredDate.length()!=10) {
            Sleep(1000);
            string prompt = "\n\n\033[31;2m ER_DATE_FORMAT\033[0m : Enter The Date In Correct Format !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(1000);
            getDate();
        }
        string enteredDateToPass = enteredDate;
        string tempDate1 = enteredDate;
        string tempDate2 = enteredDate;
        string tempDate3 = enteredDate;
        string _date = tempDate1.erase(2,string::npos);
        int intDate = convertToInt(_date);
        string stringDate = to_string(intDate);
        string _month = tempDate2.erase(5,string::npos);
        _month = _month.erase(0,3);
        int intMonth = convertToInt(_month);
        string stringMonth = to_string(intMonth);
        string _year = tempDate3.erase(0,6);
        int intYear = convertToInt(_year);
        string stringYear = to_string(intYear);
        string _day = to_string(day);
        string _actMonth = to_string(month);
        string _actYear = to_string(year);
        if(intDate>=32||intDate<=0||intMonth>=13||intMonth<=0) {
        Sleep(1000);
            string prompt = "\n\n\033[31;2m ER_IVALID\033[0m : No Such Date Exists !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(1000);
            getDate();
        }
        if(((intDate>=1&&intDate<=31)&&(intMonth==month)&&(intYear==year))&&(day>=1&&day<=31)) { // Allowed Condition 1 : if day (1-31) then [ if intDate (1-31) && intMonth (month) && intYear (year) ]
            if(intDate<day) {
                cout<<"Can't Book In Previous Date";
            }
            else if(intDate-day>=0&&intDate-day<=7) {
                string prompt = "\n\n\033[32m DATE_OPTED\033[0m : Booked, Please Continue !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                x._getDate(enteredDateToPass);
            }
            else {
                cout<<"8 Days Prior";
            }
        }
        else if((intMonth>=2&&intMonth<=11)&&(intYear==year+1)) {
            if(intMonth==4||intMonth==6||intMonth==9||intMonth==11) {
                if(intDate>=1&&intDate<=30) {
                    cout<<"Can't Book In Next Months";
                }
                else if(intDate==31) {
                    switch (intMonth) {
                    case 4:
                        cout<<"April Month Don't Have 31 Days. Also You Can't Book Ticket For Months Except For January In Next Year";
                        break;
                    case 6:
                        cout<<"June Month Don't Have 31 Days. Also You Can't Book Ticket For Months Except For January In Next Year";
                        break;
                    case 9:
                        cout<<"September Month Don't Have 31 Days. Also You Can't Book Ticket For Months Except For January In Next Year";
                        break;
                    case 11:
                        cout<<"November Month Don't Have 31 Days. Also You Can't Book Ticket For Months Except For January In Next Year";
                        break;
                    default:
                        break;
                    }
                }
            }
            else if(intMonth==3||intMonth==5||intMonth==7||intMonth==8||intMonth==10) {
                switch (intMonth) {
                    case 3:
                        cout<<"You Can't Book Ticket For March, You Can Only Book For Januray Month, That To Not Prior Than 8 Days from "<<day<<"/"<<month<<"/"<<year;
                        break;
                    case 5:
                        cout<<"You Can't Book Ticket For May, You Can Only Book For Januray Month, That To Not Prior Than 8 Days from "<<day<<"/"<<month<<"/"<<year;
                        break;
                    case 7:
                        cout<<"You Can't Book Ticket For July, You Can Only Book For Januray Month, That To Not Prior Than 8 Days from "<<day<<"/"<<month<<"/"<<year;
                        break;
                    case 8:
                        cout<<"You Can't Book Ticket For August, You Can Only Book For Januray Month, That To Not Prior Than 8 Days from "<<day<<"/"<<month<<"/"<<year;
                        break;
                    case 10:
                        cout<<"You Can't Book Ticket For October, You Can Only Book For Januray Month, That To Not Prior Than 8 Days from "<<day<<"/"<<month<<"/"<<year;
                        break;
                    default:
                        break;
                } 
            }
            else if(intMonth==2) {
                char leapIdentifier;
                ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)?leapIdentifier = 'Y':leapIdentifier = 'N';
                if((intDate>=1&&intDate<=29)&&leapIdentifier=='Y') {
                    cout<<"You Can't Book Ticket For February, You Can Only Book For Januray Month, That To Not Prior Than 8 Days from "<<day<<"/"<<month<<"/"<<year;
                }
                if((intDate>=1&&intDate<=28)&&leapIdentifier=='N') {
                    cout<<"You Can't Book Ticket For February, You Can Only Book For Januray Month, That To Not Prior Than 8 Days from "<<day<<"/"<<month<<"/"<<year;
                }
                if((intDate==29)&&leapIdentifier=='N') {
                    cout<<"This Year Is "<<year<<" Which Is Not A Leap Hence It Only Has 28 Days, Moreover you Can Only Book For Januray Month, That To Not Prior Than 8 Days from "<<day<<"/"<<month<<"/"<<year;
                }
                if((intDate>29)&&leapIdentifier=='Y') {
                    cout<<"This Month Is February It Only Has 29 Days, Moreover you Can Only Book For Januray Month, That To Not Prior Than 8 Days from "<<day<<"/"<<month<<"/"<<year;
                }
            }
        }
        else if((intMonth>=2&&intMonth<=11)&&(intYear==year)) {
            if(intMonth==4||intMonth==6||intMonth==9||intMonth==11) {
                if(intDate>=1&&intDate<=30) {
                    cout<<"You Can't Book Ticket For Previous Months";
                }
                else if(intDate==31) {
                    switch (intMonth) {
                    case 4:
                        cout<<"April Month Don't Have 31 Days. Also You Can't Book Ticket For Previous Months";
                        break;
                    case 6:
                        cout<<"June Month Don't Have 31 Days. Also You Can't Book Ticket For Previous Months";
                        break;
                    case 9:
                        cout<<"September Month Don't Have 31 Days. Also You Can't Book Ticket For Previous Months";
                        break;
                    case 11:
                        cout<<"November Month Don't Have 31 Days. Also You Can't Book Ticket For Previous Months";
                        break;
                    default:
                        break;
                    }
                }
            }
            else if(intMonth==3||intMonth==5||intMonth==7||intMonth==8||intMonth==10) {
                switch (intMonth) {
                    case 3:
                        cout<<"You Can't Book Ticket For Previous Months";
                        break;
                    case 5:
                        cout<<"You Can't Book Ticket For Previous Months";
                        break;
                    case 7:
                        cout<<"You Can't Book Ticket For Previous Months";
                        break;
                    case 8:
                        cout<<"You Can't Book Ticket For Previous Months";
                        break;
                    case 10:
                        cout<<"You Can't Book Ticket For Previous Months";
                        break;
                    default:
                        break;
                } 
            }
            else if(intMonth==2) {
                char leapIdentifier;
                ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)?leapIdentifier = 'Y':leapIdentifier = 'N';
                if((intDate>=1&&intDate<=29)&&leapIdentifier=='Y') {
                    cout<<"You Can't Book Ticket For February, You Can Only Book For Januray Month, That To Not Prior Than 8 Days from "<<day<<"/"<<month<<"/"<<year;
                }
                if((intDate>=1&&intDate<=28)&&leapIdentifier=='N') {
                    cout<<"You Can't Book Ticket For February, You Can Only Book For Januray Month, That To Not Prior Than 8 Days from "<<day<<"/"<<month<<"/"<<year;
                }
                if((intDate==29)&&leapIdentifier=='N') {
                    cout<<"This Year Is "<<year<<" Which Is Not A Leap Hence It Only Has 28 Days, Moreover you Can Only Book For Januray Month, That To Not Prior Than 8 Days from "<<day<<"/"<<month<<"/"<<year;
                }
                if((intDate>29)&&leapIdentifier=='Y') {
                    cout<<"This Month Is February It Only Has 29 Days, Moreover you Can Only Book For Januray Month, That To Not Prior Than 8 Days from "<<day<<"/"<<month<<"/"<<year;
                }
            }
        }
        else if(((intDate>=01&&intDate<=07)&&(intMonth==month-11)&&(intYear==year+1))&&(day>=25&&day<=31)) { // Allowed Condition 2 : if day (25-30) then [ if intDate (1-7) && intMonth (month-11) && intYear (year+1) ]
            month-=11;
            year+=1;
            vector<int> monthCrossed31 = {1,2,3,4,5,6,7};
            for(int i=0; i<monthCrossed31.size(); i++) {
                if(day==30) {
                    monthCrossed31.pop_back();
                    break;
                }
                if(day==29) {
                    for(int i=1; i<=2; i++) {
                        monthCrossed31.pop_back();
                    }
                    break;
                }
                else if(day==28) {
                    for(int i=1; i<=3; i++) {
                        monthCrossed31.pop_back();
                    }
                    break;
                }
                else if(day==27) {
                    for(int i=1; i<=4; i++) {
                        monthCrossed31.pop_back();
                    }
                    break;
                }
                else if(day==26) {
                    for(int i=1; i<=5; i++) {
                        monthCrossed31.pop_back();
                    }
                    break;
                }
                else if(day==25) {
                    for(int i=1; i<=6; i++) {
                        monthCrossed31.pop_back();
                    }
                    break;
                }
            }
            bool is_found = find(monthCrossed31.begin(), monthCrossed31.end(), intDate) != monthCrossed31.end();
            if (is_found) {
                string prompt = "\n\n\033[32m DATE_OPTED\033[0m : Booked, Please Continue !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                x._getDate(enteredDateToPass);
            }
            else {
                cout<<"\n\n#1.9 You Can't Book Ticket In 8 Days prior\n\n";      
            }
        }
        else if(((intDate>=8&&intDate<=31)&&(intMonth==month-11)&&(intYear==year+1))&&(day>=25&&day<=31)) {
            cout<<"\n\n#1.2 You Can't Book Ticket In 8 Days prior\n\n";      
        }
        else if(intDate>=1&&intDate<=31&&intMonth==month-11&&intYear==year+1) {
            cout<<"On Date "<<day<<"/"<<month<<"/"<<year<<" You Can't Book For Next Year, As It Will Be More Than 8 Days Prior";
        }
        else if(intYear!=year) {
            if(intYear>year+1) {
                cout<<"Can't in next to next year(s)";
            }
            else {
                cout<<"Can't in previous year(s)";
            }
        }
        // NEXT TO NEXT OR PREV TO PREV YEAR OR MONTH
        // else if((intMonth>month+1)&&(intYear>year+1)||(intMonth<month)&&(intYear<year)) { 
        // }
    }
}

void _month(vector<int> dateList, int day, int month, int year, char leapIdentifier, int endDate) {
    string enteredDate;
    cout<<"\nEnter Date On Which You Need To Book Your Seats (dd/mm/yyyy) : ";
    getline(cin, enteredDate);
    if(enteredDate.length()!=10) {
        Sleep(1000);
        string prompt = "\n\n\033[31;2m ER_DATE_FORMAT\033[0m : Enter The Date In Correct Format !";
        for(int i=0; i<=prompt.size(); i++) {
            Sleep(30);
            cout<<prompt[i];
        }
        Sleep(1000);
        getDate();
    }
    string enteredDateToPass = enteredDate;
    string tempDate1 = enteredDate;
    string tempDate2 = enteredDate;
    string tempDate3 = enteredDate;
    string _date = tempDate1.erase(2,string::npos);
    int intDate = convertToInt(_date);
    string stringDate = to_string(intDate);
    string _month = tempDate2.erase(5,string::npos);
    _month = _month.erase(0,3);
    int intMonth = convertToInt(_month);
    string stringMonth = to_string(intMonth);
    string _year = tempDate3.erase(0,6);
    int intYear = convertToInt(_year);
    string stringYear = to_string(intYear);
    string _day = to_string(day);
    string _actMonth = to_string(month);
    string _actYear = to_string(year);
    if(intDate>=32||intDate<=0||intMonth>=13||intMonth<=0) {
        Sleep(1000);
            string prompt = "\n\n\033[31;2m ER_IVALID\033[0m : No Such Date Exists !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(1000);
            getDate();
    }
    else if(((endDate==30)&&((intDate>=day)&&(intDate<=30)))||((endDate==31)&&((intDate>=day)&&(intDate<=31)))&&(intMonth==month)) {
        if(stringMonth!=_actMonth) {
            Sleep(1000);
            string prompt = "\n\n\033[31;2m ER_MONTH\033[0m : Enter The Month Correctly !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(1000);
            getDate();
        }
        else if(stringYear!=_actYear) {
            Sleep(1000);
            if(stringYear>_actYear) {
                string prompt = "\n\n\033[31;2m ER_YEAR\033[0m : Can't Book Ticket In Next Year(s) !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(1000);
                getDate();
            }
            if(stringYear<_actYear) {
                string prompt = "\n\n\033[31;2m ER_YEAR\033[0m : Can't Book Ticket In Previous Year(s) !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(1000);
                getDate();
            }
        }
        else {
            string date2return = enteredDate;
            int dateExtracted = convertToInt(enteredDate.erase(2, string::npos));
            int count=0, errorType;
            for(int i=0; i<dateList.size(); i++) {
                if(dateExtracted==dateList[i]) {
                    count++;
                    string prompt = "\n\n\033[32m DATE_OPTED\033[0m : Booked, Please Continue !";
                    for(int i=0; i<=prompt.size(); i++) {
                        Sleep(30);
                        cout<<prompt[i];
                    }
                    x._getDate(date2return);
                    break;
                }
                if(dateExtracted<dateList[0]) {
                    errorType = 1;
                }
                if(dateExtracted>dateList[dateList.size()-1]) {
                    errorType = 2;
                }
                if(dateExtracted>endDate||dateExtracted<1) {
                    errorType = 3;
                }
            }
            if(count==0) {
                Sleep(1000);
                if(errorType==1) {
                    string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Previous Date !";
                    for(int i=0; i<=prompt.size(); i++) {
                        Sleep(30);
                        cout<<prompt[i];
                    }
                }
                else if(errorType==2) {
                    string prompt = "\n\n\033[31;2m ER_FAULT_AFTER\033[0m : Can't Book Ticket In 8 Days Prior !";
                    for(int i=0; i<=prompt.size(); i++) {
                        Sleep(30);
                        cout<<prompt[i];
                    } 
                }
                else if(errorType==3) {
                    string prompt = "\n\n\033[31;2m ER_FAULT_RANGE\033[0m : This Month Doesn't Have Such Date !";
                    for(int i=0; i<=prompt.size(); i++) {
                        Sleep(30);
                        cout<<prompt[i];
                    } 
                }
                Sleep(1000);
                getDate();
            }
        }
    }
    else if((endDate==30&&intDate==31)) {
        cout<<"\n\nDate Exceeded Month Limit !\n\n";
    }
    else if((((((endDate==30)&&(intDate<day))&&(intMonth>month))&&(day<24))||((((endDate==31)&&(intDate<day))&&(intMonth>month))&&(day<25)))&&(intYear!=year)) {
        Sleep(1000);
        if(intYear>year) {
            string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Next Year(s) !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
        }
        else if(intYear<year) {
            string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Previous Year(s) !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
        }
        Sleep(1000);
        getDate();
    }
    else if(((((endDate==30)&&(intDate<day))&&(intMonth>month))&&(day<24))||((((endDate==31)&&(intDate<day))&&(intMonth>month))&&(day<25))) {
        string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Next Month X !";
        for(int i=0; i<=prompt.size(); i++) {
            Sleep(30);
            cout<<prompt[i];
        }
    }
    else if((((endDate==30&&intDate<day)||(endDate==31&&intDate<day))&&(intMonth>month))&&(intYear!=year)) {
        if(intYear!=year) {
            if(intYear>year) {
                Sleep(1000);
                string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Next Year(s) !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(1000);
                getDate();
            }
            else if(intYear<year) {
                Sleep(1000);
                string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Previous Year(s) !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(1000);
                getDate();
            }
        }
        if(intMonth!=month) {
            if(intMonth>month) {
                Sleep(1000);
                string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Next Month !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(1000);
                getDate();
            }
            else if(intMonth<month) {
                Sleep(1000);
                string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Previous Month !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(1000);
                getDate();
            }
        }
    }
    else if(((endDate==30&&intDate<day)||(endDate==31&&intDate<day))&&(intMonth>month)) {
        if(intMonth>month+1) {
            string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Next to Next Month X !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(1000);
            getDate();
        }
        if(endDate==30) {
            vector<int> monthCrossed30 = {1,2,3,4,5,6,7};
            for(int i=0; i<monthCrossed30.size(); i++) {
                if(day==29) {
                    monthCrossed30.pop_back();
                    break;
                }
                else if(day==28) {
                    for(int i=1; i<=2; i++) {
                        monthCrossed30.pop_back();
                    }
                    break;
                }
                else if(day==27) {
                    for(int i=1; i<=3; i++) {
                        monthCrossed30.pop_back();
                    }
                    break;
                }
                else if(day==26) {
                    for(int i=1; i<=4; i++) {
                        monthCrossed30.pop_back();
                    }
                    break;
                }
                else if(day==25) {
                    for(int i=1; i<=5; i++) {
                        monthCrossed30.pop_back();
                    }
                    break;
                }
                else if(day==24) {
                    for(int i=1; i<=6; i++) {
                        monthCrossed30.pop_back();
                    }
                    break;
                }
            }
            bool is_found = find(monthCrossed30.begin(), monthCrossed30.end(), intDate) != monthCrossed30.end();
            if (is_found) {
                // cout<<"\n\nFunction Change Alpha \n\n";
                u._getCurrentRealMonth(month+1);
                _monthChange(monthCrossed30, leapIdentifier, 30, enteredDateToPass);
                // exit(0);
            }
            else {
                cout<<"\n\n#1.9 You Can't Book Ticket In 8 Days prior\n\n";      
            }
        }
        else if(endDate==31) {
            vector<int> monthCrossed31 = {1,2,3,4,5,6,7};
            for(int i=0; i<monthCrossed31.size(); i++) {
                if(day==30) {
                    monthCrossed31.pop_back();
                    break;
                }
                if(day==29) {
                    for(int i=1; i<=2; i++) {
                        monthCrossed31.pop_back();
                    }
                    break;
                }
                else if(day==28) {
                    for(int i=1; i<=3; i++) {
                        monthCrossed31.pop_back();
                    }
                    break;
                }
                else if(day==27) {
                    for(int i=1; i<=4; i++) {
                        monthCrossed31.pop_back();
                    }
                    break;
                }
                else if(day==26) {
                    for(int i=1; i<=5; i++) {
                        monthCrossed31.pop_back();
                    }
                    break;
                }
                else if(day==25) {
                    for(int i=1; i<=6; i++) {
                        monthCrossed31.pop_back();
                    }
                    break;
                }
            }
            bool is_found = find(monthCrossed31.begin(), monthCrossed31.end(), intDate) != monthCrossed31.end();
            if (is_found) {
                // cout<<"\n\nFunction Change Beta \n\n";
                u._getCurrentRealMonth(month+1);
                _monthChange(monthCrossed31, leapIdentifier, 31, enteredDateToPass);
                // exit(0);
            }
            else {
                cout<<"\n\n#1.9 You Can't Book Ticket In 8 Days prior\n\n";      
            }
        }
    }
    else if(((endDate==30&&intDate<day)||(endDate==31&&intDate<day))&&(intMonth<month)) {
        string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Previous Month !";
        for(int i=0; i<=prompt.size(); i++) {
            Sleep(30);
            cout<<prompt[i];
        }
    }
    else if((((endDate==30&&intDate<day)||(endDate==31&&intDate<day))&&(intMonth==month))&&(intYear==year)) {
        string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Previous Date !";
        for(int i=0; i<=prompt.size(); i++) {
            Sleep(30);
            cout<<prompt[i];
        }
    }
    else if((((endDate==30&&intDate<day)||(endDate==31&&intDate<day))&&(intMonth==month))&&(intYear!=year)) {
        if(intYear>year) {
            string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Next Year(s) !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
        }
        else if(intYear<year) {
            string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Previous Year(s) !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
        }
    }
    else if((((endDate==30&&intDate<day)||(endDate==31&&intDate>=day))&&(intMonth>month))&&((intYear>year)||(intYear<year))) {
        if(intYear>year) {
            string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Next Year(s) !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(1000);
            getDate();
        }
        else if(intYear<year) {
            string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Previous Year(s) !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(1000);
            getDate();
        }
    }
    else if(((endDate==30&&intDate<day)||(endDate==31&&intDate>=day))&&((intMonth>month)||(intMonth<month))) {
        if(intMonth>month) {
            string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Next Month(s) !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(1000);
            getDate();
        }
        else if(intMonth<month) {
            string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Previous Month(s) !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(1000);
            getDate();
        }
    }
}

void _monthChange(vector<int> dateList, char leapIdentifier, int endDate, string enteredDateToPass) {
    int day = u._fetchCurrentRealDate();
    int month = u._fetchCurrentRealMonth();
    int year = u._fetchCurrentRealYear();
    string enteredDate = enteredDateToPass;

    string tempDate1 = enteredDate;
    string tempDate2 = enteredDate;
    string tempDate3 = enteredDate;
    string _date = tempDate1.erase(2,string::npos);
    int intDate = convertToInt(_date);
    string stringDate = to_string(intDate);
    string _month = tempDate2.erase(5,string::npos);
    _month = _month.erase(0,3);
    int intMonth = convertToInt(_month);
    string stringMonth = to_string(intMonth);
    string _year = tempDate3.erase(0,6);
    int intYear = convertToInt(_year);
    string stringYear = to_string(intYear);
    string _day = to_string(day);
    string _actMonth = to_string(month);
    string _actYear = to_string(year);
    if(stringMonth!=_actMonth) {
        Sleep(1000);
        if(stringMonth>_actMonth) {
            string prompt = "\n\n\033[31;2m ER_MONTH\033[0m : Can't Book Ticket In Next Month !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
        } else if(stringMonth<_actMonth) {
            string prompt = "\n\n\033[31;2m ER_MONTH\033[0m : Can't Book Ticket In Previous Month !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
        }
        Sleep(1000);
        getDate();
    }
    else if(stringYear!=_actYear) {
        Sleep(1000);
        string prompt = "\n\n\033[31;2m ER_YEAR\033[0m : Enter The Year Correctly !";
        for(int i=0; i<=prompt.size(); i++) {
            Sleep(30);
            cout<<prompt[i];
        }
        Sleep(1000);
        getDate();
    }
    else {
        string date2return = enteredDate;
        int dateExtracted = convertToInt(enteredDate.erase(2, string::npos));
        int count=0, errorType;
        for(int i=0; i<dateList.size(); i++) {
            if(dateExtracted==dateList[i]) {
                count++;
                x._getDate(date2return);
                string prompt = "\n\n\033[32m DATE_OPTED\033[0m : Booked, Please Continue !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                break;
            }
            if(dateExtracted<dateList[0]) {
                errorType = 1;
            }
            if(dateExtracted>dateList[dateList.size()-1]) {
                errorType = 2;
            }
            if(dateExtracted>endDate||dateExtracted<1) {
                errorType = 3;
            }
        }
        if(count==0) {
            Sleep(1000);
            if(errorType==1) {
                string prompt = "\n\n\033[31;2m ER_FAULT_BEFORE\033[0m : Can't Book Ticket In Previous Date !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
            }
            else if(errorType==2) {
                string prompt = "\n\n\033[31;2m ER_FAULT_AFTER\033[0m : Can't Book Ticket In 8 Days Prior !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                } 
            }
            else if(errorType==3) {
                string prompt = "\n\n\033[31;2m ER_FAULT_RANGE\033[0m : This Month Doesn't Have Such Date !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                } 
            }
            Sleep(1000);
            getDate();
        }
    }
}
void getMovie() {
    string select_movie;
    cout<<"Enter The Name of The Movie You Want to Watch : ";
    getline(cin, select_movie);
    if((select_movie[0]=='D'||select_movie[0]=='d')&&(select_movie[1]=='R'||select_movie[1]=='r')&&(select_movie[2]=='I'||select_movie[2]=='i')&&(select_movie[3]=='S'||select_movie[3]=='s')&&(select_movie[4]=='H'||select_movie[4]=='h')&&(select_movie[5]=='Y'||select_movie[5]=='y')&&(select_movie[6]=='A'||select_movie[6]=='a')&&(select_movie[7]=='M'||select_movie[7]=='m')&&(select_movie[9]=='2')) {
        x._getMovieName("Drishyam 2");
        Sleep(700);
        getTime("Drishyam 2");   
    }
    else if((select_movie[0]=='P'||select_movie[0]=='p')&&(select_movie[1]=='A'||select_movie[1]=='a')&&(select_movie[2]=='T'||select_movie[2]=='t')&&(select_movie[3]=='H'||select_movie[3]=='h')&&(select_movie[4]=='A'||select_movie[4]=='a')&&(select_movie[5]=='N'||select_movie[5]=='n')) {
        x._getMovieName("Pathan");
        Sleep(700);
        getTime("Pathan");   
    }
    else if((select_movie[0]=='T'||select_movie[0]=='t')&&(select_movie[1]=='U'||select_movie[1]=='u')&&(select_movie[3]=='J'||select_movie[3]=='j')&&(select_movie[4]=='H'||select_movie[4]=='h')&&(select_movie[5]=='O'||select_movie[5]=='o')&&(select_movie[6]=='O'||select_movie[6]=='o')&&(select_movie[7]=='T'||select_movie[7]=='t')&&(select_movie[8]=='H'||select_movie[8]=='h')&&(select_movie[9]=='I'||select_movie[9]=='i')&&(select_movie[11]=='M'||select_movie[11]=='m')&&(select_movie[12]=='A'||select_movie[12]=='a')&&(select_movie[13]=='I'||select_movie[13]=='i')&&(select_movie[14]=='N'||select_movie[14]=='n')&&(select_movie[16]=='M'||select_movie[16]=='m')&&(select_movie[17]=='A'||select_movie[17]=='a')&&(select_movie[18]=='K'||select_movie[18]=='k')&&(select_movie[19]=='K'||select_movie[19]=='k')&&(select_movie[20]=='A'||select_movie[20]=='a')&&(select_movie[21]=='R'||select_movie[21]=='r')) {
        x._getMovieName("Tu Jhoothi Main Makkar");
        Sleep(700);
        getTime("Tu Jhoothi Main Makkar");   
    }
    else if((select_movie[0]=='2')&&(select_movie[2]=='S'||select_movie[2]=='s')&&(select_movie[3]=='T'||select_movie[3]=='t')&&(select_movie[4]=='A'||select_movie[4]=='a')&&(select_movie[5]=='T'||select_movie[5]=='t')&&(select_movie[6]=='E'||select_movie[6]=='e')&&(select_movie[7]=='S'||select_movie[7]=='s')) {
        x._getMovieName("2 States");
        Sleep(700);
        getTime("2 States");   
    }
    else if((select_movie[0]=='A'||select_movie[0]=='a')&&(select_movie[1]=='N'||select_movie[1]=='n')&&(select_movie[2]=='G'||select_movie[2]=='g')&&(select_movie[3]=='R'||select_movie[3]=='r')&&(select_movie[4]=='Y'||select_movie[4]=='y')&&(select_movie[6]=='B'||select_movie[6]=='b')&&(select_movie[7]=='I'||select_movie[7]=='i')&&(select_movie[8]=='R'||select_movie[8]=='r')&&(select_movie[9]=='D'||select_movie[9]=='d')&&(select_movie[10]=='S'||select_movie[10]=='s')) {
        x._getMovieName("Angry Birds");
        Sleep(700);
        getTime("Angry Birds");   
    }
    else if((select_movie[0]=='I'||select_movie[0]=='i')&&(select_movie[1]=='C'||select_movie[1]=='c')&&(select_movie[2]=='E'||select_movie[2]=='e')&&(select_movie[4]=='A'||select_movie[4]=='a')&&(select_movie[5]=='G'||select_movie[5]=='g')&&(select_movie[6]=='E'||select_movie[6]=='e')) {
        x._getMovieName("Ice Age");
        Sleep(700);
        getTime("Ice Age");   
    }
    else{
        Sleep(500);
        cout<<"\n\nPlease Enter The Name Correctly As Given In The List\n"<<endl;
        Sleep(500);
        getMovie();
    }
}
void getTime(string a) {
   if(a=="Drishyam 2") {
    cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    cout<<"\t\t\t\t\t\t\t     TIME SLOTS ARE\n\n       \t\t\t\t8:00 AM\t\t\t\t11:00 AM\t\t\t\t2:00 PM"<<endl;
    cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
   }
   else if(a=="Pathan") {
    cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    cout<<"\t\t\t\t\t\t\t     TIME SLOTS ARE\n\n       \t\t\t\t8:00 AM\t\t\t\t11:00 AM\t\t\t\t2:00 PM"<<endl;
    cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
   } 
   else if(a=="Tu Jhoothi Main Makkar") {
    cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    cout<<"\t\t\t\t\t\t\t     TIME SLOTS ARE\n\n       \t\t\t\t8:00 AM\t\t\t\t11:00 AM\t\t\t\t2:00 PM"<<endl;
    cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
   }
   else if(a=="2 States") {
    cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    cout<<"\t\t\t\t\t\t\t     TIME SLOTS ARE\n\n       \t\t\t\t8:00 AM\t\t\t\t11:00 AM\t\t\t\t5:00 PM"<<endl;
    cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
   }
   else if(a=="Angry Birds") {
    cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    cout<<"\t\t\t\t\t\t\t     TIME SLOTS ARE\n\n       \t\t\t\t8:00 AM\t\t\t\t11:00 AM\t\t\t\t5:00 PM"<<endl;
    cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
   }
   else if(a=="Ice Age") {
    cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    cout<<"\t\t\t\t\t\t\t     TIME SLOTS ARE\n\n       \t\t\t\t3:00 PM\t\t\t\t\t\t\t\t\t8:00 PM"<<endl;
    cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
   }
    Sleep(300);
    string slotTime;
    cout<<"Enter The Time Slot : ";
    getline(cin,slotTime);
    Sleep(500);
    checkSlotTime(a, slotTime);
}
void checkSlotTime(string a, string b) {
    if((a=="Drishyam 2")&&(b=="8:00"||b=="11:00"||b=="2:00"||b=="8:0"||b=="11:0"||b=="2:0"||b=="8"||b=="11"||b=="2"||b=="8:00AM"||b=="11:00AM"||b=="2:00PM"||b=="8:0AM"||b=="11:0AM"||b=="2:0PM"||b=="8AM"||b=="11AM"||b=="2PM"||b=="8:00am"||b=="11:00am"||b=="2:00pm"||b=="8:0am"||b=="11:0am"||b=="2:0pm"||b=="8am"||b=="11am"||b=="2pm"||b=="8:00Am"||b=="11:00Am"||b=="2:00Pm"||b=="8:0Am"||b=="11:0Am"||b=="2:0Pm"||b=="8Am"||b=="11Am"||b=="2Pm"||b=="8:00 AM"||b=="11:00 AM"||b=="2:00 PM"||b=="8:0 AM"||b=="11:0 AM"||b=="2:0 PM"||b=="8 AM"||b=="11 AM"||b=="2 PM"||b=="8:00 am"||b=="11:00 am"||b=="2:00 pm"||b=="8:0 am"||b=="11:0 am"||b=="2:0 pm"||b=="8 am"||b=="11 am"||b=="2 pm"||b=="8:00 Am"||b=="11:00 Am"||b=="2:00 Pm"||b=="8:0 Am"||b=="11:0 Am"||b=="2:0 Pm"||b=="8 Am"||b=="11 Am"||b=="2 Pm")) {
        if(b=="8:00"||b=="8:0"||b=="8"||b=="8:00AM"||b=="8:0AM"||b=="8AM"||b=="8:00am"||b=="8:0am"||b=="8am"||b=="8:00Am"||b=="8:0Am"||b=="8Am"||b=="8:00 AM"||b=="8:0 AM"||b=="8 AM"||b=="8:00 am"||b=="8:0 am"||b=="8 am"||b=="8:00 Am"||b=="8:0 Am"||b=="8 Am") {
            x._getAudi(1);
            x._getTime("08:00 AM");
            displayMovieDetails();
        }
        if(b=="11:00"||b=="11:0"||b=="11"||b=="11:00AM"||b=="11:0AM"||b=="11AM"||b=="11:00am"||b=="11:0am"||b=="11am"||b=="11:00Am"||b=="11:0Am"||b=="11Am"||b=="11:00 AM"||b=="11:0 AM"||b=="11 AM"||b=="11:00 am"||b=="11:0 am"||b=="11 am"||b=="11:00 Am"||b=="11:0 Am"||b=="11 Am") {
            x._getAudi(3);
            x._getTime("11:00 AM");
            displayMovieDetails();
        }
        if(b=="2:00"||b=="2:0"||b=="2"||b=="2:00PM"||b=="2:0PM"||b=="2PM"||b=="2:00pm"||b=="2:0pm"||b=="2pm"||b=="2:00Pm"||b=="2:0Pm"||b=="2Pm"||b=="2:00 PM"||b=="2:0 PM"||b=="2 PM"||b=="2:00 pm"||b=="2:0 pm"||b=="2 pm"||b=="2:00 Pm"||b=="2:0 Pm"||b=="2 Pm") {
            x._getAudi(2);
            x._getTime("02:00 PM");
            displayMovieDetails();
        }
    }
    else if((a=="Pathan")&&(b=="8:00"||b=="11:00"||b=="2:00"||b=="8:0"||b=="11:0"||b=="2:0"||b=="8"||b=="11"||b=="2"||b=="8:00AM"||b=="11:00AM"||b=="2:00PM"||b=="8:0AM"||b=="11:0AM"||b=="2:0PM"||b=="8AM"||b=="11AM"||b=="2PM"||b=="8:00am"||b=="11:00am"||b=="2:00pm"||b=="8:0am"||b=="11:0am"||b=="2:0pm"||b=="8am"||b=="11am"||b=="2pm"||b=="8:00Am"||b=="11:00Am"||b=="2:00Pm"||b=="8:0Am"||b=="11:0Am"||b=="2:0Pm"||b=="8Am"||b=="11Am"||b=="2Pm"||b=="8:00 AM"||b=="11:00 AM"||b=="2:00 PM"||b=="8:0 AM"||b=="11:0 AM"||b=="2:0 PM"||b=="8 AM"||b=="11 AM"||b=="2 PM"||b=="8:00 am"||b=="11:00 am"||b=="2:00 pm"||b=="8:0 am"||b=="11:0 am"||b=="2:0 pm"||b=="8 am"||b=="11 am"||b=="2 pm"||b=="8:00 Am"||b=="11:00 Am"||b=="2:00 Pm"||b=="8:0 Am"||b=="11:0 Am"||b=="2:0 Pm"||b=="8 Am"||b=="11 Am"||b=="2 Pm")) {
        if(b=="8:00"||b=="8:0"||b=="8"||b=="8:00AM"||b=="8:0AM"||b=="8AM"||b=="8:00am"||b=="8:0am"||b=="8am"||b=="8:00Am"||b=="8:0Am"||b=="8Am"||b=="8:00 AM"||b=="8:0 AM"||b=="8 AM"||b=="8:00 am"||b=="8:0 am"||b=="8 am"||b=="8:00 Am"||b=="8:0 Am"||b=="8 Am") {
            x._getAudi(2);
            x._getTime("08:00 AM");
            displayMovieDetails();
        }
        if(b=="11:00"||b=="11:0"||b=="11"||b=="11:00AM"||b=="11:0AM"||b=="11AM"||b=="11:00am"||b=="11:0am"||b=="11am"||b=="11:00Am"||b=="11:0Am"||b=="11Am"||b=="11:00 AM"||b=="11:0 AM"||b=="11 AM"||b=="11:00 am"||b=="11:0 am"||b=="11 am"||b=="11:00 Am"||b=="11:0 Am"||b=="11 Am") {
            x._getAudi(1);
            x._getTime("11:00 AM");
            displayMovieDetails();
        }
        if(b=="2:00"||b=="2:0"||b=="2"||b=="2:00PM"||b=="2:0PM"||b=="2PM"||b=="2:00pm"||b=="2:0pm"||b=="2pm"||b=="2:00Pm"||b=="2:0Pm"||b=="2Pm"||b=="2:00 PM"||b=="2:0 PM"||b=="2 PM"||b=="2:00 pm"||b=="2:0 pm"||b=="2 pm"||b=="2:00 Pm"||b=="2:0 Pm"||b=="2 Pm") {
            x._getAudi(3);
            x._getTime("02:00 PM");
            displayMovieDetails();
        }
   } 
   else if((a=="Tu Jhoothi Main Makkar")&&(b=="8:00"||b=="11:00"||b=="2:00"||b=="8:0"||b=="11:0"||b=="2:0"||b=="8"||b=="11"||b=="2"||b=="8:00AM"||b=="11:00AM"||b=="2:00PM"||b=="8:0AM"||b=="11:0AM"||b=="2:0PM"||b=="8AM"||b=="11AM"||b=="2PM"||b=="8:00am"||b=="11:00am"||b=="2:00pm"||b=="8:0am"||b=="11:0am"||b=="2:0pm"||b=="8am"||b=="11am"||b=="2pm"||b=="8:00Am"||b=="11:00Am"||b=="2:00Pm"||b=="8:0Am"||b=="11:0Am"||b=="2:0Pm"||b=="8Am"||b=="11Am"||b=="2Pm"||b=="8:00 AM"||b=="11:00 AM"||b=="2:00 PM"||b=="8:0 AM"||b=="11:0 AM"||b=="2:0 PM"||b=="8 AM"||b=="11 AM"||b=="2 PM"||b=="8:00 am"||b=="11:00 am"||b=="2:00 pm"||b=="8:0 am"||b=="11:0 am"||b=="2:0 pm"||b=="8 am"||b=="11 am"||b=="2 pm"||b=="8:00 Am"||b=="11:00 Am"||b=="2:00 Pm"||b=="8:0 Am"||b=="11:0 Am"||b=="2:0 Pm"||b=="8 Am"||b=="11 Am"||b=="2 Pm")) {
        if(b=="8:00"||b=="8:0"||b=="8"||b=="8:00AM"||b=="8:0AM"||b=="8AM"||b=="8:00am"||b=="8:0am"||b=="8am"||b=="8:00Am"||b=="8:0Am"||b=="8Am"||b=="8:00 AM"||b=="8:0 AM"||b=="8 AM"||b=="8:00 am"||b=="8:0 am"||b=="8 am"||b=="8:00 Am"||b=="8:0 Am"||b=="8 Am") {
            x._getAudi(3);
            x._getTime("08:00 AM");
            displayMovieDetails();
        }
        if(b=="11:00"||b=="11:0"||b=="11"||b=="11:00AM"||b=="11:0AM"||b=="11AM"||b=="11:00am"||b=="11:0am"||b=="11am"||b=="11:00Am"||b=="11:0Am"||b=="11Am"||b=="11:00 AM"||b=="11:0 AM"||b=="11 AM"||b=="11:00 am"||b=="11:0 am"||b=="11 am"||b=="11:00 Am"||b=="11:0 Am"||b=="11 Am") {
            x._getAudi(2);
            x._getTime("11:00 AM");
            displayMovieDetails();
        }
        if(b=="2:00"||b=="2:0"||b=="2"||b=="2:00PM"||b=="2:0PM"||b=="2PM"||b=="2:00pm"||b=="2:0pm"||b=="2pm"||b=="2:00Pm"||b=="2:0Pm"||b=="2Pm"||b=="2:00 PM"||b=="2:0 PM"||b=="2 PM"||b=="2:00 pm"||b=="2:0 pm"||b=="2 pm"||b=="2:00 Pm"||b=="2:0 Pm"||b=="2 Pm") {
            x._getAudi(1);
            x._getTime("02:00 PM");
            displayMovieDetails();
        }
   }
   else if((a=="2 States")&&(b=="8:00"||b=="11:00"||b=="5:00"||b=="8:0"||b=="11:0"||b=="5"||b=="8"||b=="11"||b=="5"||b=="8:00AM"||b=="11:00AM"||b=="5:00PM"||b=="8:0AM"||b=="11:0AM"||b=="5:0PM"||b=="8AM"||b=="11AM"||b=="5PM"||b=="8:00am"||b=="11:00am"||b=="5:00pm"||b=="8:0am"||b=="11:0am"||b=="5:0pm"||b=="8am"||b=="11am"||b=="5pm"||b=="8:00Am"||b=="11:00Am"||b=="5:00Pm"||b=="8:0Am"||b=="11:0Am"||b=="5:0Pm"||b=="8Am"||b=="11Am"||b=="5Pm"||b=="8:00 AM"||b=="11:00 AM"||b=="5:00 PM"||b=="8:0 AM"||b=="11:0 AM"||b=="5:0 PM"||b=="8 AM"||b=="11 AM"||b=="5 PM"||b=="8:00 am"||b=="11:00 am"||b=="5:00 pm"||b=="8:0 am"||b=="11:0 am"||b=="5:0 pm"||b=="8 am"||b=="11 am"||b=="5 pm"||b=="8:00 Am"||b=="11:00 Am"||b=="5:00 Pm"||b=="8:0 Am"||b=="11:0 Am"||b=="5:0 Pm"||b=="8 Am"||b=="11 Am"||b=="5 Pm")) {
        if(b=="8:00"||b=="8:0"||b=="8"||b=="8:00AM"||b=="8:0AM"||b=="8AM"||b=="8:00am"||b=="8:0am"||b=="8am"||b=="8:00Am"||b=="8:0Am"||b=="8Am"||b=="8:00 AM"||b=="8:0 AM"||b=="8 AM"||b=="8:00 am"||b=="8:0 am"||b=="8 am"||b=="8:00 Am"||b=="8:0 Am"||b=="8 Am") {
            x._getAudi(4);
            x._getTime("08:00 AM");
            displayMovieDetails();
        }
        if(b=="11:00"||b=="11:0"||b=="11"||b=="11:00AM"||b=="11:0AM"||b=="11AM"||b=="11:00am"||b=="11:0am"||b=="11am"||b=="11:00Am"||b=="11:0Am"||b=="11Am"||b=="11:00 AM"||b=="11:0 AM"||b=="11 AM"||b=="11:00 am"||b=="11:0 am"||b=="11 am"||b=="11:00 Am"||b=="11:0 Am"||b=="11 Am") {
            x._getAudi(5);
            x._getTime("11:00 AM");
            displayMovieDetails();
        }
        if(b=="5:00"||b=="5:0"||b=="5"||b=="5:00PM"||b=="5:0PM"||b=="5PM"||b=="5:00pm"||b=="5:0pm"||b=="5pm"||b=="5:00Pm"||b=="5:0Pm"||b=="5Pm"||b=="5:00 PM"||b=="5:0 PM"||b=="5 PM"||b=="5:00 pm"||b=="5:0 pm"||b=="5 pm"||b=="5:00 Pm"||b=="5:0 Pm"||b=="5 Pm") {
            x._getAudi(1);
            x._getTime("05:00 PM");
            displayMovieDetails();
        }
   }
   else if((a=="Angry Birds")&&(b=="8:00"||b=="11:00"||b=="5:00"||b=="8:0"||b=="11:0"||b=="5"||b=="8"||b=="11"||b=="5"||b=="8:00AM"||b=="11:00AM"||b=="5:00PM"||b=="8:0AM"||b=="11:0AM"||b=="5:0PM"||b=="8AM"||b=="11AM"||b=="5PM"||b=="8:00am"||b=="11:00am"||b=="5:00pm"||b=="8:0am"||b=="11:0am"||b=="5:0pm"||b=="8am"||b=="11am"||b=="5pm"||b=="8:00Am"||b=="11:00Am"||b=="5:00Pm"||b=="8:0Am"||b=="11:0Am"||b=="5:0Pm"||b=="8Am"||b=="11Am"||b=="5Pm"||b=="8:00 AM"||b=="11:00 AM"||b=="5:00 PM"||b=="8:0 AM"||b=="11:0 AM"||b=="5:0 PM"||b=="8 AM"||b=="11 AM"||b=="5 PM"||b=="8:00 am"||b=="11:00 am"||b=="5:00 pm"||b=="8:0 am"||b=="11:0 am"||b=="5:0 pm"||b=="8 am"||b=="11 am"||b=="5 pm"||b=="8:00 Am"||b=="11:00 Am"||b=="5:00 Pm"||b=="8:0 Am"||b=="11:0 Am"||b=="5:0 Pm"||b=="8 Am"||b=="11 Am"||b=="5 Pm")) {
        if(b=="8:00"||b=="8:0"||b=="8"||b=="8:00AM"||b=="8:0AM"||b=="8AM"||b=="8:00am"||b=="8:0am"||b=="8am"||b=="8:00Am"||b=="8:0Am"||b=="8Am"||b=="8:00 AM"||b=="8:0 AM"||b=="8 AM"||b=="8:00 am"||b=="8:0 am"||b=="8 am"||b=="8:00 Am"||b=="8:0 Am"||b=="8 Am") {
            x._getAudi(5);
            x._getTime("08:00 AM");
            displayMovieDetails();
        }
        if(b=="11:00"||b=="11:0"||b=="11"||b=="11:00AM"||b=="11:0AM"||b=="11AM"||b=="11:00am"||b=="11:0am"||b=="11am"||b=="11:00Am"||b=="11:0Am"||b=="11Am"||b=="11:00 AM"||b=="11:0 AM"||b=="11 AM"||b=="11:00 am"||b=="11:0 am"||b=="11 am"||b=="11:00 Am"||b=="11:0 Am"||b=="11 Am") {
            x._getAudi(4);
            x._getTime("11:00 AM");
            displayMovieDetails();
        }
        if(b=="5:00"||b=="5:0"||b=="5"||b=="5:00PM"||b=="5:0PM"||b=="5PM"||b=="5:00pm"||b=="5:0pm"||b=="5pm"||b=="5:00Pm"||b=="5:0Pm"||b=="5Pm"||b=="5:00 PM"||b=="5:0 PM"||b=="5 PM"||b=="5:00 pm"||b=="5:0 pm"||b=="5 pm"||b=="5:00 Pm"||b=="5:0 Pm"||b=="5 Pm") {
            x._getAudi(2);
            x._getTime("05:00 PM");
            displayMovieDetails();
        }
   }
   else if((a=="Ice Age")&&(b=="3:00"||b=="8:00"||b=="3:0"||b=="8:0"||b=="3"||b=="8"||b=="3:00PM"||b=="8:00PM"||b=="3:0PM"||b=="8:0PM"||b=="3PM"||b=="8PM"||b=="3:00pm"||b=="8:00pm"||b=="3:0pm"||b=="8:0pm"||b=="3pm"||b=="8pm"||b=="3:00Pm"||b=="8:00Pm"||b=="3:0Pm"||b=="8:0Pm"||b=="3Pm"||b=="8Pm"||b=="3:00 PM"||b=="8:00 PM"||b=="3:0 PM"||b=="8:0 PM"||b=="3 PM"||b=="8 PM"||b=="3:00 pm"||b=="8:00 pm"||b=="3:0 pm"||b=="8:0 pm"||b=="3 pm"||b=="8 pm"||b=="3:00 Pm"||b=="8:00 Pm"||b=="3:0 Pm"||b=="8:0 Pm"||b=="3 Pm"||b=="8 Pm")) {
        if(b=="3:00"||b=="3:0"||b=="3"||b=="3:00PM"||b=="3:0PM"||b=="3PM"||b=="3:00pm"||b=="3:0pm"||b=="3pm"||b=="3:00Pm"||b=="3:0Pm"||b=="3Pm"||b=="3:00 PM"||b=="3:0 PM"||b=="3 PM"||b=="3:00 pm"||b=="3:0 pm"||b=="3 pm"||b=="3:00 Pm"||b=="3:0 Pm"||b=="3 Pm") {
            x._getAudi(4);
            x._getTime("03:00 PM");
            displayMovieDetails();
        }
        if(b=="8:00"||b=="8:0"||b=="8"||b=="8:00PM"||b=="8:0PM"||b=="8PM"||b=="8:00pm"||b=="8:0pm"||b=="8pm"||b=="8:00Pm"||b=="8:0Pm"||b=="8Pm"||b=="8:00 PM"||b=="8:0 PM"||b=="8 PM"||b=="8:00 pm"||b=="8:0 pm"||b=="8 pm"||b=="8:00 Pm"||b=="8:0 Pm"||b=="8 Pm") {
            x._getAudi(3);
            x._getTime("08:00 PM");
            displayMovieDetails();
        }
   }
   else{
    char absurd;
    cout<<"\n\nPlease Enter Valid Time Slot !\n\n"<<endl;
    getTime(a);
   }
}
void displayMovieDetails() {
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 NORMAL CLASS                                                                     |\n";
    cout<<"|                                              ---------------------------------------------------                                                 |\n";
    cout<<"|                                         A->  |01||02||##||04||##||##||##||08||09||10||11||12||13|                                                |\n";
    cout<<"|                                              ---------------------------------------------------                                                 |\n";
    cout<<"|                                              ---------------------------------------------------                                                 |\n";
    cout<<"|                                         B->  |01||##||03||04||05||06||07||08||##||##||11||12||13|                                                |\n";
    cout<<"|                                              ---------------------------------------------------                                                 |\n";
    cout<<"|                                              ---------------------------------------------------                                                 |\n";
    cout<<"|                                         C->  |##||02||03||##||05||06||07||##||09||10||11||##||13|                                                |\n";
    cout<<"|                                              ---------------------------------------------------                                                 |\n";
    cout<<"|                                              ---------------------------------------------------                                                 |\n";
    cout<<"|                                         D->  |##||##||03||04||05||06||##||##||09||10||11||12||13|                                                |\n";
    cout<<"|                                              ---------------------------------------------------                                                 |\n";
    cout<<"|                                              ---------------------------------------------------                                                 |\n";
    cout<<"|                                         E->  |01||##||##||04||05||06||07||08||09||##||11||12||13|                                                |\n";
    cout<<"|                                              ---------------------------------------------------                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                               EXECUTIVE CLASS                                                                    |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  F->  |01||##||03||##||##||06|        |07||08||09||10||11||##||##||##||15||##||17||##||19||20||##||22|            |23||##||##||26||##||##|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  G->  |01||02||##||##||05||06|        |07||08||09||10||11||##||13||##||15||16||17||##||19||##||21||22|            |23||##||##||26||27||28|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  H->  |01||##||03||04||##||06|        |07||##||##||##||11||12||13||##||##||##||##||18||19||20||21||22|            |##||##||##||26||27||28|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  I->  |##||02||##||##||05||##|        |##||##||##||10||##||##||##||##||##||##||17||##||19||##||##||22|            |##||##||25||##||##||28|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  J->  |##||02||##||##||##||##|        |##||##||##||##||##||##||##||14||##||##||##||##||##||##||##||22|            |##||24||##||##||##||##|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 PREMIUM CLASS                                                                    |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
    cout<<"|  K->  |01||02||03||04||05||##||07||08||09||10||11||12||13||##||##||##||##||18||19||20||21||##||##||24||25||26||27||28||##||##||31||32||33|       |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
    cout<<"|  L->  |01||##||##||04||05||06||07||08||09||10||##||##||##||14||15||16||17||18||19||20||21||22||23||24||25||##||##||28||29||30||##||32||33|       |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    Sleep(500);
    seatArea();
}
void seatArea() {
    cout<<"\t\t\t\t\t _______________________________________________________________\n";
    cout<<"\t\t\t\t\t|                                                               |\n";
    cout<<"\t\t\t\t\t|     Normal Class Will Cost You Rupees 110/- Per Person        |\n";
    cout<<"\t\t\t\t\t|     Executive Class Will Cost You Rupees 230/- Per Person     |\n";
    cout<<"\t\t\t\t\t|     Premium Class Will Cost You Rupees 450/- Per Person       |\n";
    cout<<"\t\t\t\t\t|_______________________________________________________________|\n\n";
    string seatArea;
    cout<<"In Which Class You Want To Book Your Ticket : ";
    getline(cin, seatArea);
    Sleep(500);
    if(((seatArea[0]=='N'||seatArea[0]=='n')&&(seatArea[1]=='O'||seatArea[1]=='o')&&(seatArea[2]=='R'||seatArea[2]=='r')&&(seatArea[3]=='M'||seatArea[3]=='m')&&(seatArea[4]=='A'||seatArea[4]=='a')&&(seatArea[5]=='L'||seatArea[5]=='l')&&(seatArea[7]=='C'||seatArea[7]=='c')&&(seatArea[8]=='L'||seatArea[8]=='l')&&(seatArea[9]=='A'||seatArea[9]=='a')&&(seatArea[10]=='S'||seatArea[10]=='s')&&(seatArea[11]=='S'||seatArea[11]=='s'))||((seatArea[0]=='N'||seatArea[0]=='n')&&(seatArea[1]=='O'||seatArea[1]=='o')&&(seatArea[2]=='R'||seatArea[2]=='r')&&(seatArea[3]=='M'||seatArea[3]=='m')&&(seatArea[4]=='A'||seatArea[4]=='a')&&(seatArea[5]=='L'||seatArea[5]=='l'))) {
        x._getClass("Normal Class");
        normalSeatClass();
    }
    else if(((seatArea[0]=='E'||seatArea[0]=='e')&&(seatArea[1]=='X'||seatArea[1]=='x')&&(seatArea[2]=='E'||seatArea[2]=='e')&&(seatArea[3]=='C'||seatArea[3]=='c')&&(seatArea[4]=='U'||seatArea[4]=='u')&&(seatArea[5]=='T'||seatArea[5]=='t')&&(seatArea[6]=='I'||seatArea[6]=='i')&&(seatArea[7]=='V'||seatArea[7]=='v')&&(seatArea[8]=='E'||seatArea[8]=='e')&&(seatArea[9]=='C'||seatArea[9]=='c')&&(seatArea[10]=='L'||seatArea[10]=='l')&&(seatArea[11]=='A'||seatArea[11]=='a')&&(seatArea[12]=='S'||seatArea[12]=='s')&&(seatArea[13]=='S'||seatArea[13]=='s'))||((seatArea[0]=='E'||seatArea[0]=='e')&&(seatArea[1]=='X'||seatArea[1]=='x')&&(seatArea[2]=='E'||seatArea[2]=='e')&&(seatArea[3]=='C'||seatArea[3]=='c')&&(seatArea[4]=='U'||seatArea[4]=='u')&&(seatArea[5]=='T'||seatArea[5]=='t')&&(seatArea[6]=='I'||seatArea[6]=='i')&&(seatArea[7]=='V'||seatArea[7]=='v')&&(seatArea[8]=='E'||seatArea[8]=='e'))) {
        x._getClass("Executive Class");
        executiveSeatClass();
    }
    else if(((seatArea[0]=='P'||seatArea[0]=='p')&&(seatArea[1]=='R'||seatArea[1]=='r')&&(seatArea[2]=='E'||seatArea[2]=='e')&&(seatArea[3]=='M'||seatArea[3]=='m')&&(seatArea[4]=='I'||seatArea[4]=='i')&&(seatArea[5]=='U'||seatArea[5]=='u')&&(seatArea[6]=='M'||seatArea[6]=='m')&&(seatArea[8]=='C'||seatArea[8]=='c')&&(seatArea[9]=='L'||seatArea[9]=='l')&&(seatArea[10]=='A'||seatArea[10]=='a')&&(seatArea[11]=='S'||seatArea[11]=='s')&&(seatArea[12]=='S'||seatArea[12]=='s'))||((seatArea[0]=='P'||seatArea[0]=='p')&&(seatArea[1]=='R'||seatArea[1]=='r')&&(seatArea[2]=='E'||seatArea[2]=='e')&&(seatArea[3]=='M'||seatArea[3]=='m')&&(seatArea[4]=='I'||seatArea[4]=='i')&&(seatArea[5]=='U'||seatArea[5]=='u')&&(seatArea[6]=='M'||seatArea[6]=='m'))) {
        x._getClass("Premium Class");
        premiumSeatClass();
    }
    else{
        seatAreaCaller();
    }
}
void seatAreaCaller() {
    cout<<"\n\nPlease Enter a Valid Seat Class !\n\n"<<endl;
    seatArea();
}
void normalSeatClass() {
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 NORMAL CLASS                                                                     |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         A->  |01||02||##||04||##||##||##||08||09||10||11||12||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         B->  |01||##||03||04||05||06||07||08||##||##||11||12||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         C->  |##||02||03||##||05||06||07||##||09||10||11||##||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         D->  |##||##||03||04||05||06||##||##||09||10||11||12||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         E->  |01||##||##||04||05||06||07||08||09||##||11||12||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    seatBookingNormal();
}
void executiveSeatClass() {
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                               EXECUTIVE CLASS                                                                    |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  F->  |01||02||##||04||##||##|        |09||10||11||12||13||01||02||##||04||##||##||##||08||09||10||11|            |02||##||04||##||##||##|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  G->  |01||02||##||04||##||##|        |09||10||11||12||13||01||02||##||04||##||##||##||08||09||10||11|            |02||##||04||##||##||##|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  H->  |01||02||##||04||##||##|        |09||10||11||12||13||01||02||##||04||##||##||##||08||09||10||11|            |02||##||04||##||##||##|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  I->  |01||02||##||04||##||##|        |09||10||11||12||13||01||02||##||04||##||##||##||08||09||10||11|            |02||##||04||##||##||##|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  J->  |01||02||##||04||##||##|        |09||10||11||12||13||01||02||##||04||##||##||##||08||09||10||11|            |02||##||04||##||##||##|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    seatBookingExecutive();
}
void premiumSeatClass() {
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 PREMIUM CLASS                                                                    |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
    cout<<"|  K->  |01||02||##||04||##||##||07||08||09||10||11||12||13||01||02||##||04||##||##||##||08||09||10||11||05||04||03||02||##||04||##||##||##|       |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
    cout<<"|  L->  |01||02||##||04||##||##||07||08||09||10||11||12||13||01||02||##||04||##||##||##||08||09||10||11||05||04||03||02||##||04||##||##||##|       |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    seatBookingPremium();
}
void seatBookingNormal() {
    char seatChar;
    cout<<"Enter the row character : ";
    cin>>seatChar;
    if(seatChar=='A'||seatChar=='a') {
        Sleep(500);
        rowA();
    }
    else if(seatChar=='B'||seatChar=='b') {
        Sleep(500);
        rowB();
    }
    else if(seatChar=='C'||seatChar=='c') {
        Sleep(500);
        rowC();
    }
    else if(seatChar=='D'||seatChar=='d') {
        Sleep(500);
        rowD();
    }
    else if(seatChar=='E'||seatChar=='e') {
        Sleep(500);
        rowE();
    }
    else{
        cout<<"\n\nPlease Enter a Valid Seat Row (A - E) !\n";
        Sleep(500);
        seatBookingNormal();
    }
}
void seatBookingExecutive() {
    char seatChar;
    cout<<"Enter the row character : ";
    cin>>seatChar;
    if(seatChar=='F'||seatChar=='f') {
        Sleep(500);
        rowF();
    }
    else if(seatChar=='G'||seatChar=='g') {
        Sleep(500);
        rowG();
    }
    else if(seatChar=='H'||seatChar=='h') {
        Sleep(500);
        rowH();
    }
    else if(seatChar=='I'||seatChar=='i') {
        Sleep(500);
        rowI();
    }
    else if(seatChar=='J'||seatChar=='j') {
        Sleep(500);
        rowJ();
    }
    else{
        cout<<"\n\nPlease Enter a Valid Seat Row (F - J) !\n";
        Sleep(500);
        seatBookingExecutive();
    }
}
void seatBookingPremium() {
    char seatChar;
    cout<<"Enter the row character : ";
    cin>>seatChar;
    if(seatChar=='K'||seatChar=='k') {
        Sleep(500);
        rowK();
    }
    else if(seatChar=='L'||seatChar=='l') {
        Sleep(500);
        rowL();
    }
    else{
        cout<<"\n\nPlease Enter a Valid Seat Row (K or L) !\n";
        Sleep(500);
        seatBookingPremium();
    }
}
void rowA() {
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 NORMAL CLASS                                                                     |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         A->  |01||02||##||04||##||##||##||08||09||10||11||12||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";   
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    seatSelectionA();
}
void rowB() {
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 NORMAL CLASS                                                                     |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         B->  |01||##||03||04||05||06||07||08||##||##||11||12||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    seatSelectionB();
}
void rowC() {
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 NORMAL CLASS                                                                     |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         C->  |##||02||03||##||05||06||07||##||09||10||11||##||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    seatSelectionC();
}
void rowD() {
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 NORMAL CLASS                                                                     |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         D->  |##||##||03||04||05||06||##||##||09||10||11||12||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";   
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    seatSelectionD();
}
void rowE() {
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 NORMAL CLASS                                                                     |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         E->  |01||##||##||04||05||06||07||08||09||##||11||12||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    seatSelectionE();
}
void rowF() {
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                               EXECUTIVE CLASS                                                                    |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  F->  |01||##||03||##||##||06|        |07||08||09||10||11||##||##||##||15||##||17||##||19||20||##||22|            |23||##||##||26||##||##|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    seatSelectionF();
}
void rowG() {
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                               EXECUTIVE CLASS                                                                    |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  G->  |01||02||##||##||05||06|        |07||08||09||10||11||##||13||##||15||16||17||##||19||##||21||22|            |23||##||##||26||27||28|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    seatSelectionG();
}
void rowH() {
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                               EXECUTIVE CLASS                                                                    |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  H->  |01||##||03||04||##||06|        |07||##||##||##||11||12||13||##||##||##||##||18||19||20||21||22|            |##||##||##||26||27||28|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    seatSelectionH();
}
void rowI() {
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                               EXECUTIVE CLASS                                                                    |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  I->  |##||02||##||##||05||##|        |##||##||##||10||##||##||##||##||##||##||17||##||19||##||##||22|            |##||##||25||##||##||28|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    seatSelectionI();
}
void rowJ() {
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                               EXECUTIVE CLASS                                                                    |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  J->  |##||02||##||##||##||##|        |##||##||##||##||##||##||##||14||##||##||##||##||##||##||##||22|            |##||24||##||##||##||##|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    seatSelectionJ();
}
void rowK() {
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 PREMIUM CLASS                                                                    |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
    cout<<"|  K->  |01||02||03||04||05||##||07||08||09||10||11||12||13||##||##||##||##||18||19||20||21||##||##||24||25||26||27||28||##||##||31||32||33|       |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    seatSelectionK();
}
void rowL() {
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 PREMIUM CLASS                                                                    |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
    cout<<"|  L->  |01||##||##||04||05||06||07||08||09||10||##||##||##||14||15||16||17||18||19||20||21||22||23||24||25||##||##||28||29||30||##||32||33|       |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";    
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    seatSelectionL();
}
void seatSelectionA() {
    int seatCount;
    cout<<"How Many Seat You Want To Book (MAX 9) : ";
    cin>>seatCount;
    if(seatCount>9) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount==10) {
                cout<<"\nNormal Class :\n     Row B\n     Row E\n\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='B'||fRow=='b' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputB(seatCount);
                }
                else if(fRow=='E'||fRow=='e' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputE(seatCount);
                }
                else if(fRow=='F'||fRow=='f' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=11&&seatCount<=15) {
                cout<<"\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='F'||fRow=='f' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount==16) {
                cout<<"\nExecutive Class :\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=17&&seatCount<=20) {
                cout<<"\nExecutive Class :\n     Row G\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputG(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount==25) {
                string Pyn;
                cout<<"\nPremium Class :\n     Row L\n\n";
                cin>>Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')) {
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                seatSelectionA();
            }
        }
    }
    else {
        Sleep(500);
        x._getCountOfSeats(seatCount);
        seatInputA(seatCount);
    }
}
void seatInputA(int seatCount) {
    cout<<"\n\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 NORMAL CLASS                                                                     |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         A->  |01||02||##||04||##||##||##||08||09||10||11||12||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";   
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    int cnt;
    for(int i=0; i<=seatCount-1; i++) {
        problemsolverA(i, seatCount);
    }
}
int problemsolverA(int i, int seatCount) {
    int seatNumber[9], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=03&&tempSeatNumber!=05&&tempSeatNumber!=06&&tempSeatNumber!=07&&tempSeatNumber!=3&&tempSeatNumber!=5&&tempSeatNumber!=6&&tempSeatNumber!=7)&&(tempSeatNumber<=13&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    seatInputA(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);   
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        seatInputA(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        x._getClass("Normal Class");
        x._getRow('A'); // Optimized Its Use
        infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void seatSelectionB() {
    int seatCount;
    cout<<"How Many Seat You Want To Book (MAX 10) : ";
    cin>>seatCount;
    if(seatCount>10) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount>=11&&seatCount<=15) {
                cout<<"\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='F'||fRow=='f' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount==16) {
                cout<<"\nExecutive Class :\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=17&&seatCount<=20) {
                cout<<"\nExecutive Class :\n     Row G\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputG(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
             else if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')) {
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    seatSelectionB();
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                seatSelectionB();
            }
        }
    }
    else {
        Sleep(500);
        x._getCountOfSeats(seatCount);
        seatInputB(seatCount);
    }
}
void seatInputB(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 NORMAL CLASS                                                                     |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         B->  |01||##||03||04||05||06||07||08||##||##||11||12||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        problemsolverB(i, seatCount);
    }
}
int problemsolverB(int i, int seatCount) { // Alert : User can enter 09
    int seatNumber[10], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=02&&tempSeatNumber!=9&&tempSeatNumber!=10&&tempSeatNumber!=2)&&(tempSeatNumber<=13&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    seatInputB(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        seatInputB(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        x._getClass("Normal Class");
        x._getRow('B'); // Optimized Its Use
        infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void seatSelectionC() {
    int seatCount;
    cout<<"How Many Seat You Want To Book (MAX 9) : ";
    cin>>seatCount;
    if(seatCount>9) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount==10) {
                cout<<"\nNormal Class :\n     Row B\n     Row E\n\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='B'||fRow=='b' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputB(seatCount);
                }
                else if(fRow=='E'||fRow=='e' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputE(seatCount);
                }
                else if(fRow=='F'||fRow=='f' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=11&&seatCount<=15) {
                cout<<"\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='F'||fRow=='f' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount==16) {
                cout<<"\nExecutive Class :\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=17&&seatCount<=20) {
                cout<<"\nExecutive Class :\n     Row G\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')) {
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    seatSelectionC();
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                seatSelectionC();
            }
        }
    }
    else {
        Sleep(500);
        x._getCountOfSeats(seatCount);
        seatInputC(seatCount);
    }
}
void seatInputC(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 NORMAL CLASS                                                                     |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         C->  |##||02||03||##||05||06||07||##||09||10||11||##||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        problemsolverC(i, seatCount);
    }
}
int problemsolverC(int i, int seatCount) { // Alert : User can enter 08
    int seatNumber[9], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=01&&tempSeatNumber!=04&&tempSeatNumber!=8&&tempSeatNumber!=12&&tempSeatNumber!=1&&tempSeatNumber!=4)&&(tempSeatNumber<=13&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    seatInputC(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        seatInputC(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        x._getClass("Normal Class");
        x._getRow('C'); // Optimized Its Use
        infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void seatSelectionD() {
    int seatCount;
    cout<<"How Many Seat You Want To Book (MAX 9) : ";
    cin>>seatCount;
    if(seatCount>9) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount==10) {
                cout<<"\nNormal Class :\n     Row B\n     Row E\n\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='B'||fRow=='b' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputB(seatCount);
                }
                else if(fRow=='E'||fRow=='e' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputE(seatCount);
                }
                else if(fRow=='F'||fRow=='f' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=11&&seatCount<=15) {
                cout<<"\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='F'||fRow=='f' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount==16) {
                cout<<"\nExecutive Class :\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=17&&seatCount<=20) {
                cout<<"\nExecutive Class :\n     Row G\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')) {
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    seatSelectionD();
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                seatSelectionD();
            }
        }
    }
    else {
        Sleep(500);
        x._getCountOfSeats(seatCount);
        seatInputD(seatCount);
    }
}
void seatInputD(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 NORMAL CLASS                                                                     |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         D->  |##||##||03||04||05||06||##||##||09||10||11||12||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";   
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        problemsolverD(i, seatCount);
    }
}
int problemsolverD(int i, int seatCount) { // Alert : User can enter 08
    int seatNumber[9], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=01&&tempSeatNumber!=02&&tempSeatNumber!=07&&tempSeatNumber!=8&&tempSeatNumber!=1&&tempSeatNumber!=2&&tempSeatNumber!=7)&&(tempSeatNumber<=13&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    seatInputD(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        seatInputD(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        x._getClass("Normal Class");
        x._getRow('D'); // Optimized Its Use
        infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void seatSelectionE() {
    int seatCount;
    cout<<"How Many Seat You Want To Book (MAX 10) : ";
    cin>>seatCount;
    if(seatCount>10) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount>=11&&seatCount<=15) {
                cout<<"\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='F'||fRow=='f' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount==16) {
                cout<<"\nExecutive Class :\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=17&&seatCount<=20) {
                cout<<"\nExecutive Class :\n     Row G\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
             else if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')) {
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    seatSelectionE();
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                seatSelectionE();
            }
        }
    }
    else {
        Sleep(500);
        x._getCountOfSeats(seatCount);
        seatInputE(seatCount);
    }
}
void seatInputE(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 NORMAL CLASS                                                                     |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         E->  |01||##||##||04||05||06||07||08||09||##||11||12||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        problemsolverE(i, seatCount);
    }
}
int problemsolverE(int i, int seatCount) {
    int seatNumber[10], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=02&&tempSeatNumber!=03&&tempSeatNumber!=10&&tempSeatNumber!=2&&tempSeatNumber!=3)&&(tempSeatNumber<=13&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    seatInputE(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        seatInputE(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        x._getClass("Normal Class");
        x._getRow('E'); // Optimized Its Use
        infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void seatSelectionF() {
    int seatCount;
    cout<<"How Many Seat You Want To Book (MAX 15) : ";
    cin>>seatCount;
    if(seatCount>15) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount==16) {
                cout<<"\nExecutive Class :\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=17&&seatCount<=20) {
                cout<<"\nExecutive Class :\n     Row G\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
             else if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')) {
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    seatSelectionF();
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                seatSelectionF();
            }
        }
    }
    else {
        Sleep(500);
        x._getCountOfSeats(seatCount);
        seatInputF(seatCount);
    }
}
void seatInputF(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                               EXECUTIVE CLASS                                                                    |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  F->  |01||##||03||##||##||06|        |07||08||09||10||11||##||##||##||15||##||17||##||19||20||##||22|            |23||##||##||26||##||##|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        problemsolverF(i, seatCount);
    }
}
int problemsolverF(int i, int seatCount) {
    int seatNumber[15], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=02&&tempSeatNumber!=04&&tempSeatNumber!=05&&tempSeatNumber!=12&&tempSeatNumber!=13&&tempSeatNumber!=14&&tempSeatNumber!=16&&tempSeatNumber!=18&&tempSeatNumber!=21&&tempSeatNumber!=24&&tempSeatNumber!=25&&tempSeatNumber!=27&&tempSeatNumber!=28&&tempSeatNumber!=2&&tempSeatNumber!=4&&tempSeatNumber!=5)&&(tempSeatNumber<=28&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    seatInputF(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        seatInputF(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        x._getClass("Executive Class");
        x._getRow('F'); // Optimized Its Use
        infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void seatSelectionG() {
    int seatCount;
    cout<<"How Many Seat You Want To Book (MAX 20) : ";
    cin>>seatCount;
    if(seatCount>20) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')) {
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    seatSelectionG();
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                seatSelectionG();
            }
        }
    }
    else {
        Sleep(500);
        x._getCountOfSeats(seatCount);
        seatInputG(seatCount);
    }
}
void seatInputG(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                               EXECUTIVE CLASS                                                                    |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  G->  |01||02||##||##||05||06|        |07||08||09||10||11||##||13||##||15||16||17||##||19||##||21||22|            |23||##||##||26||27||28|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        problemsolverG(i, seatCount);
    }
}
int problemsolverG(int i, int seatCount) {
    int seatNumber[20], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=03&&tempSeatNumber!=04&&tempSeatNumber!=12&&tempSeatNumber!=14&&tempSeatNumber!=18&&tempSeatNumber!=20&&tempSeatNumber!=24&&tempSeatNumber!=25&&tempSeatNumber!=3&&tempSeatNumber!=4)&&(tempSeatNumber<=28&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    seatInputG(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        seatInputG(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        x._getClass("Executive Class");
        x._getRow('G'); // Optimized Its Use
        infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void seatSelectionH() {
    int seatCount;
    cout<<"How Many Seat You Want To Book (MAX 16) : ";
    cin>>seatCount;
    if(seatCount>16) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount>=17&&seatCount<=20) {
                cout<<"\nExecutive Class :\n     Row G\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')) {
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    seatSelectionH();
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                seatSelectionH();
            }
        }
    }
    else {
        Sleep(500);
        x._getCountOfSeats(seatCount);
        seatInputH(seatCount);
    }
}
void seatInputH(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                               EXECUTIVE CLASS                                                                    |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  H->  |01||##||03||04||##||06|        |07||##||##||##||11||12||13||##||##||##||##||18||19||20||21||22|            |##||##||##||26||27||28|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        problemsolverH(i, seatCount);
    }
}
int problemsolverH(int i, int seatCount) { // Alert : User can enter 08 and 09
    int seatNumber[16], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=02&&tempSeatNumber!=05&&tempSeatNumber!=2&&tempSeatNumber!=5&&tempSeatNumber!=8&&tempSeatNumber!=9&&tempSeatNumber!=10&&tempSeatNumber!=14&&tempSeatNumber!=15&&tempSeatNumber!=16&&tempSeatNumber!=17&&tempSeatNumber!=23&&tempSeatNumber!=24&&tempSeatNumber!=25)&&(tempSeatNumber<=28&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    seatInputH(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        seatInputH(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        x._getClass("Executive Class");
        x._getRow('H'); // Optimized Its Use
        infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void seatSelectionI() {
    int seatCount;
    cout<<"How Many Seat You Want To Book (MAX 8) : ";
    cin>>seatCount;
    if(seatCount>8) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount==9||seatCount==10) {
                cout<<"\nNormal Class :\n     Row B\n     Row E\n\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='B'||fRow=='b' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputB(seatCount);
                }
                else if(fRow=='E'||fRow=='e' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputE(seatCount);
                }
                else if(fRow=='F'||fRow=='f' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=11&&seatCount<=15) {
                cout<<"\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='F'||fRow=='f' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount==16) {
                cout<<"\nExecutive Class :\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=17&&seatCount<=20) {
                cout<<"\nExecutive Class :\n     Row G\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')) {
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    seatSelectionI();
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                seatSelectionI();
            }
        }
    }
    else {
        Sleep(500);
        x._getCountOfSeats(seatCount);
        seatInputI(seatCount);
    }
}
void seatInputI(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                               EXECUTIVE CLASS                                                                    |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  I->  |##||02||##||##||05||##|        |##||##||##||10||##||##||##||##||##||##||17||##||19||##||##||22|            |##||##||25||##||##||28|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        problemsolverI(i, seatCount);
    }
}
int problemsolverI(int i, int seatCount) { // Alert : User can enter 08and 09
    int seatNumber[8], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=01&&tempSeatNumber!=1&&tempSeatNumber!=03&&tempSeatNumber!=3&&tempSeatNumber!=04&&tempSeatNumber!=4&&tempSeatNumber!=06&&tempSeatNumber!=6&&tempSeatNumber!=07&&tempSeatNumber!=7&&tempSeatNumber!=8&&tempSeatNumber!=9&&tempSeatNumber!=11&&tempSeatNumber!=12&&tempSeatNumber!=13&&tempSeatNumber!=14&&tempSeatNumber!=15&&tempSeatNumber!=16&&tempSeatNumber!=18&&tempSeatNumber!=20&&tempSeatNumber!=21&&tempSeatNumber!=23&&tempSeatNumber!=24&&tempSeatNumber!=26&&tempSeatNumber!=27)&&(tempSeatNumber<=28&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    seatInputI(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        seatInputI(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        x._getClass("Executive Class");
        x._getRow('I'); // Optimized Its Use
        infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void seatSelectionJ() {
    int seatCount;
    cout<<"How Many Seat You Want To Book (MAX 4) : ";
    cin>>seatCount;
    if(seatCount>4) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount>=4&&seatCount<=10) {
                cout<<"\nNormal Class :\n     Row B\n     Row E\n\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='B'||fRow=='b' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputB(seatCount);
                }
                else if(fRow=='E'||fRow=='e' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputE(seatCount);
                }
                else if(fRow=='F'||fRow=='f' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=11&&seatCount<=15) {
                cout<<"\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='F'||fRow=='f' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount==16) {
                cout<<"\nExecutive Class :\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=17&&seatCount<=20) {
                cout<<"\nExecutive Class :\n     Row G\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputG(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    x._getCountOfSeats(seatCount);
                    x._getRow(fRow);
                    seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
            else if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')) {
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    seatSelectionJ();
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                seatSelectionJ();
            }
        }
    }
    else {
        Sleep(500);
        x._getCountOfSeats(seatCount);
        seatInputJ(seatCount);
    }
}
void seatInputJ(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                               EXECUTIVE CLASS                                                                    |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  J->  |##||02||##||##||##||##|        |##||##||##||##||##||##||##||14||##||##||##||##||##||##||##||22|            |##||24||##||##||##||##|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        problemsolverJ(i, seatCount);
    }
}
int problemsolverJ(int i, int seatCount) {
    int seatNumber[4], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if(tempSeatNumber==02||tempSeatNumber==2||tempSeatNumber==14||tempSeatNumber==22||tempSeatNumber==24) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    seatInputJ(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        seatInputJ(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        x._getClass("Executive Class");
        x._getRow('J'); // Optimized Its Use
        infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void seatSelectionK() {
    int seatCount;
    cout<<"How Many Seat You Want To Book (MAX 24) : ";
    cin>>seatCount;
    if(seatCount>24) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    x._getCountOfSeats(seatCount);
                    seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')) {
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    seatSelectionK();
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                seatSelectionK();
            }
        }
    }
    else {
        Sleep(500);
        x._getCountOfSeats(seatCount);
        seatInputK(seatCount);
    }
}
void seatInputK(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 PREMIUM CLASS                                                                    |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
    cout<<"|  K->  |01||02||03||04||05||##||07||08||09||10||11||12||13||##||##||##||##||18||19||20||21||##||##||24||25||26||27||28||##||##||31||32||33|       |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        problemsolverK(i, seatCount);
    }
}
int problemsolverK(int i, int seatCount) {
    int seatNumber[24], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=06&&tempSeatNumber!=6&&tempSeatNumber!=14&&tempSeatNumber!=15&&tempSeatNumber!=16&&tempSeatNumber!=17&&tempSeatNumber!=22&&tempSeatNumber!=23&&tempSeatNumber!=29&&tempSeatNumber!=30)&&(tempSeatNumber<=33&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    seatInputK(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        seatInputK(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        x._getClass("Premium Class");
        x._getRow('K'); // Optimized Its Use
        infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void seatSelectionL() {
    int seatCount;
    cout<<"How Many Seat You Want To Book (MAX 25) : ";
    cin>>seatCount;
    if(seatCount>25) {
        string yn;
        cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
        cout<<"Do You Prefer to Book Any Lesser Number Of Seat Than "<<seatCount;
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            seatArea();
        }
        else if((yn[0]=='N'||yn[0]=='n')&&(yn[1]=='O'||yn[1]=='o')) {
            starter();
        }
        else {
            Sleep(500);
            cout<<"Invalid Input !"<<endl;
            Sleep(700);
            seatSelectionL();
        }
    }
    else {
        Sleep(500);
        x._getCountOfSeats(seatCount);
        seatInputL(seatCount);
    }
}
void seatInputL(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 PREMIUM CLASS                                                                    |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
    cout<<"|  L->  |01||##||##||04||05||06||07||08||09||10||##||##||##||14||15||16||17||18||19||20||21||22||23||24||25||##||##||28||29||30||##||32||33|       |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";    
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        problemsolverL(i, seatCount);
    }
}
int problemsolverL(int i, int seatCount) {
    int seatNumber[25], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=02&&tempSeatNumber!=2&&tempSeatNumber!=03&&tempSeatNumber!=3&&tempSeatNumber!=11&&tempSeatNumber!=12&&tempSeatNumber!=13&&tempSeatNumber!=26&&tempSeatNumber!=27&&tempSeatNumber!=31)&&(tempSeatNumber<=33&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    seatInputL(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        seatInputL(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        x._getClass("Premium Class");
        x._getRow('L'); // Optimized Its Use
        infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void infoGather(int a[], int seatCount) {
    int seatNum[seatCount];
    for(int i=0; i<=seatCount-1; i++) {
    seatNum[i] = a[i];
    }
    string date = x._fetchDate();
    string time = x._fetchTime();
    string movie = x._fetchMovieName();
    string bClass = x._fetchClass();
    char row = x._fetchRow();
    int nOs = x._fetchCountOfSeats();
    int audi = x._fetchAudi();
    long long phNo = inputPhno();
    Sleep(500);
    double price;
    if(bClass=="Normal Class") {
        cout<<"\n\nPrice Of "<<nOs<<" Tickets => (110 x "<<nOs<<") + 18% GST = "<<((110*nOs))+((110*nOs)*(18/100.00))<<" Rupees";
        price = ((110*nOs))+((110*nOs)*(18/100.00));
        x._getPriceOfTicket(price);
        y._getPriceOfTicket(price);
    }
    else if(bClass=="Executive Class") {
        cout<<"\n\nPrice Of "<<nOs<<" Tickets => (230 x "<<nOs<<") + 18% GST = "<<((230*nOs))+((230*nOs)*(18/100.00))<<" Rupees";
        price = ((230*nOs))+((230*nOs)*(18/100.00));
        x._getPriceOfTicket(price);
        y._getPriceOfTicket(price);
    }
    else if(bClass=="Premium Class") {
        cout<<"\n\nPrice Of "<<nOs<<" Tickets => (450 x "<<nOs<<") + 18% GST = "<<((450*nOs))+((450*nOs)*(18/100.00))<<" Rupees";
        price = ((450*nOs))+((450*nOs)*(18/100.00));
        x._getPriceOfTicket(price);
        y._getPriceOfTicket(price);
    }
    double pricef = x._fetchPriceOfTicket();
    Sleep(500);
    int dots = 0, t=0;
    cout << "\n\nPlease wait";
    while (t<=10) {
        for (int i=0; i<dots; ++i) {
            cout << ".";
        }
        Sleep(500);
        for (int i=0; i<dots; ++i) {
            cout << "\b \b";
        }
        ++dots;
        if(dots>3) {
            dots=0;
        }
        t++;
    }
    Sleep(1000);
    system("cls");
    Sleep(1500);
    cout<<"_____________________________________\n\n";
    Sleep(40);
    cout<<"\t MOVIE TICKET DETAILS  \n";
    Sleep(40);
    cout<<"\t\tAU\n";
    Sleep(40);
    cout<<"\n";
    Sleep(40);
    cout<<"     MOVIE\t   "<<movie<<"\n";
    Sleep(40);
    cout<<"     DATE\t   "<<date<<"\n";
    Sleep(40);
    cout<<"     TIME\t   "<<time<<"\n";
    Sleep(40);
    cout<<"     CLASS\t   "<<bClass<<"\n";
    Sleep(40);
    cout<<"     AUDI\t   "<<audi<<"\n";
    Sleep(40);
    cout<<"     Ph No\t   +91-"<<phNo<<"\n";
    Sleep(40);
    cout<<"     -----------------------------\n";
    Sleep(40);
    cout<<"     NUMBER OF SEATS\t   "<<nOs<<"\n\n";
    Sleep(40);
    cout<<"     Price\t   "<<pricef<<" Rupees\n\n";
    Sleep(40);
    cout<<"\t   CONFIRMED SEATS ARE\n\n";
    Sleep(40);
    for(int i=0; i<=seatCount-1; i++) {
        cout<<"\t["<<row<<"-"<<a[i]<<"] ";
        if(i==2||i==5||i==8||i==11||i==14||i==17||i==20||i==23) {
            cout<<"\n";
        }
    }
    Sleep(40);
    cout<<"\n\n_____________________________________\n\n";
    cout<<"\n";
    Sleep(1000);
    string yn;
    cout<<"\nProceed To Pay The Amount (Yes/No) : ";
    cin>>yn;
    if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
        Sleep(1500);
        system("cls");
        int permission = paymentLogin(a, seatCount, phNo);
        if(permission==1) {
            infoGather(a, seatCount);
        }
        else {
            printTicketCaller(a, seatCount, phNo);
        }
    }
    else if ((yn[0]=='N'||yn[0]=='n')&&(yn[1]=='O'||yn[1]=='o')){
        Sleep(500);
        cout<<"Your Ticket Is Cancelled !";
        Sleep(700);
        starter();
    }
    else {
        Sleep(500);
        cout<<"Invalid Input !"<<endl;
        Sleep(700);
        infoGather(a, seatCount);
    }
}
void printTicketCaller(int a[], int seatCount, long long phNo) {
    int seatNum[seatCount];
    for(int i=0; i<=seatCount-1; i++) {
    seatNum[i] = a[i];
    }
    string date = x._fetchDate();
    string time = x._fetchTime();
    string movie = x._fetchMovieName();
    string bClass = x._fetchClass();
    char row = x._fetchRow();
    int nOs = x._fetchCountOfSeats();
    int audi = x._fetchAudi();
    Sleep(1000);
    int dots = 0, t=0;
    cout << "\n\nTransaction In Progress";
    while (t<=15) {
        for (int i=0; i<dots; ++i) {
            cout << ".";
        }
        Sleep(500);
        for (int i=0; i<dots; ++i) {
            cout << "\b \b";
        }
        ++dots;
        if(dots>3) {
            dots=0;
        }
        t++;
    }
    string prompt = "\n\n\033[32m PAYMENT_STATUS\033[0m : Successful";
    for(int i=0; i<=prompt.size(); i++) {
        Sleep(30);
        cout<<prompt[i];
    }
    Sleep(1000);
    printTicket(movie, date, time, bClass, row, nOs, seatNum, phNo, audi);
}
long long inputPhno() {
    long long tempPhNo, phNo;
    cout<<"You Are Just One Step Away To Book Your Seats !\n\n"<<endl;
    Sleep(500);
    cout<<"Please Enter Your Mobile Number : +91-";
    cin>>tempPhNo;
    if(tempPhNo>=1111111111&&tempPhNo<=9999999999) {
        phNo = tempPhNo;
    }
    else {
        inputPhno();
    }
    return phNo;
}
void printTicket(string tic_Name, string tic_Date, string tic_time, string tic_bClass, char tic_row, int tic_nOs, int tic_seatNum[], long long tic_phNo, int audi) {
    system("cls");
    system("color 0F");
    long long number = tic_phNo;
    long long digit[10];
    for(int i=0; i<10; i++) {
        digit[i]=number%10;
        number/=10;
    }
    long long tic_Id[26];
    tic_Id[0] = {0};
    for(int i=1, j=0; i<=tic_nOs, j<=tic_nOs-1; i++, j++) {
        tic_Id[i] = (((digit[i]*8)*10)+(digit[i]*7));
        cout<<"\t\t\t\t\t_______________________________________________________________\n\n";
        cout<<"\t\t\t\t\t\t\t\tMOVIE TICKET  #"<<i<<"\n\n";
        cout<<"\t\t\t\t\t\t\t      [Ticket Id : "<<tic_Id[i]<<"]\n\n";
        cout<<"\t\t\t\t\tMOVIE NAME : "<<tic_Name<<"\t\t\tDATE : "<<tic_Date<<"\n";
        cout<<"\t\t\t\t\tTIME : "<<tic_time<<"\t\t\t\tAUDI : "<<audi<<"\n";
        cout<<"\t\t\t\t\tCLASS : "<<tic_bClass<<"\t\t\tSeat Number : "<<tic_row<<"-"<<tic_seatNum[j]<<"\n";
        cout<<"\t\t\t\t\t_______________________________________________________________\n\n";
        cout<<"\t\t\t\t\t----------------------------------------------------------------\n\n";
        Sleep(900);
    }
    cout<<"\n\nCongratulations ! Your Ticket Has Been Booked Successfully."<<endl;
    myDataWrite(tic_bClass, tic_Date, tic_Id, tic_Name, tic_nOs, tic_phNo, tic_row, tic_seatNum, tic_time, audi);
}
void myDataWrite(string tic_bClass, string tic_Date, long long tic_Id[], string tic_Name, int tic_nOs, long long tic_phNo, char tic_row, int tic_seatNum[], string tic_time, int audi) {
    double price = y._fetchPriceOfTicket();
    fstream writeMyData;
    writeMyData.open("myMovieDet.txt", ios::app);
    if(writeMyData.is_open()) {
        writeMyData<<"Ticket Id : ";
    for(int i=1; i<=tic_nOs; i++) {
        writeMyData<<tic_Id[i]<<" ";
    }
    writeMyData<<"\nMovie Name : "<<tic_Name<<endl;
    writeMyData<<"Date : "<<tic_Date<<endl;
    writeMyData<<"Time Slot : "<<tic_time<<endl;
    writeMyData<<"Auditorium Number : "<<audi<<endl;
    writeMyData<<"Number of Seat(s) : "<<tic_nOs<<endl;
    writeMyData<<"Seat(S)  : ";
    for(int i=0; i<=tic_nOs-1; i++) {
        writeMyData<<"["<<tic_row<<"-"<<tic_seatNum[i]<<"] ";
    }
    writeMyData<<"\nPrice : "<<price<<endl;
    writeMyData<<"Class Booked : "<<tic_bClass<<endl;
    writeMyData<<"Phone Number : +91-"<<tic_phNo<<endl;
    writeMyData<<"Booked Row : "<<tic_row<<"\n"<<endl;
    writeMyData.close();
    }
}
void fetchBooking() {
    string search, falseSearch;
    int offset, count=0, lineFound=0;
    string line;
    ifstream readMyData;
    readMyData.open("myMovieDet.txt");
    Sleep(1000);
    cout<<"\nPlease Enter Your Ticket(s) Id(s) : ";
    getline(cin, falseSearch);
    search = "Ticket Id : "+falseSearch;
    if (readMyData.is_open()) {
        while(!readMyData.eof()) {
            getline(readMyData, line);
            lineFound++;
            if((offset=line.find(search, 0))!=string::npos) {
                Sleep(500);
                cout<<"\n"<<search<<", Exists !\n\n";
                Sleep(500);
                count++;
                break;
            }
        }
        if(count==0) {
            Sleep(1000);
            cout<<search<<", Doesn't Exists !";
            Sleep(1000);
            main();
        }
        readMyData.close();
    }
    else {
        cerr<<"Error #1 In Opening File !";
    }
    y._getLineFound(lineFound);
    w._getTktLine(lineFound);
    string yn;
    cout<<"Do You Want To Cancel Your Booking (Yes/No) : ";
    cin>>yn;
    if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
        Sleep(1000);
        deduction();
        cancelBooking(lineFound, falseSearch);
    }
    else {
        Sleep(1000);
        cout<<"Continue Booking Your Seat ! "<<endl;
        Sleep(1000);
        main();
    }
}
void deduction() {
    int lineFound = w._fetchTktLine();
    lineFound += 6;
    ifstream file("myMovieDet.txt");
    string line;
    for(int i=0; i<=lineFound; i++) {
        getline(file, line);
        if(i==lineFound) {
            break;
        }
    }
    string cutOutPrice = line.erase(0, 8);
    file.close();
    double actualPrice;
    actualPrice = stod(cutOutPrice);
    double chargePrice = (0.05)*(actualPrice);
    double price = actualPrice - chargePrice;
    string fprice = to_string(price);
    lineFound = 0;
    lineFound += w._fetchIdLine();
    addMoneyDeducted(price, lineFound, actualPrice);
}
void cancelBooking(int lineFound, string falseSearch) {
    ifstream inputFile("myMovieDet.txt");
    if (!inputFile) {
        cout << "Failed to open input file" << endl;
    }
    ofstream outputFile("myMovieDetF.txt");
    if (!outputFile) {
        cout << "Failed to open output file" << endl;
    }
    int lineNumber = lineFound; 
    string _line;
    int currentLineNumber = 1;
    while (getline(inputFile, _line)) {
        if (currentLineNumber != lineNumber && currentLineNumber != lineNumber+1 && currentLineNumber != lineNumber+2 && currentLineNumber != lineNumber+3 && currentLineNumber != lineNumber+4 && currentLineNumber != lineNumber+5 && currentLineNumber != lineNumber+6&& currentLineNumber != lineNumber+7&& currentLineNumber != lineNumber+8&& currentLineNumber != lineNumber+9&& currentLineNumber != lineNumber+10) {
            outputFile<<_line<<endl;
        }
        currentLineNumber++;

    }
    inputFile.close();
    outputFile.close();
    remove("myMovieDet.txt");
    rename("myMovieDetF.txt", "myMovieDet.txt");
    cout<<"\nYour Booking With Ticket Id : "<<falseSearch<<", Is Cancelled\n"<<endl;
}
int paymentLogin(int a[], int seatCount, long long phNo) {
    system("cls");
    system("color 0F");
    string _yn1;
    cout<<"\nYou Need To Login to Proceed For Payment, Shall We (Yes/No) : ";
    cin>>_yn1;
    if((_yn1[0]=='Y'||_yn1[0]=='y')&&(_yn1[1]=='E'||_yn1[1]=='e')&&(_yn1[2]=='S'||_yn1[2]=='s')) {
        system("cls");
        Sleep(700);
        cout<<"\nFor Security Reasons, You Need To Re-Enter Your Unique Id\n\n";
        Sleep(700);
        long long FinalBankBalance;
        string sameUserOrNot = y._fetchFalseSearch();
        int checkExistence = userExistence("NULL");
        string sameUserOrNot_2 = y._fetchFalseSearch();
        if((checkExistence==0)&&(sameUserOrNot==sameUserOrNot_2)) {
            int confirmPassword = passwordMatch(); 
            if(confirmPassword==0) {
                string prompt = "\n\n\t\033[32m ACCESS_REQUEST \033[0m : Granted !\n\n";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(500);
                string fBankBalance = returnBankBalance();
                FinalBankBalance = convertToInt(fBankBalance);
            
                double TicketPrice = y._fetchPriceOfTicket();
                if((FinalBankBalance>TicketPrice)||(FinalBankBalance==TicketPrice)) {
                    double newBankBalance = FinalBankBalance - TicketPrice;
                    x._getNewBankBalance(newBankBalance);
                    y._getNewBankBalance(newBankBalance);
                    int lineFound = y._fetchLineFound();
                    string filename = "userDet.txt";
                    int line_number = lineFound+3;
                    string newBankBalance_String = to_string(newBankBalance);
                    string new_line = newBankBalance_String;
                    string raw_str = "Bank Balance of The User : ";
                    new_line = raw_str + newBankBalance_String;
                    ifstream infile(filename);
                    string temp_filename = "userDetF.txt";
                    ofstream outfile(temp_filename);
                    string line;
                    int current_line_number = 1;
                    while (getline(infile, line)) {
                        if (current_line_number == line_number) {

                            line = new_line;
                        }

                        outfile << line << endl;
                        current_line_number++;
                    }
                    infile.close();
                    outfile.close();
                    remove(filename.c_str());
                    rename(temp_filename.c_str(), filename.c_str());
                }
                else {
                    string yn;
                    Sleep(500);
                    cout<<"We Found That There isn't Enough Balance In Your Account To Pay For The Ticket\n\n";
                    cout<<"Relax ! You Can Earn Money By Playing A Game, After That You'll be Able to Continue Booking Your Ticket\n\n";
                    cout<<"Do You Wish To Play/Earn (Yes/No) : ";
                    cin>>yn;
                    if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
                        QuizGameModule();
                        paymentLogin(a, seatCount, phNo);
                    }
                    else if((yn[0]=='N'||yn[0]=='n')&&(yn[1]=='O'||yn[1]=='o')){
                        cout<<"\n\n\nWe Are Sorry To Say That Your Booking Session Is Terminated Due To Low Balance !\n\n\n";
                        passbook();
                        starter();
                    }
                    else {
                        Sleep(500);
                        cout<<"Invalid Input !";
                        Sleep(700);
                        paymentLogin(a, seatCount, phNo);
                    }
                }
            }
            else if(confirmPassword!=0) {
                Sleep(500);
                string prompt = "\n\n\t\033[31;2m ERROR_401 ACCESS_REQUEST\033[0m : Denied !\n\n";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(500);
                paymentLogin(a, seatCount, phNo);
            } 
        }
        else if((checkExistence==0)&&(sameUserOrNot!=sameUserOrNot_2)) {
            Sleep(1000);
            cout<<"\033[31;2m WARNING\033[0m : Suspicious Activity Detected !\n\n";
            Sleep(1000);
            exit(0);
        }
        else if (checkExistence!=0) {
            Sleep(500);
            system("cls");
            Sleep(500);
            cout<<"Booking Session Is Terminated !";
            Sleep(500);
            starter();
        }  
    }
    else if((_yn1[0]=='N'||_yn1[0]=='n')&&(_yn1[1]=='O'||_yn1[1]=='o')) {
        Sleep(500);
        cout<<"Your Ticket Is Not Booked\n\n";
        Sleep(500);
        cout<<"Thank You !";
        Sleep(500);
        exit(0);
    }
    else {
        Sleep(500);
        cout<<"Invalid Input !"<<endl;
        Sleep(700);
        paymentLogin(a, seatCount, phNo);
    }
}
string encryptPassword(string password) {
    string encrypted = "";
    for(char c : password) {
        if(c!='#'||c!='$'||c!='V'||c!='X'||c!='u'||c!='w') {
            encrypted += char(c + 5);
        }
        if(c=='#'||c=='$'||c=='V'||c=='X'||c=='u'||c=='w') { // if we increment their ascii by 5, it will result in brackets which will make problem in storing password in text file, as brackets are treated different
            encrypted += char(c);
        }
    }
    return encrypted;
}
string decryptPassword(string encrypted) {
    string decrypted = "";
    for(char c : encrypted) {
        if(c!='#'||c!='$'||c!='V'||c!='X'||c!='u'||c!='w') {
            decrypted += char(c - 5);
        }
        if(c=='#'||c=='$'||c=='V'||c=='X'||c=='u'||c=='w') { // if we increment their ascii by 5, it will result in brackets which will make problem in storing password in text file, as brackets are treated different
            decrypted += char(c);
        }
    }
    return decrypted;
}
void enterUserName() {
    system("cls");
    system("color 0F"); 
    string userName;
    cout<<"\n\n-------------NEW USER REGISTRATION-------------\n\n";
    cout<<"\nEnter Your Name Correctly : ";
    getline(cin, userName);
    bool is_valid = true;
    for(char c : userName) {
        if(c!=32) { // exculded space (ACSII CODE 32 FROM THE isalpha() testing)
            if (!isalpha(c)) {
                is_valid = false;
                break;
            }
        }
    }
    if (is_valid) {
        y._getUserName(userName);
        enterUserPassword();
    }
    else {
        Sleep(700);
        cout << "Invalid Name Entered.\n";
        Sleep(500);
        enterUserName();
    }
}
void enterUserPassword() {
    system("color 0F"); 
    string userPassword_pre, userPassword_post, userPassword;
    char charPass;
    Sleep(500);
    cout<<"\n\nEnter A Colon ':' If You Want To Terminate The Processs !";
    cout<<"\n\nEnter Your Password : ";
    while ((charPass = _getch()) != '\r') { // use '\r' to identify enter
        if (charPass == '\b') {
            if (userPassword_pre.length() > 0) {
                userPassword_pre.pop_back();
                cout<<"\b \b";
            }
        }
        else {
            cout<<charPass;
            Sleep(200);
            cout<<"\b \b";
            userPassword_pre.push_back(charPass);
            cout<<"*";
        }
    }
    bool has_uppercase = false;
    bool has_lowercase = false;
    bool has_digit = false;
    bool has_special = false;

    for(char c : userPassword_pre) {
        if (isupper(c)) {
            has_uppercase = true;
        } else if (islower(c)) {
            has_lowercase = true;
        } else if (isdigit(c)) {
            has_digit = true;
        }
        else if (c=='-') {
            system("cls");
            enterUserPassword();
        }
        else if (int(c)==58) { // ACII CODE FOR COLON, Type Casting to int();
            main();
        }
        else {
            has_special = true;
        }
    }
    if(userPassword_pre.length()<8) {
        Sleep(500);
        cout<<"\n\nPassword Must Contain At Least 8 Characters";
        Sleep(700);
        enterUserPassword();
    }
    else if(userPassword_pre.length()>16) {
        Sleep(500);
        cout<<"\n\nPassword Should Not Exceed 16 Characters";
        Sleep(700);
        enterUserPassword();
    }
    else {
        if (!has_uppercase || !has_lowercase || !has_digit || !has_special) {
            Sleep(700);
            cout<<"\n\nPassword must contain :\n    One uppercase letter\n    One lowercase letter\n    One digit\n    One special character.\n\nPassword Must Not Contain \n    Color ':'\n    Hyphen '-'"<<endl;
            Sleep(700);
            enterUserPassword();
        }
    }
    char char_Pas;
    cout<<"\n\nRe Enter Your Password : ";
    while ((char_Pas = _getch()) != '\r') {
        if (char_Pas == '\b') {
            if (userPassword_post.length() > 0) {
                userPassword_post.pop_back();
                cout << "\b \b";
            }
        }
        else {
            cout<<char_Pas;
            Sleep(200);
            cout<<"\b \b";
            userPassword_post.push_back(char_Pas);
            cout << "*";
        }
    }
    if(userPassword_pre!=userPassword_post) {
        Sleep(500);
        system("color 0C"); 
        cout<<"\n\nPassword Didn't Matched !\n";
        Sleep(1500);
        enterUserPassword();
    }
    userPassword = userPassword_post;
    y._getUserPassword(userPassword);
    Sleep(500);
    system("color 0A"); 
    cout<<"\n\nPassword Saved Seccessfully !\n\n";
    Sleep(1500);
    enterUserAadhar();
}
void enterUserAadhar() {
    system("color 0F");
    long long userAadhar;
    cout<<"Enter Your Aadhar Number (without spaces): ";
    cin>>userAadhar;
    if(userAadhar>=111111111111&&userAadhar<=999999999999) {
        y._getUserAadhar(userAadhar);
        declaredUserUniqueId(userAadhar);
    }
    else{
        Sleep(500);
        cout<<"\nEntered Wrong Aadhar Number !\n\n";
        Sleep(700);
        enterUserAadhar();
    }
}
void declaredUserUniqueId(long long userAadhar) {
    system("color 0F"); 
    long long userUniqueId = 0;
    int unique[12];
    for(int i=0; i<12; i++) {
        unique[i]=userAadhar%10;
        userAadhar/=10;
        userUniqueId = userUniqueId + unique[i];
    }
    userUniqueId *= 18756;

    ifstream checkExistence("userDet.txt");
    if(checkExistence.fail()) {
        cerr<<"\n\nError ! In Opening The File !\n"<<endl;
    }
    string part1 = "Unique Id of The User : ";
    string part2 = to_string(userUniqueId);
    string totalPart = part1+part2;
    string line;
    while(getline(checkExistence, line)) {
        if(line==totalPart) {
            Sleep(500);
            cout<<"\n\nUser With Unique Id "<<userUniqueId<<" Already Exist !\n"<<endl;
            Sleep(500);
            main();
        }
    }
    checkExistence.close();

    Sleep(1500);
    system("cls");
    Sleep(500);
    system("color 0A"); 
    cout<<"\n\nYour Registration is Successful !\n\n";
    Sleep(700);
    cout<<"We Owe You A Sum Of Rupees 3000/- as an Opening Balance Of The Account\n\n";
    y._getBankBalance(3000);
    Sleep(700);
    cout<<"Your Unique Id Is : "<<userUniqueId;
    Sleep(700);
    cout<<"\n\nNOTE : Kindly Remember Your Unique Id for Further Processes.\n\n";
    Sleep(500);
    cout<<"Thank You !\n\n";
    Sleep(500);
    y._getUserUniqueId(userUniqueId);
    sendData();
}
void sendData() {
    fstream writeMyData;
    string userName, NormaluserPassword, userPassword;
    long long userAadhar, userUniqueId, oBankBalance;
    userName = y._fetchUserName();
    NormaluserPassword = y._fetchUserPassword();
    userAadhar = y._fetchAadhar();
    userUniqueId = y._fetchUserUniqueId();
    oBankBalance = y._fetchBankBalance();
    userPassword = encryptPassword(NormaluserPassword);
    writeMyData.open("userDet.txt", ios::app);
    if(writeMyData.is_open()) {
        writeMyData<<"Unique Id of The User : "<<userUniqueId<<endl;
        writeMyData<<"Name of The User : "<<userName<<endl;
        writeMyData<<"Password of The User : "<<userPassword<<endl;
        writeMyData<<"Bank Balance of The User : "<<oBankBalance<<endl;
        writeMyData<<"Aadhar Number of The User : "<<userAadhar<<endl;
        writeMyData.close();
    }
    main();
}
void changePassword() {
    system("cls");
    system("color 0F");
    int idLine = w._fetchIdLine(), currentLine = 1;
    idLine += 2;
    cout<<"\n\nVerify You Password First !"<<endl;
    int confirmPassword = passwordMatch();
    if(confirmPassword==0) {
        string prompt = "\n\n\t\033[32m ACCESS_REQUEST \033[0m : Granted !\n\n";
        for(int i=0; i<=prompt.size(); i++) {
            Sleep(30);
            cout<<prompt[i];
        }
        Sleep(500);
        userConfirmed(idLine);
    }
    else {
        string prompt = "\n\n\t\033[31;2m ERROR_401 ACCESS_REQUEST \033[0m : Denied !\n\n";
        for(int i=0; i<=prompt.size(); i++) {
            Sleep(30);
            cout<<prompt[i];
        }
        Sleep(500);
        starter();
    }
}
void userConfirmed(int idLine) {
    string userPassword_pre, userPassword_post, userPassword, nPass;
    char charPas;
    int currentLine = 1;
    system("color 0F"); 
    system("cls");
    cout<<"\n\nEnter A Colon ':' If You Want To Terminate The Processs !";
    cout<<"\n\nEnter Your New Password : ";
    while ((charPas = _getch()) != '\r') {
        if (charPas == '\b') {
            if (userPassword_pre.length() > 0) {
                userPassword_pre.pop_back();
                cout << "\b \b";
            }
        }
        else {
            cout<<charPas;
            Sleep(200);
            cout<<"\b \b";
            userPassword_pre.push_back(charPas);
            cout<<"*";
        }
    }
    bool has_uppercase = false;
    bool has_lowercase = false;
    bool has_digit = false;
    bool has_special = false;
    for(char c : userPassword_pre) {
        if (isupper(c)) {
            has_uppercase = true;
        } else if (islower(c)) {
            has_lowercase = true;
        } else if (isdigit(c)) {
            has_digit = true;
        }
        else if (c=='-') {
            userConfirmed(idLine);
        }
        else if (int(c)==58) { // ACII CODE FOR COLON, Type Casting to int();
            exit(0);
        }
        else {
            has_special = true;
        }
    }
    if(userPassword_pre.length()<8) {
        Sleep(500);
        cout<<"\n\nPassword Must Contain At Least 8 Characters";
        Sleep(700);
        userConfirmed(idLine);
    }
    else if(userPassword_pre.length()>16) {
        Sleep(500);
        cout<<"\n\nPassword Should Not Exceed 16 Characters";
        Sleep(700);
        userConfirmed(idLine);
    }
    else {
        if (!has_uppercase || !has_lowercase || !has_digit || !has_special) {
            Sleep(700);
            cout<<"\n\nPassword must contain :\n    One uppercase letter\n    One lowercase letter\n    One digit\n    One special character.\n\nPassword Must Not Contain \n    Color ':'\n    Hyphen '-'"<<endl;
            Sleep(2500);
            userConfirmed(idLine);
        }
    }
    char char_Pas;
    cout<<"\n\nRe Enter Your Password : ";
    while ((char_Pas = _getch()) != '\r') {
        if (char_Pas == '\b') {
            if (userPassword_post.length() > 0) {
                userPassword_post.pop_back();
                cout << "\b \b";
            }
        }
        else {
            cout<<char_Pas;
            Sleep(200);
            cout<<"\b \b";
            userPassword_post.push_back(char_Pas);
            cout<<"*";
        }
    }
    if(userPassword_pre!=userPassword_post) {
        Sleep(500);
        system("color 0C"); 
        cout<<"\n\nPassword Didn't Matched !\n\n";
        Sleep(1500);
        userConfirmed(idLine);
    }
    userPassword = userPassword_post;
    nPass = encryptPassword(userPassword);
    string inComp = "Password of The User : ";
    string comp = inComp+nPass;
    string line;
    string filename = "userDet.txt";
    string tFilename = "userDetF.txt";
    ifstream readPass(filename);
    ofstream writePass(tFilename);
    while(getline(readPass, line)) {
        if (currentLine==idLine) {
            line = comp;
        }
        writePass<<line<<endl;
        currentLine++;
    }
    readPass.close();
    writePass.close();
    remove(filename.c_str());
    rename(tFilename.c_str(), filename.c_str());
    Sleep(500);
    system("color 0A");
    cout<<"\n\nPassword Succcessfully Changed !";
    Sleep(1200);
    system("color 0F");
    accountStarter();
}
int userExistence(string flow) {
    system("color 0F"); 
    string _flow = flow;
    if(_flow=="NULL") {
        string search, falseSearch;
        int count=0, lineFound=0;
        string line, password;
        ifstream readMyData;
        readMyData.open("userDet.txt");
        Sleep(1000);
        cout<<"\nPlease Enter Your Unique ID : ";
        cin>>falseSearch;
        search = "Unique Id of The User : "+falseSearch;
        if (readMyData.is_open()) {
            while(!readMyData.eof()) {
                getline(readMyData, line);
                lineFound++;
                line.erase(0, 24);
                if(falseSearch==line) {
                    Sleep(500);
                    string prompt = "\n\n\t\033[32m REQUEST_IDENTITY_VERIFICATION \033[0m : Identified !\n\n";
                    for(int i=0; i<=prompt.size(); i++) {
                        Sleep(30);
                        cout<<prompt[i];
                    }
                    Sleep(600);
                    w._getIdLine(lineFound);
                    y._getLineFound(lineFound);
                    y._getSearch(search);
                    y._getFalseSearch(falseSearch);
                    count++;
                    return 0;
                    break;
                }
            }
            if(count==0) {
                string prompt = "\n\n\t\033[31;2m IDENTITY_VERIFICATION_FAILED \033[0m : Unidentified !\n\n";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(500);
                Sleep(1500);
                return 1;
            }
            readMyData.close();
        }
        else {
            cerr<<"Error #2 In Opening File !";
        }
    }
    else if (_flow!="NULL") {
        string search, falseSearch;
        int count=0, lineFound=0;
        string line, password;
        ifstream readMyData;
        readMyData.open("userDet.txt");
        Sleep(1000);
        falseSearch = _flow;
        search = "Unique Id of The User : "+falseSearch;
        if (readMyData.is_open()) {
            while(!readMyData.eof()) {
                getline(readMyData, line);
                lineFound++;
                line.erase(0, 24);
                if(falseSearch==line) {
                    Sleep(500);
                    string prompt = "\n\n\t\033[32m REQUEST_IDENTITY_VERIFICATION \033[0m : Identified !\n\n";
                    for(int i=0; i<=prompt.size(); i++) {
                        Sleep(30);
                        cout<<prompt[i];
                    }
                    Sleep(600);
                    w._getIdLine(lineFound);
                    y._getLineFound(lineFound);
                    y._getSearch(search);
                    y._getFalseSearch(falseSearch);
                    count++;
                    return 0;
                    break;
                }
            }
            if(count==0) {
                string prompt = "\n\n\t\033[31;2m IDENTITY_VERIFICATION_FAILED \033[0m : Unidentified !\n\n";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(500);
                Sleep(1500);
                return 1;
            }
            readMyData.close();
        }
        else {
            cerr<<"Error #2 In Opening File !";
        }
    }
}
void permissionDelete() {
    int lineFound = y._fetchLineFound();
    string search = y._fetchSearch();
    string falseSearch = y._fetchFalseSearch();
    string yn;
    cout<<"\nAre You Sure (Yes/No) : ";
    cin>>yn;
    if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
        Sleep(1000);
        int returnP = passwordMatch();
        if(returnP==0) {
            string prompt = "\n\n\t\033[32m ACCESS_REQUEST \033[0m : Granted !\n\n";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(500);
            deleteUserExistence(lineFound, falseSearch);
        }
        else{
            string prompt = "\n\n\t\033[31;2m ERROR_401 ACCESS_REQUEST\033[0m : Denied !\n\n";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(500);
            cout<<"User Account Is Not Deleted ! \n"<<endl;
            Sleep(1000);
            system("cls");
            accountStarter();
        }
    }
    else if((yn[0]=='N'||yn[0]=='n')&&(yn[1]=='O'||yn[1]=='o')) {
        Sleep(1000);
        cout<<"User Is Not Deleted ! "<<endl;
        Sleep(1000);
        cout<<"Thank You !";
        starter();
    }
    else {
        Sleep(500);
        cout<<"Invalid Input !"<<endl;
        Sleep(700);
        permissionDelete();
    }
}
int passwordMatch() {
    int line_Found = y._fetchLineFound();
    ifstream PassReadMyData;
    int lineFound = line_Found;
    lineFound += 2;
    PassReadMyData.open("userDet.txt");
    if(PassReadMyData.fail()) {
        cerr<<"Error #3 In Opening File !"<<endl;
    }
    int current_line = 0;
    string line;
    while(!PassReadMyData.eof()) {
        current_line++;
        getline(PassReadMyData, line);
        if(current_line==lineFound) {
            break;
        }
    }
    PassReadMyData.close();
    string searchE, searchF;
    char c;
    cout << "\nEnter your password : ";
    while ((c = _getch()) != '\r') {
        if (c == '\b') {
            if (searchE.length() > 0) {
                searchE.pop_back();
                cout << "\b \b";
            }
        }
        else {
            cout<<c;
            Sleep(200);
            cout<<"\b \b";
            searchE.push_back(c);
            cout << "*";
        }
    }
    searchE = encryptPassword(searchE);
    searchF = "Password of The User : "+searchE;
    if(searchF==line) {
        return 0;
    }
    else {
        return 1;
    }
}
void deleteUserExistence(int lineFound, string falseSearch) {
    ifstream inputFile("userDet.txt");
    if (!inputFile) {
        cout << "Failed to open input file" << endl;
    }
    ofstream outputFile("userDetF.txt");
    if (!outputFile) {
        cout << "Failed to open output file" << endl;
    }
    int lineNumber = lineFound; 
    string _line;
    int currentLineNumber = 1;
    while (getline(inputFile, _line)) {
        if (currentLineNumber != lineNumber && currentLineNumber != lineNumber+1 && currentLineNumber != lineNumber+2 && currentLineNumber != lineNumber+3 && currentLineNumber != lineNumber+4) {
            outputFile<<_line<<endl;
        }
        currentLineNumber++;
    }
    inputFile.close();
    outputFile.close();
    remove("userDet.txt");
    rename("userDetF.txt", "userDet.txt");
    cout<<"\nUser with User Id : "<<falseSearch<<", Is Deleted\n"<<endl;
    Sleep(1000);
    system("cls");
    u.getDBV(1);
    main();
}
void moneyTransfer() {
    system("cls");
    int confirmPassword = passwordMatch();
    if(confirmPassword==0) {
        system("cls");
        int senderId = y._fetchLineFound();
        string sender_string_BB = returnBankBalance();
        string uniq_Rec;
        double sender_double_BB = std::stod(sender_string_BB), enteredBal;
        cout<<"\n\tEnter The Unique Id Of The Receiver : ";
        getline(cin, uniq_Rec);
        if(uniq_Rec == y._fetchFalseSearch()) {
            Sleep(1000);
            string prompt = "\n\n\n\t\033[31;2m ER_MATCHED\033[0m : Sender's Unique Id Matched With Receiver's Unique ID !";
            for(int i=0; i<=prompt.size(); i++) {
                Sleep(30);
                cout<<prompt[i];
            }
            Sleep(2000);
            system("cls");
            moneyTransfer();
        }
        int checkExistence = userExistence(uniq_Rec);
        if(checkExistence==0) {
            Sleep(1000);
            system("cls");
            cout<<"\n\n\tEnter The Amount You Want To Transfer : ";
            cin>>enteredBal;
            if(enteredBal>sender_double_BB) {
                Sleep(1000);
                string prompt = "\n\n\n\t\033[31;2m ER_INSUFFICIENT\033[0m : Not Enough Balance To Process The Transaction !";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(1000);
                system("cls");
                accountStarter();
            }
            else if (enteredBal<=sender_double_BB) {
                Sleep(1000);
                int dots = 0, t=0;
                cout << "\n\tTransaction Processing";
                while (t<=15) {
                    for (int i=0; i<dots; ++i) {
                        cout << ".";
                    }
                    Sleep(500);
                    for (int i=0; i<dots; ++i) {
                        cout << "\b \b";
                    }
                    ++dots;
                    if(dots>3) {
                        dots=0;
                    }
                    t++;
                }
                Sleep(2000);
                int recvrId = y._fetchLineFound();
                string recvr_string_BB = returnBankBalance();
                double recvr_double_BB = std::stod(recvr_string_BB);
                double toBeAdded = recvr_double_BB+enteredBal;
                double toBeDeducted = sender_double_BB-enteredBal;
                y._getLineFound(senderId);
                addMoney(toBeDeducted);
                y._getLineFound(recvrId);
                addMoney(toBeAdded);
                system("cls");
                string prompt = "\n\n\n\t\033[32m TRANSACTION_STATUS\033[0m : Successful";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(1000);
                w._getIdLine(senderId);
                passbook();
                Sleep(5000);
                y._getLineFound(senderId);
                accountStarter();
            }
        }
        else {
            Sleep(1000);
            accountStarter();
        }
    }
    else {
        Sleep(1000);
        string prompt = "\n\n\t\033[31;2m ERROR_401 ACCESS_REQUEST \033[0m : Denied !\n\n";
        for(int i=0; i<=prompt.size(); i++) {
            Sleep(30);
            cout<<prompt[i];
        }
        Sleep(1000);
        accountStarter();
    }
}
string returnBankBalance() {
    int line_Found = y._fetchLineFound();
    string search = y._fetchSearch();
    string falseSearch  = y._fetchFalseSearch();
    ifstream PassReadMyData;
    int lineFound = line_Found;
    lineFound += 3;
    PassReadMyData.open("userDet.txt");
    if(PassReadMyData.fail()) {
        cerr<<"Error #4 In Opening File !"<<endl;
    }
    int current_line = 0;
    string line;
    while(!PassReadMyData.eof()) {
        current_line++;
        getline(PassReadMyData, line);
        if(current_line==lineFound) {
            break;
        }
    }
    PassReadMyData.close();
    string onlyBal = line.erase(0, 27);
    return onlyBal;
}
long long convertToInt(string myString) {
   long long x;
   stringstream ss(myString);
   ss>>x;
   return x;
}
void creditTwoHundred() {
    system("color FA");
    cout<<"\n\n\t\tCorrect Answer, 200 Rupees Credited To Your Accout !\n";
    long long balance = z._fetchBalance();
    balance += 200;
    z._creditBalance(balance);
    addMoney(balance);
}
void debitFifty() {
    system("color FC");
    cout<<"\n\n\t\tWrong Answer, 50 Rupees Dedcuted From Your Account !\n";
    long long balance = z._fetchBalance();
    balance -= 50;
    z._creditBalance(balance);
    addMoney(balance);
}
void QuizGameModule() {
    system("cls");
    updateUserBalance();
    system("color F0");
    Sleep(700);
    cout<<"\n\n------------------------------------------------------------------------------------WELCOME TO QUIZ GAME ( WIN & EARN )---------------------------------------------------------------------------------";
    Sleep(500);
    cout<<"\n\n\tRULES OF THE GAME, IF BROKEN, IT SHALL LEAD YOU TO GET HANGED !\n\n";
    Sleep(500);
    cout<<"\t\tHaHaHaHa... Just Kidding ! It's Impossible To Break The Rules, Because It Is Programmed So.\n\n";
    Sleep(500);
    int nOquestions;
    cout<<"It Contains Total Of 20 Questions\n\n";
    cout<<"Each Correct Answer Will Credit Rupees 200 Into Your Account While, Each Incorrect Answer Will Debit Rupees 50 From Your Account\n\n";
    cout<<"You Can Even Choose The Number of Questions You Want To Attempt, Based According To The Money You Want To Earn\n\n";
    cout<<"How Many Questions You Want To Attempt (Max 20) : ";
    cin>>nOquestions;
    Sleep(500);
    if(nOquestions>0 &&nOquestions<=20) {
        char yn;
        cout<<"\n\n\tPress Any Character To Start The Game";
        yn = getch();
        cout<<"\n\n\tQuiz Game Starts In 5 Seconds : ";
        for(int i=5; i>=0; i--) {
            Sleep(1000);
            cout<<i;
            cout<<"\b";
        }
        system("cls");
        cout<<"\n\n------------------------------------------------------------------------------------WELCOME TO QUIZ GAME ( WIN & EARN )---------------------------------------------------------------------------------";
        QuizGameQuestions(nOquestions);
    }
    else {
        Sleep(500);
        cout<<"\n\nEnter A Number Within Range 1 to 20 !";
        Sleep(4000);
        QuizGameModule();
    }
}
void QuizGameQuestions(int nOquestions) {
    cout<<"\n";
    vector<void (*)(int, int)> functionCalls;
    functionCalls.push_back(&question1);
    functionCalls.push_back(&question2);
    functionCalls.push_back(&question3);
    functionCalls.push_back(&question4);
    functionCalls.push_back(&question5);
    functionCalls.push_back(&question6);
    functionCalls.push_back(&question7);
    functionCalls.push_back(&question8);
    functionCalls.push_back(&question9);
    functionCalls.push_back(&question10);
    functionCalls.push_back(&question11);
    functionCalls.push_back(&question12);
    functionCalls.push_back(&question13);
    functionCalls.push_back(&question14);
    functionCalls.push_back(&question15);
    functionCalls.push_back(&question16);
    functionCalls.push_back(&question17);
    functionCalls.push_back(&question18);
    functionCalls.push_back(&question19);
    functionCalls.push_back(&question20);
    vector<int> randomQs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    mt19937 rng(time(nullptr));
    shuffle(randomQs.begin(), randomQs.end(), rng);
    for(int i=0, j=1; i<nOquestions; j++, i++) {
        void (*functionCall)(int, int) = functionCalls[randomQs[i]-1];
        functionCall(j, nOquestions);
   } // reduced 244 lines
    system("cls");
    system("color F0");
    passbook();
    Sleep(6500);
    system("cls");
    system("color 0F");
    string ended = "QUIZ ENDED !";
    cout<<"\n\n\n\n\n\t\t\t\t\t";
    for(int i=0; i<=11; i++) {
        Sleep(350);
        cout<<ended[i]<<"\t";
    }
    cout<<"\n\n\n\n\n";
}
void question1(int j, int nOq) {
    system("color F0");
    char answer, proceed;
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tWhat does ATC stands for in aviation sector ?\n\n";
    cout<<"\t\ta) Air Traffic Control\t\tb) Air Traffic Clearance\n";
    cout<<"\t\tc) Air Traffic Communication\td) Air Traffic Center\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='a'||answer=='A') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\tCorrect Answer Is a) Air Traffic Control";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question2(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tWhich instrument provides information about the aircraft's altitude ?\n\n";
    cout<<"\t\ta) Altimeter\t\tb) Airspeed Indicator\n";
    cout<<"\t\tc) Altitude Indicator\td) Vertical Speed Indicator (VSI)\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='a'||answer=='A') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is a) Altimeter";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question3(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tIf aRb and bRc, then aRc, where R is a Relation on Set A : a,b,c { A. This is an example of ?\n\n";
    cout<<"\t\ta) Reflexive property\t\tb) Symmetric property\n";
    cout<<"\t\tc) Transitive property\t\td) None of the above\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='c'||answer=='C') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is c) Transitive property.";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question4(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tIf it is winter, then it is cold outside. It is not winter. What can you conclude ?\n\n";
    cout<<"\t\ta) It is cold outside\t\t\tb) It is not cold outside\n";
    cout<<"\t\tc) It may or may not be cold outside\td) None of the above\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='c'||answer=='C') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is c) It may or may not be cold outside.";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question5(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tIf all birds can fly and penguins are birds, what can you conclude about penguins ?\n\n";
    cout<<"\t\ta) Penguins can fly\t\tb) Penguins cannot fly\n";
    cout<<"\t\tc) Penguins are not birds\td) None of the above.\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='b'||answer=='B') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is Penguins cannot fly.";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question6(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tWhich loop executes a block of code at least once, even if the condition is initially false ?\n\n";
    cout<<"\t\ta) While Loop\t\t\tb) For Loop\n";
    cout<<"\t\tc) Do-While Loop\t\td) Range-Based For Loop\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='c'||answer=='C') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is c) Do-While Loop";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question7(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tWhat is the output of the following code snippet ?\n\t\tint x = 5, y = x++;\n\t\tstd::cout<<y<<std::endl;\n\n";
    cout<<"\t\ta) 5\t\t\tb) 6\n";
    cout<<"\t\tc) Error\t\td) Undefined\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='a'||answer=='A') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is a) 5";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question8(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tWhich container provides a dynamic size, ordered sequence of elements in C++ ?\n\n";
    cout<<"\t\ta) vector\t\t\tb) set\n";
    cout<<"\t\tc) map\t\t\t\td) array\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='a'||answer=='A') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is a) vector";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question9(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tWhat is the output of the following code snippet ?\n\t\tint x=10, y=2*x, z=(x>y)?x:y;\n\t\tstd::cout<<z<<std::endl;\n\t\tNote : Declaring And Using A Variable In Same Line Is Not A Good Practice.\n\n";
    cout<<"\t\ta) 10\t\t\t\tb) 20\n";
    cout<<"\t\tc) 30\t\t\t\td) Error\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='b'||answer=='B') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is b) 20";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question10(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tWhich data structure follows the Last In, First Out (LIFO) principle ?\n\n";
    cout<<"\t\ta) queue\t\t\tb) set\n";
    cout<<"\t\tc) stack\t\t\td) linked list\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='c'||answer=='C') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is c) stack";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question11(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tWhich operator is used to access the memory address of a variable in C++ ?\n\n";
    cout<<"\t\ta) Asterisk (*)\t\t\tb) Percent (%)\n";
    cout<<"\t\tc) Ampersand (&)\t\td) Dollar ($)\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='c'||answer=='C') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is c) Ampersand (&)";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question12(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tWhat is the chemical symbol for the element gold, oxygen atom, silver respectively ?\n\n";
    cout<<"\t\ta) Au, O2, Au\t\t\tb) Au, O, Ag\n";
    cout<<"\t\tc) Pt, Ag, O3\t\t\td) Fe, O2H3, Ag\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='b'||answer=='B') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is b) Au, O, Ag";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question13(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tWhich one of the following is the largest ocean on Earth ?\n\n";
    cout<<"\t\ta) Atlantic Ocean\t\tb) Indian Ocean\n";
    cout<<"\t\tc) Arctic Ocean\t\t\td) Pacific Ocean\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='d'||answer=='D') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is d) Pacific Ocean";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question14(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tWhich of the following is not a standard library of C++ ?\n\n";
    cout<<"\t\ta) <fstream>\t\t\tb) <vector>\n";
    cout<<"\t\tc) <string.h>\t\t\td) <functional>\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='c'||answer=='C') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is c) <string.h>";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question15(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tFind the incorrect verbal analogy (pair) : -\n\n";
    cout<<"\t\ta) vectors : push_back()\tb) int(a) : char(97)\n";
    cout<<"\t\tc) string : strcpy()\t\td) fstream : open()\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='b'||answer=='B') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is b) int(a) : char(97)";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question16(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tWhich operator is used to access the member functions of a class in C++ through a pointer from the main function ?\n\n";
    cout<<"\t\ta) Arrow Operator (->)\t\tb) Scope Resolution Operator (::)\n";
    cout<<"\t\tc) Dot (.)\t\t\td) Asterisk (*)\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='a'||answer=='A') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is a) Arrow Operator (->)";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question17(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tWhat is the result of the following logical expression?\n\t\t{!((true && false) || (true && !true)&&(!true && true))}\n\n";
    cout<<"\t\ta) false\t\tb) Error\n";
    cout<<"\t\tc) !false\t\td) Undefined\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='c'||answer=='C') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is c) !false";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question18(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tThis program is built by which of the following great programmer of all time ?\n\n";
    cout<<"\t\ta) Dennis Ritchie\t\tb) Linus Torvalds\n";
    cout<<"\t\tc) Rayyan Ashraf\t\td) Sergey Brin\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='c'||answer=='C') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is c) Rayyan Ashraf";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question19(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tWhich of the following is the full form of HTTPS ?\n\n";
    cout<<"\t\ta) Holiday Trip To Paris Straight\t\tb) Hypertext Transfer Protocol Service\n";
    cout<<"\t\tc) Hyper Text Transfer Processing Server\td) Hypertext Transfer Protocol Secure\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='d'||answer=='D') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is d) Hypertext Transfer Protocol Secure";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void question20(int j, int nOq) {
    char answer, proceed;
    Sleep(700);
    system("color F0");
    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\tQuestion Number : #"<<j<<"\t\t\tCurrent Balance = "<<z._fetchBalance()<<"\n\n";
    cout<<"\t\tIs there any chance of having an error in this code ?\n\n";
    cout<<"\t\ta) Can't Say\t\t\tb) Probably Yes\n";
    cout<<"\t\tc) Ofcourse Not\t\t\td) For Sure\n";
    cout<<"\n\tYour Answer : ";
    answer = getche();
    Sleep(500);
    if(answer=='b'||answer=='B') {
        creditTwoHundred();
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
    else {
        debitFifty();
        Sleep(500);
        cout<<"\n\n\tCorrect Answer Is b) Probably Yes";
        if(j==nOq) {
            Sleep(700);
            return ;
        }
        cout<<"\n\nPress Any Key For The Next Question";
        proceed = getch();
    }
}
void updateUserBalance() {
    int lineFound = y._fetchLineFound();
    ifstream file("userDet.txt");
    string line;
    int lineNumber = lineFound+3;
    for(int i = 1; i <= lineNumber; i++) {
        getline(file, line);
        if(i == lineNumber) {
            int currentAmount = stoll(line.erase(0,27));
            z._creditBalance(currentAmount);
            break;
        }
    }

    file.close();
}
void addMoney(double addBalance) {
    int lineFound = y._fetchLineFound();
    string filename = "userDet.txt";
    int line_number = lineFound+3;
    string addBalance_String = to_string(addBalance);
    string raw = "Bank Balance of The User : ";
    string new_line = raw + addBalance_String;
    ifstream infile(filename);
    string temp_filename = "userDetF.txt";
    ofstream outfile(temp_filename);
    string line;
    int current_line_number = 1;
    while (getline(infile, line)) {
        if (current_line_number == line_number) {
            line = new_line;
        }
        outfile << line << endl;
        current_line_number++;
    }
    infile.close();
    outfile.close();
    remove(filename.c_str());
    rename(temp_filename.c_str(), filename.c_str());
}
void passbook() {
    int lineFound = w._fetchIdLine();
    ifstream file("userDet.txt");
    string line;
    int startLine = lineFound;
    int endLine = lineFound+4;
    int currentLine = 1;
    cout<<"\n\n";
    cout<<"---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n";
    cout<<"\t\t\t\t\t\t\t\t\tPASSBOOK OF THE USER\n\n\n";
    while(getline(file, line)) {
        if(currentLine==lineFound+2) {
            line.erase(0, 23);
            string passEncrypted = "**********";
            string decryptedLine = "Password of The User : "+passEncrypted;
            cout<<"\t\t\t\t\t\t\t\t"<<decryptedLine<<"\n"<<endl;
        }
        if(currentLine >= startLine && currentLine <= endLine) {
            if(currentLine!=lineFound+2) {
                cout <<"\t\t\t\t\t\t\t\t"<<line<<"\n"<<endl;
            }

        }
        if(currentLine > endLine) {
            break;
        }
        currentLine++;
    }
    cout<<"\n\n";
    cout<<"---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n";
    file.close();
}
void fetchTktLine() {
    string search, falseSearch;
    int offset, count=0, lineFound=0;
    string line;
    ifstream readMyData;
    readMyData.open("myMovieDet.txt");
    Sleep(1000);
    cout<<"\nPlease Enter Your Ticket(s) Id(s) : ";
    getline(cin, falseSearch);
    search = "Ticket Id : "+falseSearch;
    if (readMyData.is_open()) {
        while(!readMyData.eof()) {
            getline(readMyData, line);
            lineFound++;
            if((offset=line.find(search, 0))!=string::npos) {
                Sleep(500);
                cout<<"\n"<<search<<", Exists !\n\n";
                Sleep(500);
                count++;
                break;
            }
        }
        if(count==0) {
            Sleep(1000);
            cout<<search<<", Doesn't Exists !";
            Sleep(1000);
            main();
        }
        readMyData.close();
    }
    else {
        cerr<<"Error #5 In Opening File !";
    }
    w._getTktLine(lineFound);
}
void fetchUniqueLine() {
    system("color 0F"); 
    string search, falseSearch;
    int offset, count=0, lineFound=0;
    string line, password;
    ifstream readMyData;
    readMyData.open("userDet.txt");
    Sleep(1000);
    cout<<"\nPlease Enter Your Unique ID : ";
    cin>>falseSearch;
    search = "Unique Id of The User : "+falseSearch;
    if (readMyData.is_open()) {
        while(!readMyData.eof()) {
            getline(readMyData, line);
            lineFound++;
            if((offset=line.find(search, 0))!=string::npos) {
                Sleep(500);
                cout<<"\n"<<search<<", Exists !\n\n";
                Sleep(500);
                w._getIdLine(lineFound);
                count++;
                break;
            }
        }
        if(count==0) {
            Sleep(1000);
            system("color 0C"); 
            cout<<search<<", Doesn't Exists !";
            Sleep(1500);
        }
        readMyData.close();
    }
    else {
        cerr<<"Error #6 In Opening File !"<<endl;
    }
}
void addMoneyDeducted(double addBalance, int _lineFound, double actPrice) {
    int lineFound = _lineFound+2;
    ifstream file("userDet.txt");
    string lline;
    for(int i=0; i<=lineFound; i++) {
        getline(file, lline);
        if(i==lineFound) {
            break;
        }
    }
    file.close();
    double toDouble = stod(lline.erase(0,27));
    toDouble += addBalance;
    string raw = "Bank Balance of The User : ";
    string toString = to_string(toDouble);
    string final_string = raw + toString;
    string filename = "userDet.txt";
    int line_number = lineFound+1;
    string addBalance_String = to_string(addBalance);
    string new_line = addBalance_String;
    ifstream infile(filename);
    string temp_filename = "userDetF.txt";
    ofstream outfile(temp_filename);
    string line;
    int current_line_number = 1;
    while (getline(infile, line)) {
        if (current_line_number == line_number) {
            line = final_string;
        }
        outfile << line << endl;
        current_line_number++;
    }
    infile.close();
    outfile.close();
    remove(filename.c_str());
    rename(temp_filename.c_str(), filename.c_str());
    Sleep(500);
    cout<<"\nCharged Rupees "<<0.05*actPrice<<"/- as cancellation fee of 5% on your ticket amount, "<<addBalance<<" is credited to your account !"<<endl;
}
void fareByClass() {
    string search, falseSearch;
    int offset, count=0, lineFound=0;
    string line;
    ifstream readMyData;
    readMyData.open("myMovieDet.txt");
    Sleep(1000);
    cout<<"\nPlease Enter Your Ticket(s) Id(s) : ";
    getline(cin, falseSearch);
    search = "Ticket Id : "+falseSearch;
    if (readMyData.is_open()) {
        while(!readMyData.eof()) {
            getline(readMyData, line);
            lineFound++;
            if((offset=line.find(search, 0))!=string::npos) {
                Sleep(500);
                cout<<"\n"<<search<<", Exists !\n\n";
                Sleep(500);
                count++;
                break;
            }
        }
        if(count==0) {
            Sleep(1000);
            cout<<"\n"<<search<<", Doesn't Exists !";
            Sleep(1000);
            system("cls");
            fareByClass();
        }
        readMyData.close();
    }
    else {
        cerr<<"Error #7 In Opening File !"<<endl;
        main();
    }
    y._getLineFound(lineFound);
    w._getTktLine(lineFound);
    int lineOfClass = lineFound+8;
    string classFound;
    ifstream readClass("myMovieDet.txt");
    for(int i = 1; i <= lineOfClass; i++) {
        if (!getline(readClass, classFound)) {
            cerr<<"Error #8 File Too Short !"<<endl;
            
        }
    }
    Sleep(500);
    cout<<"Current Status --> "<<classFound;
    Sleep(500);
    string yn;
    cout<<"\n\nDo You Wish To Change Your Class (Yes/No) : ";
    getline(cin, yn);
    if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
        string classToChange;
        cout<<"\nIn Which Class You Want To Convert Your Ticket ? \n"<<endl;
        cout<<"Class : ";
        getline(cin, classToChange);
        if(classToChange=="Normal Class"||classToChange=="NORMAL CLASS"||classToChange=="normal"||classToChange=="normal class"||classToChange=="Normal"||classToChange=="NORMAL"||classToChange=="Normal class") {
            ifNormal();
        }
        else if(classToChange=="Executive Class"||classToChange=="EXECUTIVE CLASS"||classToChange=="executive"||classToChange=="Executive"||classToChange=="EXECUTIVE"||classToChange=="Executive class"||classToChange=="executive class") {
            ifExecutive();
        }
        else if(classToChange=="Premium Class"||classToChange=="PREMIUM CLASS"||classToChange=="premium"||classToChange=="PREMIUM"||classToChange=="premium class"||classToChange=="Premium class"||classToChange=="Premium") {
            ifPremium();
        }
    }
    else if((yn[0]=='N'||yn[0]=='n')&&(yn[1]=='O'||yn[1]=='o')) {
        Sleep(500);
        starter();
    }
    else {
        Sleep(500);
        cout<<"Invalid Input !"<<endl;
        Sleep(700);
        fareByClass();
    }
}

void ifNormal() {
    int lineFound = w._fetchTktLine();
    int lineOfSeat = lineFound+5;
    string SeatCountFound;
    ifstream readClass("myMovieDet.txt");
    for(int i = 1; i <= lineOfSeat; i++) {
        if (!getline(readClass, SeatCountFound)) {
            cerr<<"Error #9 File Too Short !"<<endl;
            
        }
    }
    Sleep(500);
    int seatCount;
    stringstream stream(SeatCountFound);
    string word;
    while (stream >> word) {
        if (stringstream(word) >> seatCount) {
            break;
        }
    }
    double newPrice = ((110*seatCount))+((110*seatCount)*(18/100.00));
    int line_Found = w._fetchTktLine();
    int lineOfPrice = line_Found+7;
    string priceFound;
    ifstream readPrice("myMovieDet.txt");
    for(int i = 1; i <= lineOfPrice; i++) {
        if (!getline(readPrice, priceFound)) {
            cerr<<"Error #10 File Too Short !"<<endl;
            
        }
    }
    string cutOutPrice = priceFound.erase(0, 8);
    double toDouble_priceFound;
    toDouble_priceFound = stod(cutOutPrice);
    if(newPrice>toDouble_priceFound) { // useless condition : this is a normal class portal, whose price is always less than any class so newPrice will always be lesser (<) than the toDouble_priceFound
        int userLineFound = w._fetchIdLine();
        userLineFound += 4;
        Sleep(700);
        cout<<"\nYou Need To Pay A Sum Of Rupees "<<newPrice-toDouble_priceFound;
        Sleep(700);
        string yn;
        cout<<"\n\nShall We Proceed To Pay The Amount (Yes/No) : ";
        getline(cin, yn);
        Sleep(700);
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            changeFarePaymentLogin(newPrice-toDouble_priceFound, lineOfPrice, userLineFound, 'N');
        }
        else if((yn[0]=='N'||yn[0]=='n')&&(yn[1]=='O'||yn[1]=='o')){
            Sleep(500);
            cout<<"Thank You !";
            Sleep(700);
            starter();
        }
        else {
            Sleep(500);
            cout<<"Invalid Input !"<<endl;
            Sleep(700);
            ifNormal();
        }
    }
    else if (newPrice<toDouble_priceFound) { 
        cout<<"\nA sum of Rupees "<<toDouble_priceFound-newPrice<<" Will Be Credited To Your Account";
        int userLineFound = w._fetchIdLine();
        userLineFound += 4;
        Sleep(700);

        string yn;
        cout<<"\n\nShall We Proceed To Credit The Amount (Yes/No) : ";
        getline(cin, yn);
        Sleep(700);
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            v._getFareChangeIdentifier('i');
            changeFarePaymentLogin(toDouble_priceFound-newPrice, lineOfPrice, userLineFound, 'N');
        }
        else if((yn[0]=='N'||yn[0]=='n')&&(yn[1]=='O'||yn[1]=='o')){
            Sleep(500);
            cout<<"Thank You !";
            Sleep(700);
            starter();
        }
        else {
            Sleep(500);
            cout<<"Invalid Input !"<<endl;
            Sleep(700);
            ifNormal();
        }
    }
    else {
        cout<<"You Can't Convert Your Booking To The Same Class In Which The Booking Already Is !";
    }
}
void ifExecutive() {
    int lineFound = w._fetchTktLine();
    int lineOfSeat = lineFound+5;
    string SeatCountFound;
    ifstream readClass("myMovieDet.txt");
    for(int i = 1; i <= lineOfSeat; i++) {
        if (!getline(readClass, SeatCountFound)) {
            cerr<<"Error #11 File Too Short !"<<endl;
            
        }
    }
    Sleep(500);
    int seatCount;
    stringstream stream(SeatCountFound);
    string word;
    while (stream >> word) {
        if (stringstream(word) >> seatCount) {
            break;
        }
    }
    double newPrice = ((230*seatCount))+((230*seatCount)*(18/100.00));
    int line_Found = w._fetchTktLine();
    int lineOfPrice = line_Found+7;
    string priceFound;
    ifstream readPrice("myMovieDet.txt");
    for(int i = 1; i <= lineOfPrice; i++) {
        if (!getline(readPrice, priceFound)) {
            cerr<<"Error #12 File Too Short !"<<endl;
            
        }
    }
    string cutOutPrice = priceFound.erase(0, 8);
    double toDouble_priceFound;
    toDouble_priceFound = stod(cutOutPrice);
    if(newPrice>toDouble_priceFound) {
        int userLineFound = w._fetchIdLine();
        userLineFound += 4;
        cout<<"\nYou Need To Pay A Sum Of Rupees "<<newPrice-toDouble_priceFound;
        v._getFareChangePrice(newPrice-toDouble_priceFound);
        Sleep(700);
        string yn;
        cout<<"\n\nShall We Proceed To Pay The Amount (Yes/No) : ";
        getline(cin, yn);
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            changeFarePaymentLogin(newPrice-toDouble_priceFound, lineOfPrice, userLineFound, 'E');
        }
        else if((yn[0]=='N'||yn[0]=='n')&&(yn[1]=='O'||yn[1]=='o')){
            Sleep(500);
            cout<<"Thank You !";
            Sleep(700);
            starter();
        }
        else {
            Sleep(500);
            cout<<"Invalid Input !"<<endl;
            Sleep(700);
            ifExecutive();
        }
    }
    else if (newPrice<toDouble_priceFound) { 
        cout<<"\nA sum of Rupees "<<toDouble_priceFound-newPrice<<" Will Be Credited To Your Account";
        int userLineFound = w._fetchIdLine();
        userLineFound += 4;
        Sleep(700);

        string yn;
        cout<<"\n\nShall We Proceed To Credit The Amount (Yes/No) : ";
        getline(cin, yn);
        Sleep(700);
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            v._getFareChangeIdentifier('i');
            changeFarePaymentLogin(toDouble_priceFound-newPrice, lineOfPrice, userLineFound, 'E');
        }
        else if((yn[0]=='N'||yn[0]=='n')&&(yn[1]=='O'||yn[1]=='o')){
            Sleep(500);
            cout<<"Thank You !";
            Sleep(700);
            starter();
        }
        else {
            Sleep(500);
            cout<<"Invalid Input !"<<endl;
            Sleep(700);
            ifExecutive();
        }
    }
    else {
        cout<<"You Can't Convert Your Booking To The Same Class In Which The Booking Already Is !";
    }
}
void ifPremium() {
    int lineFound = w._fetchTktLine();
    int lineOfSeat = lineFound+5;
    string SeatCountFound;
    ifstream readClass("myMovieDet.txt");
    for(int i = 1; i <= lineOfSeat; i++) {
        if (!getline(readClass, SeatCountFound)) {
            cerr<<"Error #11 File Too Short !"<<endl;
            
        }
    }
    Sleep(500);
    int seatCount;
    stringstream stream(SeatCountFound);
    string word;
    while (stream >> word) {
        if (stringstream(word) >> seatCount) {
            break;
        }
    }
    double newPrice = ((450*seatCount))+((450*seatCount)*(18/100.00));
    int line_Found = w._fetchTktLine();
    int lineOfPrice = line_Found+7;
    string priceFound;
    ifstream readPrice("myMovieDet.txt");
    for(int i = 1; i <= lineOfPrice; i++) {
        if (!getline(readPrice, priceFound)) {
            cerr<<"Error #12 File Too Short !"<<endl;
            
        }
    }
    string cutOutPrice = priceFound.erase(0, 8);
    double toDouble_priceFound;
    toDouble_priceFound = stod(cutOutPrice);
    if(newPrice>toDouble_priceFound) {
        int userLineFound = w._fetchIdLine();
        userLineFound += 4;
        cout<<"\nYou Need To Pay A Sum Of Rupees "<<newPrice-toDouble_priceFound;
        v._getFareChangePrice(newPrice-toDouble_priceFound);
        Sleep(700);
        string yn;
        cout<<"\n\nShall We Proceed To Pay The Amount (Yes/No) : ";
        getline(cin, yn);
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            changeFarePaymentLogin(newPrice-toDouble_priceFound, lineOfPrice, userLineFound, 'P');
        }
        else if((yn[0]=='N'||yn[0]=='n')&&(yn[1]=='O'||yn[1]=='o')){
            Sleep(500);
            cout<<"Thank You !";
            Sleep(700);
            starter();
        }
        else {
            Sleep(500);
            cout<<"Invalid Input !"<<endl;
            Sleep(700);
            ifPremium();
        }
    }
    else if (newPrice<toDouble_priceFound) { 
        cout<<"\nA sum of Rupees "<<toDouble_priceFound-newPrice<<" Will Be Credited To Your Account";
        int userLineFound = w._fetchIdLine();
        userLineFound += 4;
        Sleep(700);
        
        string yn;
        cout<<"\n\nShall We Proceed To Credit The Amount (Yes/No) : ";
        getline(cin, yn);
        Sleep(700);
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            v._getFareChangeIdentifier('i');
            changeFarePaymentLogin(toDouble_priceFound-newPrice, lineOfPrice, userLineFound, 'P');
        }
        else if((yn[0]=='N'||yn[0]=='n')&&(yn[1]=='O'||yn[1]=='o')){
            Sleep(500);
            cout<<"Thank You !";
            Sleep(700);
            starter();
        }
        else {
            Sleep(500);
            cout<<"Invalid Input !"<<endl;
            Sleep(700);
            ifPremium();
        }
    }
    else {
        cout<<"You Can't Convert Your Booking To The Same Class In Which The Booking Already Is !";
    }
}
void changeFarePaymentLogin(double price, int line_number_tkt, int line_number_id, char _class) {
    v._getFareChangePrice(price);
    int seatLine = w._fetchTktLine();
    seatLine += 5;
    string seat_Line;
    fstream readSeat;
    readSeat.open("myMovieDet.txt");
    if(readSeat.fail()) {
        cout<<"Error #13 In Opening File !";
    }
    int crntLine =1;
    while(getline(readSeat, seat_Line)) {
        if(crntLine==seatLine) {
            break;
        }
        crntLine++;
    }
    stringstream ss(seat_Line);
    int _seatCount;

    while (!ss.eof()) {
        if (ss >> _seatCount) {
            break;
        }
        ss.clear();
        ss.ignore();
    }
    Sleep(900);
    if(_class=='N') {
        cout<<" __________________________________________________________________________________________________________________________________________________\n";
        cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
        cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
        cout<<"|                                                                                                                                                  |\n";
        cout<<"|                                                                                                                                                  |\n";
        cout<<"|                                                                                                                                                  |\n";
        cout<<"|                                                                                                                                                  |\n";
        cout<<"|                                                                 NORMAL CLASS                                                                     |\n";
        cout<<"|                                              ----------------------------------------------------                                                |\n";
        cout<<"|                                         A->  |01||02||##||04||##||##||##||08||09||10||11||12||13|                                                |\n";
        cout<<"|                                              ----------------------------------------------------                                                |\n";
        cout<<"|                                              ----------------------------------------------------                                                |\n";
        cout<<"|                                         B->  |01||##||03||04||05||06||07||08||##||##||11||12||13|                                                |\n";
        cout<<"|                                              ----------------------------------------------------                                                |\n";
        cout<<"|                                              ----------------------------------------------------                                                |\n";
        cout<<"|                                         C->  |##||02||03||##||05||06||07||##||09||10||11||##||13|                                                |\n";
        cout<<"|                                              ----------------------------------------------------                                                |\n";
        cout<<"|                                              ----------------------------------------------------                                                |\n";
        cout<<"|                                         D->  |##||##||03||04||05||06||##||##||09||10||11||12||13|                                                |\n";
        cout<<"|                                              ----------------------------------------------------                                                |\n";
        cout<<"|                                              ----------------------------------------------------                                                |\n";
        cout<<"|                                         E->  |01||##||##||04||05||06||07||08||09||##||11||12||13|                                                |\n";
        cout<<"|                                              ----------------------------------------------------                                                |\n";
        cout<<"|                                                                                                                                                  |\n";
        cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
        char seatChar;
        cout<<"Enter the row character : ";
        cin>>seatChar;
        if(seatChar=='A'||seatChar=='a') {
            Sleep(500);
            v._getFareChangeRow('A');
            fareChangeSeatSelectionA(_seatCount);
        }
        else if(seatChar=='B'||seatChar=='b') {
            Sleep(500);
            v._getFareChangeRow('B');
            fareChangeSeatSelectionB(_seatCount);
        }
        else if(seatChar=='C'||seatChar=='c') {
            Sleep(500);
            v._getFareChangeRow('C');
            fareChangeSeatSelectionC(_seatCount);
        }
        else if(seatChar=='D'||seatChar=='d') {
            Sleep(500);
            v._getFareChangeRow('D');
            fareChangeSeatSelectionD(_seatCount);
        }
        else if(seatChar=='E'||seatChar=='e') {
            Sleep(500);
            v._getFareChangeRow('E');
            fareChangeSeatSelectionE(_seatCount);
        }
        else{
            cout<<"\n\nPlease Enter a Valid Seat Row (A - E) !\n";
            Sleep(500);
            changeFarePaymentLogin(price, line_number_tkt, line_number_id, _class);
        }
    }
    else if(_class=='E') {
        cout<<" __________________________________________________________________________________________________________________________________________________\n";
        cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
        cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
        cout<<"|                                                                                                                                                  |\n";
        cout<<"|                                                                                                                                                  |\n";
        cout<<"|                                                                                                                                                  |\n";
        cout<<"|                                                                                                                                                  |\n";
        cout<<"|                                                                                                                                                  |\n";
        cout<<"|                                                                                                                                                  |\n";
        cout<<"|                                                               EXECUTIVE CLASS                                                                    |\n";
        cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
        cout<<"|  F->  |01||02||##||04||##||##|        |09||10||11||12||13||01||02||##||04||##||##||##||08||09||10||11|            |02||##||04||##||##||##|       |\n";
        cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
        cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
        cout<<"|  G->  |01||02||##||04||##||##|        |09||10||11||12||13||01||02||##||04||##||##||##||08||09||10||11|            |02||##||04||##||##||##|       |\n";
        cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
        cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
        cout<<"|  H->  |01||02||##||04||##||##|        |09||10||11||12||13||01||02||##||04||##||##||##||08||09||10||11|            |02||##||04||##||##||##|       |\n";
        cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
        cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
        cout<<"|  I->  |01||02||##||04||##||##|        |09||10||11||12||13||01||02||##||04||##||##||##||08||09||10||11|            |02||##||04||##||##||##|       |\n";
        cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
        cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
        cout<<"|  J->  |01||02||##||04||##||##|        |09||10||11||12||13||01||02||##||04||##||##||##||08||09||10||11|            |02||##||04||##||##||##|       |\n";
        cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
        cout<<"|                                                                                                                                                  |\n";
        cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
        char seatChar;
        cout<<"Enter the row character : ";
        cin>>seatChar;
        if(seatChar=='F'||seatChar=='f') {
            Sleep(500);
            v._getFareChangeRow('F');
            fareChangeSeatSelectionF(_seatCount);
        }
        else if(seatChar=='G'||seatChar=='g') {
            Sleep(500);
            v._getFareChangeRow('G');
            fareChangeSeatSelectionG(_seatCount);
        }
        else if(seatChar=='H'||seatChar=='h') {
            Sleep(500);
            v._getFareChangeRow('H');
            fareChangeSeatSelectionH(_seatCount);
        }
        else if(seatChar=='I'||seatChar=='i') {
            Sleep(500);
            v._getFareChangeRow('I');
            fareChangeSeatSelectionI(_seatCount);
        }
        else if(seatChar=='J'||seatChar=='j') {
            Sleep(500);
            v._getFareChangeRow('J');
            fareChangeSeatSelectionJ(_seatCount);
        }
        else{
            cout<<"\n\nPlease Enter a Valid Seat Row (F - J) !\n";
            Sleep(500);
            changeFarePaymentLogin(price, line_number_tkt, line_number_id, _class);
        }
    }
    else if(_class=='P') {
        cout<<" __________________________________________________________________________________________________________________________________________________\n";
        cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
        cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
        cout<<"|                                                                                                                                                  |\n";
        cout<<"|                                                                                                                                                  |\n";
        cout<<"|                                                                                                                                                  |\n";
        cout<<"|                                                                 PREMIUM CLASS                                                                    |\n";
        cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
        cout<<"|  K->  |01||02||##||04||##||##||07||08||09||10||11||12||13||01||02||##||04||##||##||##||08||09||10||11||05||04||03||02||##||04||##||##||##|       |\n";
        cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
        cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
        cout<<"|  L->  |01||02||##||04||##||##||07||08||09||10||11||12||13||01||02||##||04||##||##||##||08||09||10||11||05||04||03||02||##||04||##||##||##|       |\n";
        cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
        cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
        char seatChar;
        cout<<"Enter the row character : ";
        cin>>seatChar;
        if(seatChar=='K'||seatChar=='k') {
            Sleep(500);
            v._getFareChangeRow('K');
            fareChangeSeatSelectionL(_seatCount);
        }
        else if(seatChar=='L'||seatChar=='l') {
            Sleep(500);
            v._getFareChangeRow('L');
            fareChangeSeatSelectionL(_seatCount);
        }
        else{
            cout<<"\n\nPlease Enter a Valid Seat Row (K or L) !\n";
            Sleep(500);
            changeFarePaymentLogin(price, line_number_tkt, line_number_id, _class);
        }
    }
}

void fareChangeSeatSelectionA(int seat_Count) {
    int seatCount = seat_Count;
    if(seatCount>9) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount==10) {
                cout<<"\nNormal Class :\n     Row B\n     Row E\n\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='B'||fRow=='b' ) {
                    v._getFareChangeRow('B');
                    fare_seatInputB(seatCount);
                }
                else if(fRow=='E'||fRow=='e' ) {
                    v._getFareChangeRow('E');
                    fare_seatInputE(seatCount);
                }
                else if(fRow=='F'||fRow=='f' ) {
                    v._getFareChangeRow('F');
                    fare_seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('I');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionA(seat_Count);
                }
            }
            else if(seatCount>=11&&seatCount<=15) {
                cout<<"\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='F'||fRow=='f' ) {
                    v._getFareChangeRow('F');
                    fare_seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionA(seat_Count);
                }
            }
            else if(seatCount==16) {
                cout<<"\nExecutive Class :\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionA(seat_Count);
                }
            }
            else if(seatCount>=17&&seatCount<=20) {
                cout<<"\nExecutive Class :\n     Row G\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionA(seat_Count);
                }
            }
            else if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionA(seat_Count);
                }
            }
            else if(seatCount==25) {
                string Pyn;
                cout<<"\nPremium Class :\n     Row L\n\n";
                cin>>Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')){
                    Sleep(500);
                    cout<<"Alas ! Your Seat Is Not Booked !"<<endl;
                    Sleep(700);
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    fareChangeSeatSelectionA(seat_Count);
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                fareChangeSeatSelectionA(seat_Count);
            }
        }
    }
    else {
        Sleep(500);
        v._getFareChangeRow('A');
        fare_seatInputA(seatCount);
    }
}
void fare_seatInputA(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 NORMAL CLASS                                                                     |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         A->  |01||02||##||04||##||##||##||08||09||10||11||12||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";   
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    int cnt;
    for(int i=0; i<=seatCount-1; i++) {
        fare_problemsolverA(i, seatCount);
    }
}
int fare_problemsolverA(int i, int seatCount) {
    int seatNumber[9], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=03&&tempSeatNumber!=05&&tempSeatNumber!=06&&tempSeatNumber!=07&&tempSeatNumber!=3&&tempSeatNumber!=5&&tempSeatNumber!=6&&tempSeatNumber!=7)&&(tempSeatNumber<=13&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    fare_seatInputA(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);   
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        fare_seatInputA(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        v._getFareChangeClass("Normal Class");
        fare_infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}

void fareChangeSeatSelectionB(int seat_Count) {
    int seatCount = seat_Count;
    if(seatCount>10) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount>=11&&seatCount<=15) {
                cout<<"\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='F'||fRow=='f' ) {
                    v._getFareChangeRow('F');
                    fare_seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionB(seat_Count);
                }
            }
            else if(seatCount==16) {
                cout<<"\nExecutive Class :\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionB(seat_Count);
                }
            }
            else if(seatCount>=17&&seatCount<=20) {
                cout<<"\nExecutive Class :\n     Row G\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionB(seat_Count);
                }
            }
             else if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionB(seat_Count);
                }
            }
            else if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')){
                    Sleep(500);
                    cout<<"Alas ! Your Seat Is Not Booked !"<<endl;
                    Sleep(700);
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    fareChangeSeatSelectionB(seat_Count);
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                fareChangeSeatSelectionB(seat_Count);
            }
        }
    }
    else {
        Sleep(500);
        v._getFareChangeRow('B');
        fare_seatInputB(seatCount);
    }
}
void fare_seatInputB(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 NORMAL CLASS                                                                     |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         B->  |01||##||03||04||05||06||07||08||##||##||11||12||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        fare_problemsolverB(i, seatCount);
    }
}
int fare_problemsolverB(int i, int seatCount) {
    int seatNumber[10], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=02&&tempSeatNumber!=9&&tempSeatNumber!=10&&tempSeatNumber!=2)&&(tempSeatNumber<=13&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    fare_seatInputB(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        fare_seatInputB(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        v._getFareChangeClass("Normal Class");
        fare_infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void fareChangeSeatSelectionC(int seat_Count) {
    int seatCount = seat_Count;
    if(seatCount>9) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount==10) {
                cout<<"\nNormal Class :\n     Row B\n     Row E\n\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='B'||fRow=='b' ) {
                    v._getFareChangeRow('B');
                    fare_seatInputB(seatCount);
                }
                else if(fRow=='E'||fRow=='e' ) {
                    v._getFareChangeRow('E');
                    fare_seatInputE(seatCount);
                }
                else if(fRow=='F'||fRow=='f' ) {
                    v._getFareChangeRow('F');
                    fare_seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionC(seat_Count);
                }
            }
            else if(seatCount>=11&&seatCount<=15) {
                cout<<"\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='F'||fRow=='f' ) {
                    v._getFareChangeRow('F');
                    fare_seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionC(seat_Count);
                }
            }
            else if(seatCount==16) {
                cout<<"\nExecutive Class :\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionC(seat_Count);
                }
            }
            else if(seatCount>=17&&seatCount<=20) {
                cout<<"\nExecutive Class :\n     Row G\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionC(seat_Count);
                }
            }
            else if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionC(seat_Count);
                }
            }
            else if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')){
                    Sleep(500);
                    cout<<"Alas ! Your Seat Is Not Booked !"<<endl;
                    Sleep(700);
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    fareChangeSeatSelectionC(seat_Count);
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                fareChangeSeatSelectionC(seat_Count);
            }
        }
    }
    else {
        Sleep(500);
        v._getFareChangeRow('C');
        fare_seatInputC(seatCount);
    }
}
void fare_seatInputC(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 NORMAL CLASS                                                                     |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         C->  |##||02||03||##||05||06||07||##||09||10||11||##||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        fare_problemsolverC(i, seatCount);
    }
}
int fare_problemsolverC(int i, int seatCount) {
    int seatNumber[9], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=01&&tempSeatNumber!=04&&tempSeatNumber!=8&&tempSeatNumber!=12&&tempSeatNumber!=1&&tempSeatNumber!=4)&&(tempSeatNumber<=13&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    fare_seatInputC(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        fare_seatInputC(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        v._getFareChangeClass("Normal Class");
        fare_infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void fareChangeSeatSelectionD(int seat_Count) {
    int seatCount = seat_Count;
    if(seatCount>9) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount==10) {
                cout<<"\nNormal Class :\n     Row B\n     Row E\n\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='B'||fRow=='b' ) {
                    v._getFareChangeRow('B');
                    fare_seatInputB(seatCount);
                }
                else if(fRow=='E'||fRow=='e' ) {
                    v._getFareChangeRow('E');
                    fare_seatInputE(seatCount);
                }
                else if(fRow=='F'||fRow=='f' ) {
                    v._getFareChangeRow('F');
                    fare_seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionD(seat_Count);
                }
            }
            else if(seatCount>=11&&seatCount<=15) {
                cout<<"\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='F'||fRow=='f' ) {
                    v._getFareChangeRow('F');
                    fare_seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionD(seat_Count);
                }
            }
            else if(seatCount==16) {
                cout<<"\nExecutive Class :\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionD(seat_Count);
                }
            }
            else if(seatCount>=17&&seatCount<=20) {
                cout<<"\nExecutive Class :\n     Row G\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionD(seat_Count);
                }
            }
            else if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionD(seat_Count);
                }
            }
            else if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')){
                    Sleep(500);
                    cout<<"Alas ! Your Seat Is Not Booked !"<<endl;
                    Sleep(700);
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    fareChangeSeatSelectionD(seat_Count);
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                fareChangeSeatSelectionD(seat_Count);
            }
        }
    }
    else {
        Sleep(500);
        v._getFareChangeRow('D');
        fare_seatInputD(seatCount);
    }
}
void fare_seatInputD(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 NORMAL CLASS                                                                     |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         D->  |##||##||03||04||05||06||##||##||09||10||11||12||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";   
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        fare_problemsolverD(i, seatCount);
    }
}
int fare_problemsolverD(int i, int seatCount) {
    int seatNumber[9], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=01&&tempSeatNumber!=02&&tempSeatNumber!=07&&tempSeatNumber!=8&&tempSeatNumber!=1&&tempSeatNumber!=2&&tempSeatNumber!=7)&&(tempSeatNumber<=13&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    fare_seatInputD(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        fare_seatInputD(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        v._getFareChangeClass("Normal Class");
        fare_infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void fareChangeSeatSelectionE(int seat_Count) {
    int seatCount = seat_Count;
    if(seatCount>10) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount>=11&&seatCount<=15) {
                cout<<"\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='F'||fRow=='f' ) {
                    v._getFareChangeRow('F');
                    fare_seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionE(seat_Count);
                }
            }
            else if(seatCount==16) {
                cout<<"\nExecutive Class :\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionE(seat_Count);
                }
            }
            else if(seatCount>=17&&seatCount<=20) {
                cout<<"\nExecutive Class :\n     Row G\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionE(seat_Count);
                }
            }
             else if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionE(seat_Count);
                }
            }
            else if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')){
                    Sleep(500);
                    cout<<"Alas ! Your Seat Is Not Booked !"<<endl;
                    Sleep(700);
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    fareChangeSeatSelectionE(seat_Count);
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                fareChangeSeatSelectionE(seat_Count);
            }
        }
    }
    else {
        Sleep(500);
        v._getFareChangeRow('E');
        fare_seatInputE(seatCount);
    }
}
void fare_seatInputE(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 NORMAL CLASS                                                                     |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|                                         E->  |01||##||##||04||05||06||07||08||09||##||11||12||13|                                                |\n";
    cout<<"|                                              ----------------------------------------------------                                                |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        fare_problemsolverE(i, seatCount);
    }
}
int fare_problemsolverE(int i, int seatCount) {
    int seatNumber[10], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=02&&tempSeatNumber!=03&&tempSeatNumber!=10&&tempSeatNumber!=2&&tempSeatNumber!=3)&&(tempSeatNumber<=13&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    fare_seatInputE(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        fare_seatInputE(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        v._getFareChangeClass("Normal Class");
        fare_infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void fareChangeSeatSelectionF(int seat_Count) {
    int seatCount = seat_Count;
    if(seatCount>15) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount==16) {
                cout<<"\nExecutive Class :\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionF(seat_Count);
                }
            }
            else if(seatCount>=17&&seatCount<=20) {
                cout<<"\nExecutive Class :\n     Row G\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    seatSelectionA();
                }
            }
             else if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionF(seat_Count);
                }
            }
            else if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')){
                    Sleep(500);
                    cout<<"Alas ! Your Seat Is Not Booked !"<<endl;
                    Sleep(700);
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    fareChangeSeatSelectionF(seat_Count);
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                fareChangeSeatSelectionF(seat_Count);
            }
        }
    }
    else {
        Sleep(500);
        v._getFareChangeRow('F');
        fare_seatInputF(seatCount);
    }
}
void fare_seatInputF(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                               EXECUTIVE CLASS                                                                    |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  F->  |01||##||03||##||##||06|        |07||08||09||10||11||##||##||##||15||##||17||##||19||20||##||22|            |23||##||##||26||##||##|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        fare_problemsolverF(i, seatCount);
    }
}
int fare_problemsolverF(int i, int seatCount) {
    int seatNumber[15], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=02&&tempSeatNumber!=04&&tempSeatNumber!=05&&tempSeatNumber!=12&&tempSeatNumber!=13&&tempSeatNumber!=14&&tempSeatNumber!=16&&tempSeatNumber!=18&&tempSeatNumber!=21&&tempSeatNumber!=24&&tempSeatNumber!=25&&tempSeatNumber!=27&&tempSeatNumber!=28&&tempSeatNumber!=2&&tempSeatNumber!=4&&tempSeatNumber!=5)&&(tempSeatNumber<=28&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    fare_seatInputF(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        fare_seatInputF(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        v._getFareChangeClass("Executive Class");
        fare_infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void fareChangeSeatSelectionG(int seat_Count) {
    int seatCount = seat_Count;
    if(seatCount>20) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionG(seat_Count);

                }
            }
            else if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')){
                    Sleep(500);
                    cout<<"Alas ! Your Seat Is Not Booked !"<<endl;
                    Sleep(700);
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    fareChangeSeatSelectionG(seat_Count);
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                fareChangeSeatSelectionG(seat_Count);
            }
        }
    }
    else {
        Sleep(500);
        v._getFareChangeRow('G');
        fare_seatInputG(seatCount);
    }
}
void fare_seatInputG(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                               EXECUTIVE CLASS                                                                    |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  G->  |01||02||##||##||05||06|        |07||08||09||10||11||##||13||##||15||16||17||##||19||##||21||22|            |23||##||##||26||27||28|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        fare_problemsolverG(i, seatCount);
    }
}
int fare_problemsolverG(int i, int seatCount) {
    int seatNumber[20], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=03&&tempSeatNumber!=04&&tempSeatNumber!=12&&tempSeatNumber!=14&&tempSeatNumber!=18&&tempSeatNumber!=20&&tempSeatNumber!=24&&tempSeatNumber!=25&&tempSeatNumber!=3&&tempSeatNumber!=4)&&(tempSeatNumber<=28&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    fare_seatInputG(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        fare_seatInputG(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        v._getFareChangeClass("Executive Class");
        fare_infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void fareChangeSeatSelectionH(int seat_Count) {
    int seatCount = seat_Count;
    if(seatCount>16) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount>=17&&seatCount<=20) {
                cout<<"\nExecutive Class :\n     Row G\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionH(seat_Count);
                }
            }
            else if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionH(seat_Count);
                }
            }
            else if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')){
                    Sleep(500);
                    cout<<"Alas ! Your Seat Is Not Booked !"<<endl;
                    Sleep(700);
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    fareChangeSeatSelectionH(seat_Count);
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                fareChangeSeatSelectionH(seat_Count);
            }
        }
    }
    else {
        Sleep(500);
        v._getFareChangeRow('H');
        fare_seatInputH(seatCount);
    }
}
void fare_seatInputH(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                               EXECUTIVE CLASS                                                                    |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  H->  |01||##||03||04||##||06|        |07||##||##||##||11||12||13||##||##||##||##||18||19||20||21||22|            |##||##||##||26||27||28|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        fare_problemsolverH(i, seatCount);
    }
}
int fare_problemsolverH(int i, int seatCount) {
    int seatNumber[16], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=02&&tempSeatNumber!=05&&tempSeatNumber!=2&&tempSeatNumber!=5&&tempSeatNumber!=8&&tempSeatNumber!=9&&tempSeatNumber!=10&&tempSeatNumber!=14&&tempSeatNumber!=15&&tempSeatNumber!=16&&tempSeatNumber!=17&&tempSeatNumber!=23&&tempSeatNumber!=24&&tempSeatNumber!=25)&&(tempSeatNumber<=28&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    fare_seatInputH(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        fare_seatInputH(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        v._getFareChangeClass("Executive Class");
        fare_infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void fareChangeSeatSelectionI(int seat_Count) {
    int seatCount = seat_Count;
    if(seatCount>8) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount==9||seatCount==10) {
                cout<<"\nNormal Class :\n     Row B\n     Row E\n\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='B'||fRow=='b' ) {
                    v._getFareChangeRow('B');
                    fare_seatInputB(seatCount);
                }
                else if(fRow=='E'||fRow=='e' ) {
                    v._getFareChangeRow('E');
                    fare_seatInputE(seatCount);
                }
                else if(fRow=='F'||fRow=='f' ) {
                    v._getFareChangeRow('F');
                    fare_seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionI(seat_Count);
                }
            }
            else if(seatCount>=11&&seatCount<=15) {
                cout<<"\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='F'||fRow=='f' ) {
                    v._getFareChangeRow('F');
                    fare_seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionI(seat_Count);
                }
            }
            else if(seatCount==16) {
                cout<<"\nExecutive Class :\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionI(seat_Count);
                }
            }
            else if(seatCount>=17&&seatCount<=20) {
                cout<<"\nExecutive Class :\n     Row G\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionI(seat_Count);
                }
            }
            else if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionI(seat_Count);
                }
            }
            else if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')){
                    Sleep(500);
                    cout<<"Alas ! Your Seat Is Not Booked !"<<endl;
                    Sleep(700);
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    fareChangeSeatSelectionI(seat_Count);
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                fareChangeSeatSelectionI(seat_Count);
            }
        }
    }
    else {
        Sleep(500);
        v._getFareChangeRow('I');
        fare_seatInputI(seatCount);
    }
}
void fare_seatInputI(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                               EXECUTIVE CLASS                                                                    |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  I->  |##||02||##||##||05||##|        |##||##||##||10||##||##||##||##||##||##||17||##||19||##||##||22|            |##||##||25||##||##||28|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        fare_problemsolverI(i, seatCount);
    }
}
int fare_problemsolverI(int i, int seatCount) {
    int seatNumber[8], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=01&&tempSeatNumber!=1&&tempSeatNumber!=03&&tempSeatNumber!=3&&tempSeatNumber!=04&&tempSeatNumber!=4&&tempSeatNumber!=06&&tempSeatNumber!=6&&tempSeatNumber!=07&&tempSeatNumber!=7&&tempSeatNumber!=8&&tempSeatNumber!=9&&tempSeatNumber!=11&&tempSeatNumber!=12&&tempSeatNumber!=13&&tempSeatNumber!=14&&tempSeatNumber!=15&&tempSeatNumber!=16&&tempSeatNumber!=18&&tempSeatNumber!=20&&tempSeatNumber!=21&&tempSeatNumber!=23&&tempSeatNumber!=24&&tempSeatNumber!=26&&tempSeatNumber!=27)&&(tempSeatNumber<=28&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    fare_seatInputI(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        fare_seatInputI(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        v._getFareChangeClass("Executive Class");
        fare_infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void fareChangeSeatSelectionJ(int seat_Count) {
    int seatCount = seat_Count;
    if(seatCount>4) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount<=4&&seatCount<=10) {
                cout<<"\nNormal Class :\n     Row B\n     Row E\n\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='B'||fRow=='b' ) {
                    v._getFareChangeRow('B');
                    fare_seatInputB(seatCount);
                }
                else if(fRow=='E'||fRow=='e' ) {
                    v._getFareChangeRow('E');
                    fare_seatInputE(seatCount);
                }
                else if(fRow=='F'||fRow=='f' ) {
                    v._getFareChangeRow('F');
                    fare_seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionJ(seat_Count);
                }
            }
            else if(seatCount>=11&&seatCount<=15) {
                cout<<"\nExecutive Class :\n     Row F\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='F'||fRow=='f' ) {
                    v._getFareChangeRow('F');
                    fare_seatInputF(seatCount);
                }
                else if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionJ(seat_Count);
                }
            }
            else if(seatCount==16) {
                cout<<"\nExecutive Class :\n     Row G\n     Row H\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='H'||fRow=='h' ) {
                    v._getFareChangeRow('H');
                    fare_seatInputH(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionJ(seat_Count);
                }
            }
            else if(seatCount>=17&&seatCount<=20) {
                cout<<"\nExecutive Class :\n     Row G\n\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='G'||fRow=='g' ) {
                    v._getFareChangeRow('G');
                    fare_seatInputG(seatCount);
                }
                else if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionJ(seat_Count);
                }
            }
            else if(seatCount>=21&&seatCount<=24) {
                cout<<"\nPremium Class :\n     Row K\n     Row L\n\n";
                char fRow;
                cout<<"In Which Row You Want To Book In : ";
                cin>>fRow;
                if(fRow=='K'||fRow=='k' ) {
                    v._getFareChangeRow('K');
                    fare_seatInputK(seatCount);
                }
                else if(fRow=='L'||fRow=='l' ) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else {
                    cout<<"Invalid Row Entered ! \n";
                    Sleep(700);
                    fareChangeSeatSelectionJ(seat_Count);
                }
            }
            else if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')){
                    Sleep(500);
                    cout<<"Alas ! Your Seat Is Not Booked !"<<endl;
                    Sleep(700);
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    fareChangeSeatSelectionJ(seat_Count);
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                fareChangeSeatSelectionJ(seat_Count);
            }
        }
    }
    else {
        Sleep(500);
        v._getFareChangeRow('J');
        fare_seatInputJ(seatCount);
    }
}
void fare_seatInputJ(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                               EXECUTIVE CLASS                                                                    |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|  J->  |##||02||##||##||##||##|        |##||##||##||##||##||##||##||14||##||##||##||##||##||##||##||22|            |##||24||##||##||##||##|       |\n";
    cout<<"|       ------------------------        ----------------------------------------------------------------            ------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        fare_problemsolverJ(i, seatCount);
    }
}
int fare_problemsolverJ(int i, int seatCount) {
    int seatNumber[4], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if(tempSeatNumber==02||tempSeatNumber==2||tempSeatNumber==14||tempSeatNumber==22||tempSeatNumber==24) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    fare_seatInputJ(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        seatInputJ(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        v._getFareChangeClass("Executive Class");
        fare_infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void fareChangeSeatSelectionK(int seat_Count) {
    int seatCount = seat_Count;
    if(seatCount>24) {
        string yn;
        cout<<seatCount<<" Seats Are Not Available In This Row\n";
        cout<<"Do You Want To Book Seat In Any Another Row (Yes/No) : ";
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            cout<<"\nRows with "<<seatCount<<" Available Seats Are As Follows\n";
            if(seatCount==25) {
                cout<<"\nPremium Class :\n     Row L\n\n";
                string Pyn;
                cout<<"Do You Want To Book In Row L (Yes/No) : ";
                cin>>Pyn;
                if((Pyn[0]=='Y'||Pyn[0]=='y')&&(Pyn[1]=='E'||Pyn[1]=='e')&&(Pyn[2]=='S'||Pyn[2]=='s')) {
                    v._getFareChangeRow('L');
                    fare_seatInputL(seatCount);
                }
                else if((Pyn[0]=='N'||Pyn[0]=='n')&&(Pyn[1]=='O'||Pyn[1]=='o')){
                    Sleep(500);
                    cout<<"Alas ! Your Seat Is Not Booked !"<<endl;
                    Sleep(700);
                    starter();
                }
                else {
                    Sleep(500);
                    cout<<"Invalid Input !"<<endl;
                    Sleep(700);
                    fareChangeSeatSelectionK(seat_Count);
                }
            }
            else {
                cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
                fareChangeSeatSelectionK(seat_Count);
            }
        }
    }
    else {
        Sleep(500);
        v._getFareChangeRow('K');
        fare_seatInputK(seatCount);
    }
}
void fare_seatInputK(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 PREMIUM CLASS                                                                    |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
    cout<<"|  K->  |01||02||03||04||05||##||07||08||09||10||11||12||13||##||##||##||##||18||19||20||21||##||##||24||25||26||27||28||##||##||31||32||33|       |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        fare_problemsolverK(i, seatCount);
    }
}
int fare_problemsolverK(int i, int seatCount) {
    int seatNumber[24], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=06&&tempSeatNumber!=6&&tempSeatNumber!=14&&tempSeatNumber!=15&&tempSeatNumber!=16&&tempSeatNumber!=17&&tempSeatNumber!=22&&tempSeatNumber!=23&&tempSeatNumber!=29&&tempSeatNumber!=30)&&(tempSeatNumber<=33&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    fare_seatInputK(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        fare_seatInputK(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        v._getFareChangeClass("Premium Class");
        fare_infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void fareChangeSeatSelectionL(int seat_Count) {
    int seatCount = seat_Count;
    if(seatCount>25) {
        string yn;
        cout<<"Alert ! Maximum of 25 Seats Are Allowed to be Booked in One Go\n"<<endl;
        cout<<"Do You Prefer to Book Any Lesser Number Of Seat Than "<<seatCount;
        cin>>yn;
        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
            seatArea(); // to be looked at
        }
        else if((yn[0]=='N'||yn[0]=='n')&&(yn[1]=='O'||yn[1]=='o')){
            cout<<"Alas ! Your Seat Is Not Booked !"<<endl;
            Sleep(700);
            starter();
        }
        else {
            Sleep(500);
            cout<<"Invalid Input !"<<endl;
            Sleep(700);
            fareChangeSeatSelectionL(seat_Count);
        }
    }
    else {
        Sleep(500);
        v._getFareChangeRow('L');
        fare_seatInputL(seatCount);
    }
}
void fare_seatInputL(int seatCount) {
    cout<<"\t\t\t\t\tPlease Select the Seats You Want to Book\n\n"<<endl;
    Sleep(500);
    cout<<" __________________________________________________________________________________________________________________________________________________\n";
    cout<<"|                                   --------------------------------------------------------------------------                                     |\n";
    cout<<"|                                                                 SCREEN THIS SIDE                                                                 |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                                                                                                  |\n";
    cout<<"|                                                                 PREMIUM CLASS                                                                    |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";
    cout<<"|  L->  |01||##||##||04||05||06||07||08||09||10||##||##||##||14||15||16||17||18||19||20||21||22||23||24||25||##||##||28||29||30||##||32||33|       |\n";
    cout<<"|       ------------------------------------------------------------------------------------------------------------------------------------       |\n";    
    cout<<"|__________________________________________________________________________________________________________________________________________________|\n\n";
    for(int i=0; i<=seatCount-1; i++) {
        fare_problemsolverL(i, seatCount);
    }
}
int fare_problemsolverL(int i, int seatCount) {
    int seatNumber[25], count=0;
    int tempSeatNumber;
    cout<<"Please Enter the Seat Number You want to Book : ";
    cin>>tempSeatNumber;
    if((tempSeatNumber!=02&&tempSeatNumber!=2&&tempSeatNumber!=03&&tempSeatNumber!=3&&tempSeatNumber!=11&&tempSeatNumber!=12&&tempSeatNumber!=13&&tempSeatNumber!=26&&tempSeatNumber!=27&&tempSeatNumber!=31)&&(tempSeatNumber<=33&&tempSeatNumber>=1)) {
        if(i!=0) {
            for(int j=0; j<=i; j++) { // optimized termination condition
                if(seatNumber[j]==tempSeatNumber) {
                    Sleep(1000);
                    cout<<"\nINVALID INPUT !\n\t";
                    Sleep(500);
                    cout<<": Seat Number "<<tempSeatNumber<<" is already booked For You ! \n";
                    Sleep(500);
                    count++;
                    system("cls");
                    cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
                    Sleep(1700);
                    fare_seatInputL(seatCount);
                }
            }
        }
        seatNumber[i]=tempSeatNumber;
        Sleep(1000);
        cout<<"Seat Number "<<tempSeatNumber<<" Is Booked For You, Move Ahead !\n\n";
        Sleep(1000);
    }
    else{
        Sleep(1000);
        cout<<"\nINVALID INPUT !\n\t";
        Sleep(500);
        cout<<": Seat Number "<<tempSeatNumber<<" is already booked ! \n";
        Sleep(500);
        count++;
        system("cls");
        cout<<"\n\nRe-Enter All The "<<seatCount<<" Seats \n";
        Sleep(1700);
        fare_seatInputL(seatCount);
    }
    if(i==seatCount-1&&count==0) {
        v._getFareChangeClass("Premium Class");
        fare_infoGather(seatNumber, seatCount);
        exit(0);
    }
    return 0;
}
void fare_infoGather(int seatNumber[], int seatCount) {   
    int tktLine = w._fetchTktLine();
    char row = v._fetchFareChangeRow();
    string bClass = v._fetchFareChangeClass();
    double price = 0;
    if(bClass=="Normal Class") {
        price += (110*seatCount)+((110*seatCount)*(0.18));
    }
    else if(bClass=="Executive Class") {
        price += (230*seatCount)+((230*seatCount)*(0.18));
    }
    else if(bClass=="Premium Class") {
        price += (450*seatCount)+((450*seatCount)*(0.18));
    }
    string seat = "Seat(S)  : ";
    string dash = "-";
        string lin;
        string bracket_open = "[";
        string bracket_close = "] ";
    for(int i=0; i<=seatCount-1; i++) {
        string r = bracket_open + row + dash;
        int seatNum = seatNumber[i];
        r += to_string(seatNum)+bracket_close;
        lin = lin+r;
    }
    string filename = "myMovieDet.txt";
    ifstream infile(filename);
    int line_number_to_read = tktLine + 9;
    string phNoline;
    int current_line_number = 1;
    while (getline(infile, phNoline)) {
        if (current_line_number == line_number_to_read) {
            break;
        }
        current_line_number++;
    }
    infile.close();
    char phNo[10];
    for(int i=0; i<=9; i++) {
        phNo[i] = phNoline[i+19];
    }
    long long phoneNumber;
    phoneNumber = atoll(phNo);
    fare_paymentLogin(seatNumber, seatCount, phoneNumber, price, tktLine, seat, lin, bClass, row);
}
int fare_paymentLogin(int a[], int seatCount, long long phNo, double price, int tktLine, string seat, string lin, string bClass, char row) {
    system("cls");
    system("color 0F");
    string _yn1;
    Sleep(700);
    char identifier = v._fetchFareChangeIdentifier();
    cout<<"\nYou Need To Login to Proceed For Payment, Shall We (Yes/No) : ";
    cin>>_yn1;
    if((_yn1[0]=='Y'||_yn1[0]=='y')&&(_yn1[1]=='E'||_yn1[1]=='e')&&(_yn1[2]=='S'||_yn1[2]=='s')) {
        system("cls");
        Sleep(700);
        cout<<"\nFor Security Reasons, You Need To Re-Enter Your Unique Id\n\n";
        Sleep(700);
        long long FinalBankBalance;
        int checkExistence = userExistence("NULL"); 
        if(checkExistence==0) {
            int confirmPassword = passwordMatch(); 
            if(confirmPassword==0) {
                string prompt = "\n\n\t\033[32m ACCESS_REQUEST \033[0m : Granted !\n\n";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(500);
                if(identifier=='f') { // denotes whether to add money or deduct money : f means deduct
                    string fBankBalance = returnBankBalance();
                    FinalBankBalance = convertToInt(fBankBalance);
                    double TicketPrice = price;
                    if((FinalBankBalance>TicketPrice)||(FinalBankBalance==TicketPrice)) {
                        double newBankBalance = FinalBankBalance - TicketPrice;
                        x._getNewBankBalance(newBankBalance);
                        y._getNewBankBalance(newBankBalance);
                        int lineFound = y._fetchLineFound();
                        string filename = "userDet.txt";
                        int line_number = lineFound+3;
                        string newBankBalance_String = to_string(newBankBalance);
                        string raw_str = "Bank Balance of The User : ";
                        string new_line = raw_str + newBankBalance_String;
                        ifstream infile(filename);
                        string temp_filename = "userDetF.txt";
                        ofstream outfile(temp_filename);
                        string line;
                        int current_line_number = 1;
                        while (getline(infile, line)) {
                            if (current_line_number == line_number) {
                                line = new_line;
                            }
                            outfile << line << endl;
                            current_line_number++;
                        }
                        infile.close();
                        outfile.close();
                        remove(filename.c_str());
                        rename(temp_filename.c_str(), filename.c_str());
                    // EDITING IN TICKET
                        ifstream inputFile("myMovieDet.txt");
                        vector<string> lines;
                        string _line;
                        string crntprice, word;
                        double crntBal;
                        for(int i = 1; getline(inputFile, _line); i++) {
                            if(i == tktLine+6) { //21
                                string join = seat + lin; 
                                _line = join;
                            }
                            if (i == tktLine+8) {
                                string join = "Class Booked : "+bClass;
                                _line = join;
                            }
                            if( i == tktLine+7) {
                                _line = _line.erase(0, 8);
                                crntBal = std::stod(_line);
                                crntBal = crntBal + price;
                                string part1 = "Price : ";
                                string part2 = to_string(crntBal);
                                string totalPart = part1+part2;
                                _line = totalPart;
                            }
                            if (i == tktLine+10) {
                                string join = "Booked Row : ";
                                string joined = join+row;
                                _line = joined;
                            }
                            lines.push_back(_line);
                        }
                        inputFile.close();
                        ofstream outputFile("myMovieDet.txt");
                        for(auto it = lines.begin(); it != lines.end(); it++) {
                            outputFile << *it <<endl;
                        }
                        outputFile.close();

                        fare_printTicket(a, seatCount, phNo);
                    }
                    else {
                        string yn;
                        Sleep(500);
                        cout<<"We Found That There isn't Enough Balance In Your Account To Pay For The Ticket\n\n";
                        cout<<"Relax ! You Can Earn Money By Playing A Game, After That You'll be Able to Continue Booking Your Ticket\n\n";
                        cout<<"Do You Wish To Play/Earn (Yes/No) : ";
                        cin>>yn;
                        if((yn[0]=='Y'||yn[0]=='y')&&(yn[1]=='E'||yn[1]=='e')&&(yn[2]=='S'||yn[2]=='s')) {
                            QuizGameModule();
                            fare_paymentLogin(a, seatCount, phNo, price, tktLine, seat, lin, bClass, row);
                        }
                        else if((yn[0]=='N'||yn[0]=='n')&&(yn[1]=='O'||yn[1]=='o')){
                            cout<<"\n\n\nWe Are Sorry To Say That Your Booking Session Is Terminated Due To Low Balance !\n\n\n";
                            passbook();
                            starter();
                        }
                        else {
                            Sleep(500);
                            cout<<"Invalid Input !"<<endl;
                            Sleep(700);
                            fare_paymentLogin(a, seatCount, phNo, price, tktLine, seat, lin, bClass, row);
                        }
                    }
                }
                else if(identifier=='i') { // denotes whether to add money or deduct money : i means add
                    double price2badded = price;
                    x._getNewBankBalance(price2badded);
                    y._getNewBankBalance(price2badded);
                    int lineFound = y._fetchLineFound();
                    string fBankBalance = returnBankBalance();
                    FinalBankBalance = convertToInt(fBankBalance);
                    price2badded += FinalBankBalance;
                    string filename = "userDet.txt";
                    int line_number = lineFound+3;
                    string newBankBalance_String = to_string(price2badded);
                    string new_line = newBankBalance_String;
                    string raw_str = "Bank Balance of The User : ";
                    new_line = raw_str + newBankBalance_String;
                    ifstream infile(filename);
                    string temp_filename = "userDetF.txt";
                    ofstream outfile(temp_filename);
                    string line;
                    int current_line_number = 1;
                    while (getline(infile, line)) {
                        if (current_line_number == line_number) {
                            line = new_line;
                        }
                        outfile << line << endl;
                        current_line_number++;
                    }
                    infile.close();
                    outfile.close();
                    remove(filename.c_str());
                    rename(temp_filename.c_str(), filename.c_str());
                    // EDITING IN TICKET
                    ifstream inputFile("myMovieDet.txt");
                    vector<string> lines;
                    string _line;
                    string crntprice, word;
                    double crntBal;
                    for(int i = 1; getline(inputFile, _line); i++) {
                        if(i == tktLine+6) { //21
                            string join = seat + lin; 
                            _line = join;
                        }
                        if (i == tktLine+8) {
                            string join = "Class Booked : "+bClass;
                            _line = join;
                        }
                        if( i == tktLine+7) {
                            _line = _line.erase(0, 8);
                            crntBal = std::stod(_line);
                            crntBal = crntBal - price;
                            string part1 = "Price : ";
                            string part2 = to_string(crntBal);
                            string totalPart = part1+part2;
                            _line = totalPart;
                        }
                        if (i == tktLine+10) {
                            string join = "Booked Row : ";
                            string joined = join+row;
                            _line = joined;
                        }
                        lines.push_back(_line);
                    }
                    inputFile.close();
                    ofstream outputFile("myMovieDet.txt");
                    for(auto it = lines.begin(); it != lines.end(); it++) {
                        outputFile << *it <<endl;
                    }
                    outputFile.close();
                    fare_printTicket(a, seatCount, phNo);
                }
            } 
            else if (confirmPassword!=0) {
                string prompt = "\n\n\t\033[31;2m ERROR_401 ACCESS_REQUEST\033[0m : Denied !\n\n";
                for(int i=0; i<=prompt.size(); i++) {
                    Sleep(30);
                    cout<<prompt[i];
                }
                Sleep(500);
                fare_paymentLogin(a, seatCount, phNo, price, tktLine, seat, lin, bClass, row);
            }
        }
        else if (checkExistence!=0) {
            Sleep(500);
            system("cls");
            Sleep(500);
            cout<<"\n\nUser Id Didn't Matched !\n\n";
            Sleep(500);
            cout<<"Booking Session Is Terminated !";
            Sleep(500);
        }  
    }
    else if((_yn1[0]=='N'||_yn1[0]=='n')&&(_yn1[1]=='O'||_yn1[1]=='o')) {
        Sleep(500);
        cout<<"Your Ticket Is Not Booked\n\n";
        Sleep(500);
        cout<<"Thank You !";
        Sleep(500);
        starter();
    }
    else {
        Sleep(500);
        cout<<"Invalid Input !\n";
        Sleep(700);
        fare_paymentLogin(a, seatCount, phNo, price, tktLine, seat, lin, bClass, row);
    }
}
void fare_printTicket(int tic_seatNum[], int tic_nOs, long long tic_phNo) {
        system("cls");
        string tic_Name, tic_Date, tic_time, tic_bClass, line_row, tic_audi;
        string tic_row;
        long long number = tic_phNo;
        long long digit[10];
        for(int i=0; i<10; i++) {
            digit[i]=number%10;
            number/=10;
        }
        long long tic_Id[26];
        tic_Id[0] = {0};
        // string details2bPrinted[6];
        int initiater = w._fetchTktLine();
        fstream read4tkt;
        read4tkt.open("myMovieDet.txt");
        string line;
        int currentLineNumber = 1;
        while(getline(read4tkt, line)) {
            if(currentLineNumber==initiater+1) {
                tic_Name = line;
            }
            if(currentLineNumber==initiater+2) {
                tic_Date = line;
            }
            if(currentLineNumber==initiater+3) {
                tic_time = line;
            }
            if(currentLineNumber==initiater+4) {
                tic_audi = line;
            }
            if(currentLineNumber==initiater+8) {
                tic_bClass = line;
            }
            if(currentLineNumber==initiater+10) {
                tic_row = line;
            }
            currentLineNumber++;
        }
        for(int i=1, j=0; i<=tic_nOs, j<=tic_nOs-1; i++, j++) {
            tic_Id[i] = (((digit[i]*8)*10)+(digit[i]*7));
            cout<<"       \t\t\t\t\t\t_______________________________________________________________\n\n";
            cout<<"       \t\t\t\t\t\t\t\t\tMOVIE TICKET  #"<<i<<"\n\n";
            cout<<"       \t\t\t\t\t\t\t\t        [Ticket Id : "<<tic_Id[i]<<"]\n\n";
            cout<<"       \t\t\t\t\t\t"<<tic_Name<<"\t\t\t     "<<tic_Date<<"\n";
            cout<<"       \t\t\t\t\t\t"<<tic_time<<"\t\t\t     "<<tic_audi<<"\n";
            cout<<"       \t\t\t\t\t\t"<<tic_bClass<<"\t\t     "<<tic_row<<"-"<<tic_seatNum[j]<<"\n";
            cout<<"       \t\t\t\t\t\t_______________________________________________________________\n\n";
            cout<<"       \t\t\t\t\t\t----------------------------------------------------------------\n\n";
            Sleep(900);
        }
    Sleep(1500);
    cout<<"\n\nCongratulations ! Your Ticket Has Been Updated Successfully."<<endl;
    Sleep(1500);
}
