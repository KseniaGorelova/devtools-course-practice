//Copyright 2018 Vyunov Roman
#ifndef DEBT_SERVICE_H_
#define DEBT_SERVICE_H_
class DebtService {
private:
    int loan_amount_;
    int loan_term_;
    int loan_rate_;

public:
    DebtService ():loan_amount_(0), loan_term_(0), loan_rate_(0);
    // DebtService& operator= (const DebtService& ds);
    // DebtService& operator= (const DebtService&& ds);
    DebtService (int loan_amount, int loan_term, int loan_rate):
        loan_amount_(loan_amount),
        loan_term_(loan_term),
        loan_rate_(loan_rate) {};

    virtual ~DebtService ();
};
#endif
