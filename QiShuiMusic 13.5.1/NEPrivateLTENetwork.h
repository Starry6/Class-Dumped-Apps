@interface NEPrivateLTENetwork : NSObject
@property (nonatomic) NSString mobileCountryCode;
@property (nonatomic) NSString mobileNetworkCode;
@property (nonatomic) NSString trackingAreaCode;
- (id)mobileNetworkCode;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)mobileCountryCode;
- (void)setMobileCountryCode:;
- (void)setMobileNetworkCode:;
- (id)copyWithZone:;
- (id)trackingAreaCode;
- (void)setTrackingAreaCode:;
+ (BOOL)supportsSecureCoding;
@end
