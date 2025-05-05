@interface PrivacyProxyServiceStatusTime : NSObject
@property (nonatomic) Q serviceStatus;
@property (nonatomic) NSDate serviceStatusStartTime;
@property (nonatomic) NSDate serviceStatusEndTime;
- (void)setServiceStatus:;
- (id)descriptionWithIndent:options:;
- (unsigned long long)serviceStatus;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)diagnostics;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)serviceStatusStartTime;
- (void)setServiceStatusStartTime:;
- (id)serviceStatusEndTime;
- (void)setServiceStatusEndTime:;
+ (BOOL)supportsSecureCoding;
@end
