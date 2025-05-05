@interface SFBatteryInfo : NSObject
@property (nonatomic) double batteryLevel;
@property (nonatomic) q batteryState;
@property (nonatomic) q batteryType;
- (double)batteryLevel;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setBatteryLevel:;
- (id)description;
- (long long)batteryState;
- (void)setBatteryState:;
- (long long)batteryType;
- (void)setBatteryType:;
+ (BOOL)supportsSecureCoding;
@end
