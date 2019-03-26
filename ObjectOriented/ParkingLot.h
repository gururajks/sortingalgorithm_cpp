#pragma once
#include "Common.h"

/*
Motorcycle can park in any spot except electric
Electric Car can park anywhere except motorcycle
Car can park anywhere except electric and motorcycle
*/

class ParkingLotPolicy
{
public:
	void policy()
	{

	}
};

class ParkingLot
{
public:
	ParkingLot(int electricCarSpots, int carSpots, int motorCycleSpots) 
		: electricCarSpots(electricCarSpots),
		carSpots(carSpots),
		motorCycleSpots(motorCycleSpots)
	{

	}

	bool canPark(Vehicle* vehicle)
	{
		
		return false;
	}

	void enterVehicle(Vehicle* vehicle)
	{
		if (canPark(vehicle))
		{
			vehicle->park(this);
		}
		else
		{
			cout << "Parking Lot FULL!" << endl;
		}
	}

	void exitVehicle(Vehicle* vehicle)
	{

	}

public:
	void takeUpElectricSpot()
	{
		electricCarSpots--;
	}

	void takeUpCarSpot()
	{
		carSpots--;
	}

	void takeUpMotorCycleSpot()
	{
		motorCycleSpots--;
	}

	void freeUpElectricSpot()
	{
		electricCarSpots++;
	}

	void freeUpCarSpot()
	{
		carSpots++;
	}

	void freeUpMotorCycleSpot()
	{
		motorCycleSpots++;
	}

private:
	map<int, Vehicle*> hMap;
	int electricCarSpots;
	int carSpots;
	int motorCycleSpots;
};

class Vehicle
{
public:
	Vehicle(int id) : id(id) {}
	virtual int getId() const { return id; }
	virtual void park(ParkingLot* lot) = 0;
private:
	int id;
};

class Car : public Vehicle
{
public:
	Car(int id) : Vehicle(id) {}
	virtual void park(ParkingLot* lot) override
	{
		lot->takeUpCarSpot();
	}
};

class ElectricCar : public Car
{
public:
	ElectricCar(int id) : Car(id) {}
	virtual void park(ParkingLot* lot) override
	{
		lot->takeUpElectricSpot();
	}
};

class MotorCycle : public Vehicle
{
public:
	MotorCycle(int id) : Vehicle(id) {}
	virtual void park(ParkingLot* lot) override
	{
		lot->takeUpMotorCycleSpot();
	}
};