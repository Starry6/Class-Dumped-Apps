@interface AMSUserNotificationAuthorizationOptions : NSObject
@property (nonatomic) Q authorizationOptions;
@property (nonatomic) NSDictionary metricsOverlay;
@property (nonatomic) BOOL userInitiated;
- (void)setUserInitiated:;
- (id)init;
- (id)initWithCoder:;
- (void)setAuthorizationOptions:;
- (void)encodeWithCoder:;
- (id)initWithOptionsDictionary:;
- (id)optionsDictionary;
- (void).cxx_destruct;
- (id)description;
- (BOOL)userInitiated;
- (BOOL)isEqual:;
- (unsigned long long)authorizationOptions;
- (id)copyWithZone:;
- (id)metricsOverlay;
- (void)setMetricsOverlay:;
+ (BOOL)supportsSecureCoding;
@end
