@interface CTRemoteDevice : NSObject
@property (nonatomic) CTDeviceIdentifier deviceID;
@property (nonatomic) NSArray remoteDisplayPlans;
@property (nonatomic) NSArray remotePlans;
@property (nonatomic) BOOL isMultiESimEnabled;
- (unsigned long long)deviceType;
- (id)modelName;
- (id)init;
- (id)deviceName;
- (id)remotePlans;
- (id)initWithCoder:;
- (void)setDeviceID:;
- (id)deviceID;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)EID;
- (id)remoteDisplayPlans;
- (void)setRemoteDisplayPlans:;
- (void)setRemotePlans:;
- (BOOL)isMultiESimEnabled;
- (void)setIsMultiESimEnabled:;
+ (BOOL)supportsSecureCoding;
@end
