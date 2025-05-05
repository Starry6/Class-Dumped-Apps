@interface IXPromisedAppReferenceSeed : IXOwnedDataPromiseSeed
@property (nonatomic) Q installationDomain;
@property (nonatomic) IXApplicationIdentity identity;
- (void)setIdentity:;
- (id)identity;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (Class)clientPromiseClass;
- (unsigned long long)installationDomain;
- (void)setInstallationDomain:;
+ (BOOL)supportsSecureCoding;
@end
