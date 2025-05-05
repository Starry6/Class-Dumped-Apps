@interface DMFSetAppVPNUUIDRequest : DMFAppRequest
@property (nonatomic) NSString UUIDString;
- (void)setUUIDString:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)UUIDString;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
