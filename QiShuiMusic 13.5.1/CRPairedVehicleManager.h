@interface CRPairedVehicleManager : NSObject
@property (nonatomic) CRCarKitServiceClient serviceClient;
- (id)init;
- (void)setServiceClient:;
- (id)serviceClient;
- (void).cxx_destruct;
- (void)syncFetchAllVehiclesWithCompletion:;
- (void)fetchAllVehiclesWithCompletion:;
- (void)fetchPairedVehiclesWithCompletion:;
- (void)saveVehicle:completion:;
- (void)removeVehicle:completion:;
- (id)_firstVehicleMatchingTest:;
- (id)vehicleForBluetoothAddress:;
- (id)vehicleNameForWiFiUUID:;
- (id)vehicleForCertificateSerial:;
- (id)saveVehicle:;
- (BOOL)removeVehicle:;
- (id)allVehicles;
- (id)pairedVehicles;
@end
