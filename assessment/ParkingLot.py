class ParkedVehicle:
  def __init__(self, vehicleSeq, fourWheeler, parkedFor, valetParking, parkedStatus = 'Parked'):
    self.vehicleSeq = 0
    self.fourWheeler = ''
    self.parkedFor = 0.0
    self.valetParking = ''
    self.parkedStatus = parkedStatus
  
  def clearParkedStatus(self):
    self.parkedStatus = 'Cleared'
    return


class ParkingLot:
  def __init__(self, parkedVehicles = {}):
    self.parkd_vehicles = parkedVehicles
  
  def updateParkedStatus(self, lotNumber):
    for i in self.parkd_vehicles:
      if i == lotNumber:
        self.parkd_vehicles[i].clearParkedStatus()
        return tuple(i, self.parkd_vehicles[i].parkedStatus)
      else:
        return None

      
  
  def getParkingCharges(self, lotNumber):
    for i in self.parkd_vehicles:
      if i == lotNumber:
        vehicle = self.parkd_vehicles[i]
        totalCharge = 0
        
        if vehicle.fourWheeler == 'Yes':
          totalCharge += 50*vehicle.parkedFor
        else:
          totalCharge += 30*vehicle.parkedFor
        
        if vehicle.valetParking == 'Yes':
          totalCharge += 10

        return totalCharge
      else:
        return None
  



def main():
  parkedVehicles = {}

  numberOfVehicles = int(input())
  for i in numberOfVehicles:
    vehicleSeq = int(input())
    fourWheeler = input()
    parkedFor = float(input())
    valetParking = input()
    lotNumber = int(input())
  
    # creating and updating the parkedVehicle
    parkedVehicle = ParkedVehicle(vehicleSeq, fourWheeler, parkedFor, valetParking)
    parkedVehicles.update({lotNumber: parkedVehicle})
  parkingLot = ParkingLot(parkedVehicles)
  
  testLotNumber = int(input())


  # calculation
  result = parkingLot.updateParkedStatus(testLotNumber)
  if result is None:
    print('Lot Number Invalid')
  else:
    print(result)
  
  # charge calculation
  charge = parkingLot.getParkingCharges(lotNumber)
  if charge is None:
    print('Lot Number Invalid')
  else:
    print(charge)


if __name__ == 'main':
  main()
