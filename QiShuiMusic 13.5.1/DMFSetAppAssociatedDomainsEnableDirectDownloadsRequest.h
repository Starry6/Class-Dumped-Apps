@interface DMFSetAppAssociatedDomainsEnableDirectDownloadsRequest : DMFAppRequest
@property (nonatomic) NSNumber associatedDomainsEnableDirectDownloads;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)associatedDomainsEnableDirectDownloads;
- (void)setAssociatedDomainsEnableDirectDownloads:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
