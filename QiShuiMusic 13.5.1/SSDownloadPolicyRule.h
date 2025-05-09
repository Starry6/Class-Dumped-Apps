@interface SSDownloadPolicyRule : NSObject
@property (nonatomic) q downloadSizeLimit;
@property (nonatomic) NSSet applicationStates;
@property (nonatomic) NSSet networkTypes;
@property (nonatomic) NSSet userDefaultStates;
@property (nonatomic) BOOL cellularAllowed;
@property (nonatomic) BOOL wiFiAllowed;
@property (nonatomic) float batteryLevel;
@property (nonatomic) q cellularDataStates;
@property (nonatomic) q powerStates;
@property (nonatomic) q registrationStates;
@property (nonatomic) q timeLimitStates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (float)batteryLevel;
- (id)init;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)setBatteryLevel:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)addUserDefaultState:;
- (void)setDownloadSizeLimit:;
- (void)setCellularDataStates:;
- (void)setNetworkTypes:;
- (long long)downloadSizeLimit;
- (void)addApplicationState:;
- (id)applicationStates;
- (void)setApplicationStates:;
- (void)addNetworkType:;
- (BOOL)isCellularAllowed;
- (BOOL)isWiFiAllowed;
- (void)unionPolicyRule:;
- (long long)cellularDataStates;
- (id)networkTypes;
- (long long)powerStates;
- (void)setPowerStates:;
- (long long)registrationStates;
- (void)setRegistrationStates:;
- (long long)timeLimitStates;
- (void)setTimeLimitStates:;
- (id)userDefaultStates;
- (void)setUserDefaultStates:;
+ (BOOL)supportsSecureCoding;
@end
