@interface DMFSetAppAssociatedDomainsRequest : DMFAppRequest
@property (nonatomic) NSArray associatedDomains;
- (id)associatedDomains;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setAssociatedDomains:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
