@interface DMFFetchSecurityInformationRequest : DMFTaskRequest
@property (nonatomic) NSArray infoKeys;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)infoKeys;
- (void)setInfoKeys:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;
+ (id)currentPlatformSecurityInfoKeys;
+ (id)allPlatformSecurityInfoKeys;
+ (id)iOSSecurityInfoKeys;
+ (id)macOSSecurityInfoKeys;
+ (id)tvOSSecurityInfoKeys;
+ (id)watchOSSecurityInfoKeys;
@end
