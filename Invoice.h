#ifndef INVOICE_H_
#define INVOICE_H_

class Invoice {
  private:
    double discount;
    double charge;
    double price;

  public:
    Invoice(): discount(0), charge(0), price(0){};
    Invoice(double d, double c, double p): discount(d), charge(c), price(p){};

    void setDiscount(double);
    void setCharge(double);
    void setPrice(double);

    double getDiscount();
    double getCharge();
    double getPrice();

    double calcTotalPrice();
};

#endif
