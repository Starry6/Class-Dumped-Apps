@interface DMFEchoRequest : DMFTaskRequest
@property (nonatomic) NSString echo;
@property (nonatomic) NSString resultStatus;
- (void)setResultStatus:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)resultStatus;
- (id)echo;
- (void)setEcho:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;
@end
