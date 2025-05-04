@interface AWEPerfEvaluatePowerCollector : NSObject
@property (nonatomic) BOOL needBatteryLevel;
@property (nonatomic) BOOL needIsLowPowerMode;
@property (nonatomic) BOOL needIsCharge;
@property (nonatomic) BOOL needThermalStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)collectFeatures;
- (id)initWithJSONConfig:;
- (id)generateCompatibleConfig;
- (BOOL)needBatteryLevel;
- (BOOL)needIsCharge;
- (BOOL)needIsLowPowerMode;
- (BOOL)needThermalStatus;
- (id)description;
@end
