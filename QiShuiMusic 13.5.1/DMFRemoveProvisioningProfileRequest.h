@interface DMFRemoveProvisioningProfileRequest : DMFTaskRequest
@property (nonatomic) NSString profileIdentifier;
@property (nonatomic) NSString managingProfileIdentifier;
- (void)setProfileIdentifier:;
- (id)profileIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)managingProfileIdentifier;
- (void)setManagingProfileIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
