@interface DMFSetAppConfigurationRequest : DMFAppRequest
@property (nonatomic) NSDictionary configuration;
- (id)initWithCoder:;
- (void)setConfiguration:;
- (void)encodeWithCoder:;
- (id)configuration;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
