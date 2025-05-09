@interface SSDevice : NSObject
@property (nonatomic) NSString compatibleProductType;
@property (nonatomic) q deviceType;
@property (nonatomic) I deviceTypeIdentifier;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString productType;
@property (nonatomic) NSString productVersion;
@property (nonatomic) float screenScale;
@property (nonatomic) NSString serialNumber;
@property (nonatomic) SSPromise storeFrontIdentifierPromise;
@property (nonatomic) NSString thinnedApplicationVariantIdentifier;
@property (nonatomic) NSString uniqueDeviceIdentifier;
@property (nonatomic) BOOL pluggedIn;
@property (nonatomic) double batteryLevel;
@property (nonatomic) NSString cloudMediaLibraryIdentifier;
@property (nonatomic) NSString mediaLibraryIdentifier;
@property (nonatomic) NSString softwareLibraryIdentifier;
@property (nonatomic) NSString clientVersion;
@property (nonatomic) NSString clientName;
@property (nonatomic) NSString storeFrontIdentifier;
@property (nonatomic) NSString legacyUserAgent;
@property (nonatomic) NSString userAgent;
@property (nonatomic) NSSet automaticDownloadKinds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serialNumber;
- (long long)deviceType;
- (id)userAgent;
- (void)showPromptWithIdentifier:completionHandler:;
- (id)productType;
- (void)sdk_loadStorefrontCountryCode:;
- (double)batteryLevel;
- (float)screenScale;
- (id)productVersion;
- (BOOL)isPluggedIn;
- (void)setStoreFrontIdentifier:accountIdentifier:;
- (id)init;
- (id)carrierBundleStatusForService:;
- (void)setCloudMediaLibraryIdentifier:;
- (id)clientName;
- (void)_invalidatePhoneNumber;
- (void)dealloc;
- (id)automaticDownloadKinds;
- (id)phoneNumber;
- (id)_diskCapacityString;
- (id)_newLegacyUserAgent:;
- (id)_copyProductType;
- (long long)_deviceTypeForUnknownIPod:;
- (BOOL)_is720pCapable;
- (long long)_deviceTypeForUnknownAppleTV:;
- (void)setMediaLibraryIdentifier:;
- (void)setAutomaticDownloadKinds:withCompletionBlock:;
- (void)setStoreFrontIdentifier:accountIdentifier:isTransient:;
- (id)_fairPlayDeviceTypeString;
- (void)getCellularNetworkingAllowedWithBlock:;
- (long long)_deviceTypeForUnknownIPad:;
- (void)setCellularNetworkingAllowed:;
- (long long)deviceBiometricStyle;
- (id)_userAgentClientNameForBundleID:;
- (id)_productVersion;
- (id)_userAgentClientNameForInfoPlist:;
- (void)setStoreFrontIdentifier:account:;
- (id)thinnedApplicationVariantIdentifier;
- (int)_screenClass;
- (id)_copyCarrierBundleEligibilityWithStatus:;
- (void)sdk_loadStoreFrontIdentifier:;
- (void)_postStoreFrontDidChangeNotification;
- (BOOL)isStoreFrontIdentifierTransient;
- (void)_updateBatteryLevelFromService:;
- (id)userAgentWithBundleRef:isCachable:;
- (id)softwareLibraryIdentifier;
- (void)_invalidateAutomaticDownloadKinds;
- (void)enableAllAutomaticDownloadKindsWithCompletionBlock:;
- (void)startPowerMonitoring;
- (void)_reloadPluggedInState;
- (id)copyStoreFrontRequestHeaders;
- (BOOL)supportsDeviceCapability:;
- (id)synchedStoreFrontIdentifier;
- (void)_cacheKeyValueStoreValues;
- (long long)_deviceTypeForUnknownIPhone:;
- (unsigned int)deviceTypeIdentifier;
- (void)loadStoreFrontWithCompletionHandler:;
- (void)setStoreFrontIdentifier:forRequest:response:account:;
- (id)_appleTVProductVersion;
- (id)_copyKeyValueStoreValueForDomain:key:;
- (BOOL)_is1080pCapable;
- (void)setSoftwareLibraryIdentifier:;
- (void)getCarrierBundleStatusForService:completionHandler:;
- (long long)_deviceTypeForProductType:;
- (void)reloadStoreFrontIdentifier;
- (id)_userAgentClientNameForAppleTVBundleID:;
- (void)setStoreFrontIdentifier:isTransient:;
- (void)unionAutomaticDownloadKinds:withCompletionBlock:;
- (id)cloudMediaLibraryIdentifier;
- (id)_userAgentClientVersionForInfoPlist:clientName:;
- (id)storeFrontIdentifier;
- (void)stopPowerMonitoring;
- (id)mediaLibraryIdentifier;
- (void)setStoreFrontIdentifier:account:isTransient:;
- (BOOL)_getDeviceType:error:;
- (void)_invalidateSoftwareCUID;
- (void)_updateAutomaticDownloadKinds:withValue:completionBlock:;
- (BOOL)getMachineIdentifier:otp:forAccountIdentifier:;
- (id)userAgentWithBundleIdentifier:version:;
- (void)setStoreFrontIdentifier:;
- (void)minusAutomaticDownloadKinds:withCompletionBlock:;
- (id)compatibleProductType;
- (void)setStoreFrontWithResponseHeaders:;
- (int)_deviceClass;
- (long long)_deviceType;
- (id)_newModernUserAgentWithClientName:version:isCachable:;
- (id)storeFrontIdentifierPromise;
- (id)clientVersion;
- (id)legacyUserAgent;
- (void)getAvailableItemKindsWithBlock:;
- (id)userAgentWithClientName:version:;
- (id)uniqueDeviceIdentifier;
- (void)synchronizeAutomaticDownloadKinds;
+ (id)currentDevice;
+ (BOOL)deviceIsSeedBuild;
+ (BOOL)setCachedAvailableItemKinds:;
+ (BOOL)deviceIsiPod;
+ (BOOL)deviceIsiPad;
+ (BOOL)deviceIsAudioAccessory;
+ (BOOL)promptNeedsDisplay:;
+ (BOOL)deviceIsAppleWatch;
+ (void)setLastPromptAttemptDate:forPromptWithIdentifier:;
+ (BOOL)deviceIsInternalBuild;
+ (BOOL)deviceIsiPhone;
+ (BOOL)deviceIsAppleTV;
+ (id)copyCachedAvailableItemKinds;
+ (void)setPromptWithIdentifier:needsDisplay:;
@end
