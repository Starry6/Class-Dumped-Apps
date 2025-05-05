@interface DMFDeleteUserRequest : DMFTaskRequest
@property (nonatomic) NSString username;
@property (nonatomic) BOOL forceDeletion;
- (id)username;
- (void)setUsername:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)forceDeletion;
- (void)setForceDeletion:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
