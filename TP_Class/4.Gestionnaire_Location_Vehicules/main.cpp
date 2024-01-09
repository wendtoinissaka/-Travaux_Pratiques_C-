#include "rental_manager.cpp"
#include "vehicle.cpp"
#include "rental_record.cpp"


#include <iostream>
#include <vector>
#include <ctime>

//
//int main() {
//    RentalManager rentalManager;
//
//    // Adding vehicles to the rental manager
//    rentalManager.addVehicle("Car", "Toyota");
//    rentalManager.addVehicle("Motorcycle", "Honda");
//    rentalManager.addVehicle("Truck", "Ford");
//
//    // Renting and returning vehicles
//    rentalManager.rentVehicle(0);
//    rentalManager.rentVehicle(1);
//    rentalManager.returnVehicle(0);
//
//    return 0;
//}


#include "rental_manager.h"
#include <iostream>

int main() {
    RentalManager rentalManager;
    int choix;

    std::cout << "\n********** GESTIONNAIRE DE LOCATION DE VEHICULES ************\n";

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Ajouter un véhicule\n";
        std::cout << "2. Louer un véhicule\n";
        std::cout << "3. Retourner un véhicule\n";
        std::cout << "4. Afficher la liste des véhicules\n";
        std::cout << "5. Quitter\n";
        std::cout << "\nChoix : ";
        std::cin >> choix;

        switch (choix) {
            case 1: {
                std::cout << "\n******** AJOUT D'UN NOUVEAU VEHICULE ********\n";
                std::string type, model;
                std::cout << "Type de véhicule : ";
                std::cin >> type;
                std::cout << "Modèle de véhicule : ";
                std::cin >> model;
                rentalManager.addVehicle(type, model);
                std::cout << "Véhicule ajouté avec succès!\n";
                break;
            }

            case 2: {
                std::cout << "\n******** LOCATION D'UN VEHICULE ********\n";
                int vehicleIndex;
                std::cout << "Indiquez l'index du véhicule à louer : ";
                std::cin >> vehicleIndex;
                rentalManager.rentVehicle(vehicleIndex);
                break;
            }

            case 3: {
                std::cout << "\n******** RETOUR D'UN VEHICULE ********\n";
                int recordIndex;
                std::cout << "Indiquez l'index de l'enregistrement de location à fermer : ";
                std::cin >> recordIndex;
                rentalManager.returnVehicle(recordIndex);
                break;
            }

            case 4: {
                std::cout << "\n******** LISTE DES VEHICULES ********\n";
                for (size_t i = 0; i < rentalManager.vehicles.size(); ++i) {
                    std::cout << i << ". " << rentalManager.vehicles[i].type << " - " << rentalManager.vehicles[i].model
                              << " - Disponibilité : " << (rentalManager.vehicles[i].available ? "Oui" : "Non") << std::endl;
                }
                break;
            }

            case 5: {
                std::cout << "\n********** MERCI POUR VOTRE UTILISATION DU GESTIONNAIRE ************\n";
                break;
            }

            default:
                std::cout << "Choix invalide. Veuillez entrer un choix valide.\n";
                break;
        }

    } while (choix != 5);

    return 0;
}


















//#include <iostream>
//#include <vector>
//#include <ctime>
//
//class Vehicle {
//public:
//    std::string type;
//    std::string model;
//    bool available;
//
//    Vehicle(const std::string& type, const std::string& model) : type(type), model(model), available(true) {}
//
//    void rent() {
//        if (available) {
//            available = false;
//            std::cout << "Vehicle rented: " << type << " - " << model << std::endl;
//        } else {
//            std::cout << "Sorry, the vehicle is not available for rent." << std::endl;
//        }
//    }
//
//    void returnVehicle() {
//        available = true;
//        std::cout << "Vehicle returned: " << type << " - " << model << std::endl;
//    }
//};
//
//class RentalRecord {
//public:
//    Vehicle* vehicle;
//    time_t startTime;
//    time_t endTime;
//    double cost;
//
//    RentalRecord(Vehicle* vehicle) : vehicle(vehicle) {
//        startTime = std::time(0);
//    }
//
//    void endRental() {
//        endTime = std::time(0);
//        // Calculate the cost based on rental duration, type of vehicle, etc.
//        // This is a simple example, you might want to implement a more sophisticated cost calculation.
//        cost = difftime(endTime, startTime) * 0.01; // Assuming a cost of 0.01 per second
//        std::cout << "Rental ended. Cost: " << cost << std::endl;
//    }
//};
//
//class RentalManager {
//public:
//    std::vector<Vehicle> vehicles;
//    std::vector<RentalRecord> rentalRecords;
//
//    void addVehicle(const std::string& type, const std::string& model) {
//        vehicles.emplace_back(type, model);
//    }
//
//    void rentVehicle(int vehicleIndex) {
//        if (vehicleIndex >= 0 && vehicleIndex < vehicles.size()) {
//            rentalRecords.emplace_back(&vehicles[vehicleIndex]);
//            rentalRecords.back().vehicle->rent();
//        } else {
//            std::cout << "Invalid vehicle index." << std::endl;
//        }
//    }
//
//    void returnVehicle(int recordIndex) {
//        if (recordIndex >= 0 && recordIndex < rentalRecords.size()) {
//            rentalRecords[recordIndex].endRental();
//            rentalRecords[recordIndex].vehicle->returnVehicle();
//        } else {
//            std::cout << "Invalid rental record index." << std::endl;
//        }
//    }
//};
//
//int main() {
//    RentalManager rentalManager;
//
//    // Adding vehicles to the rental manager
//    rentalManager.addVehicle("Car", "Toyota");
//    rentalManager.addVehicle("Motorcycle", "Honda");
//    rentalManager.addVehicle("Truck", "Ford");
//
//    // Renting and returning vehicles
//    rentalManager.rentVehicle(0);
//    rentalManager.rentVehicle(1);
//    rentalManager.returnVehicle(0);
//
//    return 0;
//}
