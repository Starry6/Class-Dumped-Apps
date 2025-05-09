@interface AMSProcessInfo : NSObject
@property (nonatomic) AMSMappedBundleInfo mappedBundleInfo;
@property (nonatomic) BOOL accountsDaemon;
@property (nonatomic) NSString accountMediaType;
@property (nonatomic) NSData auditTokenData;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSURL bundleURL;
@property (nonatomic) NSString clientVersion;
@property (nonatomic) NSString executableName;
@property (nonatomic) NSString localizedName;
@property (nonatomic) NSString partnerHeader;
@property (nonatomic) NSString proxyAppBundleID;
@property (nonatomic) NSString treatmentNamespace;
@property (nonatomic) NSString userAgentSuffix;
- (id)mappedBundleInfo;
- (id)executableName;
- (void)setLocalizedName:;
- (id)init;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)generateConfigurationFromBagContract:;
- (id)userAgentSuffix;
- (void)setBundleURL:;
- (id)auditTokenData;
- (void)setAccountMediaType:;
- (void)setExecutableName:;
- (void)setTreatmentNamespace:;
- (void)setClientVersion:;
- (id)localizedName;
- (id)initWithBundleIdentifier:;
- (id)generateConfigurationFromBag:;
- (id)accountMediaType;
- (id)initWithCoder:;
- (id)proxyAppBundleID;
- (id)generateConfiguration;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void)setProxyAppBundleID:;
- (id)treatmentNamespace;
- (void).cxx_destruct;
- (void)setAuditTokenData:;
- (id)description;
- (id)partnerHeader;
- (void)setPartnerHeader:;
- (void)setUserAgentSuffix:;
- (BOOL)isEqual:;
- (BOOL)isAccountsDaemon;
- (id)clientVersion;
- (id)copyWithZone:;
+ (id)stringForEntitlement:;
+ (BOOL)boolForEntitlement:;
+ (BOOL)isBuddyRunning;
+ (BOOL)supportsSecureCoding;
+ (id)valueForEntitlement:;
+ (void)_accessProcessInfoCache:;
+ (void)_cacheProcessInfo:;
+ (id)_bundleRecordForIdentifier:;
+ (BOOL)boolForMachLookupAccess:;
+ (id)defaultMediaTypeForCurrentProcess;
+ (void)copyPropertiesFrom:to:;
+ (id)currentProcess;
+ (id)_bundleForIdentifier:record:;
+ (id)_cachedProcessInfoForIdentifier:;
+ (id)_currentProcessBundleIdentifier;
+ (BOOL)hasAMSEntitlement;
+ (void)setDefaultMediaTypeForCurrentProcess:;
@end
