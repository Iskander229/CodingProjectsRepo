#include "Service.h"
#include <iostream>

Service::Service(const std::string& id, const std::string& name, double price, int duration)
    : serviceID(id), serviceName(name), price(price), duration(duration) {}

// Overload the < operator
bool Service::operator<(const Service& other) const {
    return serviceID < other.serviceID; // Compare based on serviceID
}

// Overload the > operator
bool Service::operator>(const Service& other) const {
    return serviceID > other.serviceID; // Compare based on serviceID
}

// Overload the == operator
bool Service::operator==(const Service& other) const {
    return serviceID == other.serviceID; // Compare based on serviceID
}

std::string Service::getServiceDetails() const {
    return "Service: " + serviceName + ", Service ID: "+ serviceID + ", Price: $" + std::to_string(price) + ", Duration: " + std::to_string(duration) + " mins";
}

std::string Service::getServiceID() const {
    return serviceID;
}

// Implement the getPrice method
double Service::getPrice() const {
    return price;
}