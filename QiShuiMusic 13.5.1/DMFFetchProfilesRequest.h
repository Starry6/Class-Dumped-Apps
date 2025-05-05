@interface DMFFetchProfilesRequest : DMFTaskRequest
@property (nonatomic) Q filterFlags;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)filterFlags;
- (void)setFilterFlags:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;
@end
