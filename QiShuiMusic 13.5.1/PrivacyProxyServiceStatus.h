@interface PrivacyProxyServiceStatus : NSObject
@property (nonatomic) Q serviceStatus;
@property (nonatomic) NSArray networkStatuses;
@property (nonatomic) NSDictionary details;
- (void)setDetails:;
- (void)setServiceStatus:;
- (id)descriptionWithIndent:options:;
- (unsigned long long)serviceStatus;
- (void)setNetworkStatuses:;
- (id)initWithCoder:;
- (id)networkStatuses;
- (void)encodeWithCoder:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)description;
- (id)serialize;
- (id)details;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)serviceStatusString:;
@end
