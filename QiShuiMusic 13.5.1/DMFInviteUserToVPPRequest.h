@interface DMFInviteUserToVPPRequest : DMFTaskRequest
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString originator;
- (id)originator;
- (void)setOriginator:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setURL:;
- (id)URL;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
