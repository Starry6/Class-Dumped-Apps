@interface DMFOpenURLRequest : DMFTaskRequest
@property (nonatomic) NSURL url;
@property (nonatomic) NSString URLDisplayName;
@property (nonatomic) BOOL lockInApp;
@property (nonatomic) NSArray handlingBundleIdentifiers;
- (id)url;
- (id)initWithCoder:;
- (void)setUrl:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)lockInApp;
- (void)setLockInApp:;
- (id)URLDisplayName;
- (void)setURLDisplayName:;
- (id)handlingBundleIdentifiers;
- (void)setHandlingBundleIdentifiers:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
