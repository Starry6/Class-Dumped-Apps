@interface DMFInstallAppRequest : DMFAppRequest
@property (nonatomic) Q licenseType;
@property (nonatomic) BOOL allowFreePurchases;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)licenseType;
- (void)setLicenseType:;
- (BOOL)allowFreePurchases;
- (void)setAllowFreePurchases:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
