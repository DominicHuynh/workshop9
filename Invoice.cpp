
#include "Invoice.h"

Invoice::Invoice(std::string invoiceId) : invoiceId(invoiceId), dollarsOwed(0) {}

void Invoice::addServiceCost(double costDollars) {
    if (costDollars > 0) {
        dollarsOwed += costDollars;
    }
}

double Invoice::getDollarsOwed() {
    return dollarsOwed;
}

std::string Invoice::getInvoiceId() {
    return invoiceId;
}
