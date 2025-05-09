@interface TRISystemConfiguration : NSObject
- (id)osBuild;
- (id)carrierBundleIdentifier;
- (id)carrierCountryIsoCode;
- (BOOL)isInternalBuild;
- (id)deviceClass;
- (BOOL)setDeviceIdentifier:;
- (id)deviceId;
- (id)init;
- (BOOL)isBetaBuild;
- (id)enabledInputModeIdentifiers;
- (id)userSettingsRegionCode;
- (id)userSettingsLanguageCode;
- (id)systemInfo;
- (id)initWithPaths:;
- (void).cxx_destruct;
- (int)populationType;
- (id)deviceModelCode;
- (BOOL)resetDeviceIdentifier;
- (id)_dispatchQueueForCarrierInfoGathering;
- (id)_systemInfoWithIsStale:;
- (id)reloadSystemInfo;
- (id)trialVersionTag;
- (id)_trialVersion;
- (unsigned long long)trialVersionMajor;
- (unsigned long long)trialVersionMinor;
- (BOOL)isBetaUserWithIsStale:;
- (id)readDeviceIdentifierWithPath:;
- (BOOL)deleteDeviceIdentifier;
- (BOOL)deleteDeviceIdentifierWithPath:;
- (BOOL)setDeviceIdentifier:path:;
- (id)createDeviceIdentifierWithPath:;
- (id)storedDeviceIdentifier;
- (id)createPersistentDeviceIdentifier;
- (id)deviceInfoForQuestion:;
- (id)reloadDeviceId;
- (id)osType;
- (id)userSettingsBCP47DeviceLocale;
- (id)marketingOSVersion;
+ (id)sharedInstance;
+ (id)_sharedSystemInfo;
@end
