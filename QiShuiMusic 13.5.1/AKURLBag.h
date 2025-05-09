@interface AKURLBag : NSObject
@property (nonatomic) NSString altDSID;
@property (nonatomic) NSURL escapeHatchURL;
@property (nonatomic) <AKURLBagDictionaryProvider> bagProvider;
@property (nonatomic) NSURL basicAuthURL;
@property (nonatomic) NSURL startProvisioningURL;
@property (nonatomic) NSURL endProvisioningURL;
@property (nonatomic) NSURL syncAnisetteURL;
@property (nonatomic) NSURL upgradeEligibilityCheckURL;
@property (nonatomic) NSURL upgradeUIURL;
@property (nonatomic) NSURL validateCodeURL;
@property (nonatomic) NSURL checkInURL;
@property (nonatomic) NSURL notificationAckURL;
@property (nonatomic) NSURL iForgotURL;
@property (nonatomic) NSURL iForgotContinuationURL;
@property (nonatomic) NSURL createAppleIDURL;
@property (nonatomic) NSURL deviceListURL;
@property (nonatomic) NSURL trustedDevicesURL;
@property (nonatomic) NSURL trustedDevicesSummaryURL;
@property (nonatomic) NSURL absintheCertURL;
@property (nonatomic) NSURL absintheSessionURL;
@property (nonatomic) NSURL tokenUpgradeURL;
@property (nonatomic) NSURL configurationInfoURL;
@property (nonatomic) NSURL fetchConfigDataURL;
@property (nonatomic) NSURL changePasswordURL;
@property (nonatomic) NSURL validateVettingTokenURL;
@property (nonatomic) NSURL renewRecoveryTokenURL;
@property (nonatomic) NSURL circleURL;
@property (nonatomic) NSURL fetchFollowUps;
@property (nonatomic) NSURL fetchUserInfoURL;
@property (nonatomic) NSURL fetchAppInfoURL;
@property (nonatomic) NSURL fetchPrimaryBundleIDURL;
@property (nonatomic) NSURL fetchAuthenticationModeURL;
@property (nonatomic) NSURL storeModernRecoveryURL;
@property (nonatomic) NSURL acsURL;
@property (nonatomic) NSURL repairURL;
@property (nonatomic) NSURL userVerificationURL;
@property (nonatomic) NSURL appleIDAuthorizeHTMLResponseURL;
@property (nonatomic) NSURL createChildAccountURL;
@property (nonatomic) NSURL deleteAuthorizedAppURL;
@property (nonatomic) NSURL privateEmailManageURL;
@property (nonatomic) NSURL privacyRepairURL;
@property (nonatomic) NSSet appleOwnedDomains;
@property (nonatomic) NSSet appleIDAuthorizationURLs;
@property (nonatomic) NSDictionary custodianCodeConfiguration;
@property (nonatomic) NSDictionary inheritanceConfiguration;
@property (nonatomic) NSString APSEnvironment;
@property (nonatomic) Q IDMSEnvironment;
@property (nonatomic) Q lastKnownIDMSEnvironment;
@property (nonatomic) BOOL phoneNumberSupportedConfig;
@property (nonatomic) BOOL inlineFlowSupportedConfig;
@property (nonatomic) NSString continuationHeaderPrefix;
@property (nonatomic) NSArray securityUpgradeServiceNames;
- (id)userVerificationURL;
- (id)acsURL;
- (id)fetchAuthenticationModeURL;
- (BOOL)requestNewURLBagIfNecessaryWithError:;
- (id)absintheCertURL;
- (void)setAltDSID:;
- (unsigned long long)lastKnownIDMSEnvironment;
- (unsigned long long)IDMSEnvironment;
- (id)initWithAltDSID:;
- (id)changePasswordURL;
- (id)altDSID;
- (id)upgradeEligibilityCheckURL;
- (id)fetchPrimaryBundleIDURL;
- (void)_fetchURLBagWithCompletion:;
- (void)setBagProvider:;
- (void)forceUpdateBagWithUrlSwitchData:completion:;
- (id)configurationAtKey:fromCache:;
- (id)appleIDAuthorizationURLs;
- (id)trustedDevicesSummaryURL;
- (BOOL)IsInlineFlowSupportedConfig;
- (id)startProvisioningURL;
- (id)iForgotContinuationURL;
- (id)appleOwnedDomains;
- (id)basicAuthURL;
- (id)upgradeUIURL;
- (BOOL)isBaaEnabledForKey:;
- (id)storeModernRecoveryURL;
- (id)createAppleIDURL;
- (id)deleteAuthorizedAppURL;
- (id)tokenUpgradeURL;
- (id)custodianCodeConfiguration;
- (id)iForgotURL;
- (id)fetchFollowUps;
- (id)bagProvider;
- (id)configurationInfoURL;
- (id)renewRecoveryTokenURL;
- (id)urlAtKey:;
- (id)securityUpgradeServiceNames;
- (id)circleURL;
- (BOOL)isPhoneNumberSupportedConfig;
- (id)validateCodeURL;
- (id)notificationAckURL;
- (id)createChildAccountURL;
- (id)_requestNewURLBagIfNecessaryWithError:;
- (id)fetchAppInfoURL;
- (id)fetchUserInfoURL;
- (id)appleIDAuthorizeHTMLResponseURL;
- (id)escapeHatchURL;
- (id)APSEnvironment;
- (void).cxx_destruct;
- (id)checkInURL;
- (id)endProvisioningURL;
- (id)continuationHeaderPrefix;
- (void)requestNewURLBagIfNecessaryWithCompletion:;
- (id)syncAnisetteURL;
- (id)trustedDevicesURL;
- (id)validateVettingTokenURL;
- (id)fetchConfigDataURL;
- (id)_urlAtKey:;
- (id)_configurationsFromCache:withError:;
- (id)absintheSessionURL;
- (id)repairURL;
- (id)privacyRepairURL;
- (id)inheritanceConfiguration;
- (id)deviceListURL;
- (id)configurationAtKey:;
- (id)_requestEnvironmentsWithError:;
- (id)privateEmailManageURL;
- (id)_urlBagFromCache:withError:;
+ (id)bagForAltDSID:;
+ (id)sharedBag;
+ (unsigned long long)_IDMSEnvironmentFromString:;
+ (id)_currentBags;
+ (id)_requestEnvironmentsWithBag:;
+ (unsigned long long)IDMSEnvironmentFromBag:;
+ (BOOL)looksLikeiForgotURLKey:;
+ (id)keyForEscapeHatchURL;
@end
