@interface DMFInstallProfileRequest : DMFTaskRequest
@property (nonatomic) Q style;
@property (nonatomic) Q type;
@property (nonatomic) NSString managingProfileIdentifier;
@property (nonatomic) NSData profileData;
@property (nonatomic) NSString personaID;
- (void)setPersonaID:;
- (id)personaID;
- (void)setProfileData:;
- (void)setType:;
- (void)setStyle:;
- (id)initWithCoder:;
- (id)profileData;
- (void)encodeWithCoder:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (unsigned long long)style;
- (id)managingProfileIdentifier;
- (void)setManagingProfileIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
