@interface CTCallCapabilities : NSObject
@property (nonatomic) BOOL isWifiCallingAvailable;
@property (nonatomic) BOOL isVoLTECallingAvailable;
@property (nonatomic) BOOL isCSCallingAvailable;
@property (nonatomic) BOOL isEmergencyCallingOnWifiAllowed;
@property (nonatomic) BOOL isEmergencyCallingOnWifiAvailable;
@property (nonatomic) BOOL isCarrierSupportsEmergencyCallOnWifiNoLimit;
- (BOOL)isCarrierSupportsEmergencyCallOnWifiNoLimit;
- (void)setIsVoLTECallingAvailable:;
- (BOOL)isVoLTECallingAvailable;
- (id)initWithCoder:;
- (void)setIsEmergencyCallingOnWifiAvailable:;
- (void)encodeWithCoder:;
- (BOOL)isWifiCallingAvailable;
- (void)setIsCSCallingAvailable:;
- (BOOL)isEmergencyCallingOnWifiAllowed;
- (BOOL)isEmergencyCallingOnWifiAvailable;
- (id)description;
- (void)setIsEmergencyCallingOnWifiAllowed:;
- (BOOL)isCSCallingAvailable;
- (void)setIsWifiCallingAvailable:;
- (void)setIsCarrierSupportsEmergencyCallOnWifiNoLimit:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
