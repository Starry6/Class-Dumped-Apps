@interface IMBatteryStatus : NSObject
@property (nonatomic) <IMBatteryStatusTestDelegate> testDelegate;
@property (nonatomic) BOOL charging;
- (BOOL)isCharging;
- (id)testDelegate;
- (void).cxx_destruct;
- (void)setTestDelegate:;
@end
