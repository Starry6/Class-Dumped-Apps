@interface DMFInstallConfigurationRequest : DMFTaskRequest
@property (nonatomic) Q type;
@property (nonatomic) NSString managingProfileIdentifier;
@property (nonatomic) NSDictionary profile;
- (void)setType:;
- (void)setProfile:;
- (id)initWithCoder:;
- (id)profile;
- (void)encodeWithCoder:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)managingProfileIdentifier;
- (void)setManagingProfileIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
