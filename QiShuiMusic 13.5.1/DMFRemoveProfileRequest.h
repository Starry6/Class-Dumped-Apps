@interface DMFRemoveProfileRequest : DMFTaskRequest
@property (nonatomic) Q type;
@property (nonatomic) NSString profileIdentifier;
- (void)setProfileIdentifier:;
- (id)profileIdentifier;
- (void)setType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)type;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
