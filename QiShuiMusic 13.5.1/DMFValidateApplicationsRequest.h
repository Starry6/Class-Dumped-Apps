@interface DMFValidateApplicationsRequest : DMFTaskRequest
@property (nonatomic) NSArray bundleIdentifiers;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)bundleIdentifiers;
- (void)setBundleIdentifiers:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
