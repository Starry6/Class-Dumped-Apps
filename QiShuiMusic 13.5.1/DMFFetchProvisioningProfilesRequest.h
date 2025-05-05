@interface DMFFetchProvisioningProfilesRequest : DMFTaskRequest
@property (nonatomic) BOOL managedOnly;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)managedOnly;
- (void)setManagedOnly:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;
@end
