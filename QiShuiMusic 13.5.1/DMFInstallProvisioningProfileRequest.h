@interface DMFInstallProvisioningProfileRequest : DMFTaskRequest
@property (nonatomic) NSString managingProfileIdentifier;
@property (nonatomic) NSData profileData;
- (void)setProfileData:;
- (id)initWithCoder:;
- (id)profileData;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)managingProfileIdentifier;
- (void)setManagingProfileIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
