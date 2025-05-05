@interface MNVirtualGarageStandardProvider : NSObject
@property (nonatomic) <MNVirtualGarageProviderDelegate> virtualGarageDelegate;
@property (nonatomic) Q vehiclesCount;
@property (nonatomic) BOOL assumesFullCharge;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)virtualGarageDidUpdate:;
- (void).cxx_destruct;
- (unsigned long long)vehiclesCount;
- (void)startVirtualGarageUpdates;
- (void)stopVirtualGarageUpdates;
- (void)updatedVehicleStateWithHandler:;
- (id)virtualGarageDelegate;
- (void)setVirtualGarageDelegate:;
- (BOOL)assumesFullCharge;
- (void)_forceVirtualGarageSyncWithHandler:;
- (void)_sendVirtualGarageUpdateForSelectedVehicle:;
@end
