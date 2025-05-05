@interface DMFRemoveConfigurationRequest : DMFTaskRequest
@property (nonatomic) Q type;
@property (nonatomic) NSDictionary profile;
- (void)setType:;
- (void)setProfile:;
- (id)initWithCoder:;
- (id)profile;
- (void)encodeWithCoder:;
- (unsigned long long)type;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
