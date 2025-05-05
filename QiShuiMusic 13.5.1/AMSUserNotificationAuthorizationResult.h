@interface AMSUserNotificationAuthorizationResult : NSObject
@property (nonatomic) q authorizationStatus;
@property (nonatomic) AMSEngagementRequest request;
- (void)setAuthorizationStatus:;
- (long long)authorizationStatus;
- (id)initWithCoder:;
- (id)request;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setRequest:;
+ (BOOL)supportsSecureCoding;
@end
