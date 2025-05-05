@interface AMSPurchaseSIWA : AMSPurchase
@property (nonatomic) AKAppleIDAuthenticationContext authenticationContext;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString serviceID;
@property (nonatomic) NSString teamID;
- (id)teamID;
- (id)serviceID;
- (id)authenticationContext;
- (void)setServiceID:;
- (void)setAuthenticationContext:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:;
- (void)setBundleID:;
- (id)appProvidedData;
- (id)initWithPurchaseType:buyParams:;
- (id)authenticationContextForRequest:;
- (void)setTeamID:;
+ (BOOL)supportsSecureCoding;
@end
