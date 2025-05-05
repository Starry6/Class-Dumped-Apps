@interface DMFFetchRestrictionsRequest : DMFTaskRequest
@property (nonatomic) BOOL includeProfileRestrictions;
@property (nonatomic) Q profileFilterFlags;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)includeProfileRestrictions;
- (void)setIncludeProfileRestrictions:;
- (unsigned long long)profileFilterFlags;
- (void)setProfileFilterFlags:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;
@end
