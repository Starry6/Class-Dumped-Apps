@interface FPAppMetadata : NSObject
@property (nonatomic) BOOL useDefaultProviderDomainID;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString providerDomainID;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSURL documentsURL;
@property (nonatomic) BOOL isManaged;
- (id)providerDomainID;
- (id)initWithCoder:;
- (void)setDisplayName:;
- (id)displayName;
- (void)encodeWithCoder:;
- (BOOL)isManaged;
- (void).cxx_destruct;
- (id)description;
- (void)setProviderDomainID:;
- (id)bundleID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)documentsURL;
- (id)initWithAppProxy:providerDomainID:;
- (BOOL)useDefaultProviderDomainID;
+ (BOOL)supportsSecureCoding;
+ (id)findBundleIDForCurrentPlatformInSet:;
+ (id)_localizedCustomDisplayNameForAppProxy:;
+ (id)_entitledCloudDocsContainerIDForAppProxy:;
+ (id)_entitledUbiquityContainerIDForAppProxy:;
+ (BOOL)_isContainerIDPermitted:;
@end
