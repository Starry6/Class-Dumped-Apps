@interface DMFOpenAppRequest : DMFTaskRequest
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString activityType;
@property (nonatomic) NSData activityData;
@property (nonatomic) BOOL lockInApp;
- (id)activityType;
- (void)setActivityType:;
- (id)bundleIdentifier;
- (id)initWithCoder:;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)activityData;
- (void)setActivityData:;
- (BOOL)lockInApp;
- (void)setLockInApp:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
