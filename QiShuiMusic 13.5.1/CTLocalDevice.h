@interface CTLocalDevice : NSObject
@property (nonatomic) CTDeviceIdentifier deviceID;
@property (nonatomic) NSArray installedPlans;
- (unsigned long long)deviceType;
- (id)init;
- (id)deviceName;
- (id)initWithCoder:;
- (void)setDeviceID:;
- (id)deviceID;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)EID;
- (id)installedPlans;
- (void)setInstalledPlans:;
+ (BOOL)supportsSecureCoding;
@end
