@interface MNVirtualGarageManager : NSObject
@property (nonatomic) VGVehicle lastVehicle;
@property (nonatomic) Q vehiclesCount;
@property (nonatomic) BOOL assumesFullCharge;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setProvider:;
- (void)dealloc;
- (id)initPrivate;
- (void)_stop;
- (void).cxx_destruct;
- (void)_start;
- (void)unregisterObserver:;
- (void)registerObserver:;
- (unsigned long long)vehiclesCount;
- (void)updatedVehicleStateWithHandler:;
- (BOOL)assumesFullCharge;
- (void)virtualGarageProvider:didUpdateSelectedVehicle:;
- (void)setTraceRecorder:;
- (id)_standardVirtualGarageProvider;
- (BOOL)_isStandardProvider:;
- (id)lastVehicle;
+ (id)sharedManager;
@end
