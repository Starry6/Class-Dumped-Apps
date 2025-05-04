@interface AWEAdPitayaHARServiceDataCollectionManager : HTSService
@property (nonatomic) NSNumber battery;
@property (nonatomic) BOOL isCharging;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initHARServiceDataCollectionManager;
- (BOOL)batteryStatus;
- (id)batteryParams;
- (void)startPredictingHARService;
- (id)getLastHARResult;
- (id)collectSensorDataFromHARService;
- (id)collectSensorDataFromHARServiceForSearch;
- (BOOL)isCharging;
- (void)setIsCharging:;
- (id)batteryLevel;
- (void).cxx_destruct;
- (id)battery;
- (void)setBattery:;
+ (id)sharedInstance;
@end
