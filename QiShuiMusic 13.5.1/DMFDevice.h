@interface DMFDevice : NSObject
@property (nonatomic) NSDictionary errorsForKeys;
@property (nonatomic) NSNumber availableCapacity;
@property (nonatomic) NSNumber batteryLevel;
@property (nonatomic) NSString bluetoothAddress;
@property (nonatomic) NSString buildVersion;
@property (nonatomic) NSNumber capacity;
@property (nonatomic) NSString deviceName;
@property (nonatomic) NSNumber deviceType;
@property (nonatomic) NSNumber isAppleInternal;
@property (nonatomic) NSNumber isAwaitingConfiguration;
@property (nonatomic) NSNumber isDeviceLocatorServiceEnabled;
@property (nonatomic) NSNumber isDoNotDisturbInEffect;
@property (nonatomic) NSNumber isInSingleAppMode;
@property (nonatomic) NSNumber isLostModeEnabled;
@property (nonatomic) NSString iTunesStoreAccountHash;
@property (nonatomic) NSNumber iTunesStoreAccountIsActive;
@property (nonatomic) NSString marketingName;
@property (nonatomic) NSString model;
@property (nonatomic) NSString modelName;
@property (nonatomic) NSString osVersion;
@property (nonatomic) NSString productName;
@property (nonatomic) NSString serialNumber;
@property (nonatomic) NSString wifiAddress;
@property (nonatomic) NSNumber isAppAnalyticsEnabled;
@property (nonatomic) NSNumber isCloudBackupEnabled;
@property (nonatomic) NSNumber isDiagnosticSubmissionEnabled;
@property (nonatomic) NSNumber isSupervised;
@property (nonatomic) NSDate lastCloudBackupDate;
@property (nonatomic) NSString uniqueIdentifier;
@property (nonatomic) NSString carrierSettingsVersion;
@property (nonatomic) NSNumber cellularTechnology;
@property (nonatomic) NSString currentCarrierNetwork;
@property (nonatomic) NSString currentMCC;
@property (nonatomic) NSString currentMNC;
@property (nonatomic) NSString EASIdentifier;
@property (nonatomic) NSNumber enforcedSoftwareUpdateDelay;
@property (nonatomic) NSString ICCID;
@property (nonatomic) NSString IMEI;
@property (nonatomic) NSNumber isActivationLockEnabled;
@property (nonatomic) NSNumber isDataRoamingEnabled;
@property (nonatomic) NSNumber isEphemeralMultiUser;
@property (nonatomic) NSNumber isNetworkTethered;
@property (nonatomic) NSNumber isPersonalHotspotEnabled;
@property (nonatomic) NSNumber isRoaming;
@property (nonatomic) NSNumber isVoiceRoamingEnabled;
@property (nonatomic) NSNumber maximumResidentUsers;
@property (nonatomic) NSString MEID;
@property (nonatomic) NSString modemFirmwareVersion;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSDictionary serviceSubscriptions;
@property (nonatomic) NSArray skippedSetupPanes;
@property (nonatomic) NSString subscriberCarrierNetwork;
@property (nonatomic) NSString subscriberMCC;
@property (nonatomic) NSString subscriberMNC;
@property (nonatomic) NSArray activeManagedUsers;
@property (nonatomic) NSArray autoSetupAdminAccounts;
@property (nonatomic) NSString hostName;
@property (nonatomic) NSDictionary installedExtensions;
@property (nonatomic) NSNumber isSystemIntegrityProtectionEnabled;
@property (nonatomic) NSString localHostName;
@property (nonatomic) NSDictionary osUpdateSettings;
@property (nonatomic) NSDictionary xsanConfiguration;
@property (nonatomic) NSString destinationIdentifier;
- (id)MEID;
- (id)serialNumber;
- (id)ICCID;
- (id)deviceType;
- (id)capacity;
- (id)productName;
- (id)modelName;
- (id)model;
- (id)buildVersion;
- (id)isCloudBackupEnabled;
- (id)batteryLevel;
- (id)osVersion;
- (id)phoneNumber;
- (id)uniqueIdentifier;
- (id)deviceName;
- (id)isSupervised;
- (id)initPrivate;
- (id)isEphemeralMultiUser;
- (id)valueForKey:error:;
- (id)isAwaitingConfiguration;
- (id)destinationIdentifier;
- (id)marketingName;
- (id)valueForUndefinedKey:;
- (id)isAppAnalyticsEnabled;
- (id)isAppleInternal;
- (void)setValue:forUndefinedKey:;
- (id)IMEI;
- (void).cxx_destruct;
- (id)isInSingleAppMode;
- (id)isRoaming;
- (id)hostName;
- (id)bluetoothAddress;
- (id)wifiAddress;
- (id)availableCapacity;
- (id)isDeviceLocatorServiceEnabled;
- (id)isDoNotDisturbInEffect;
- (id)isLostModeEnabled;
- (id)iTunesStoreAccountHash;
- (id)iTunesStoreAccountIsActive;
- (id)isDiagnosticSubmissionEnabled;
- (id)lastCloudBackupDate;
- (id)carrierSettingsVersion;
- (id)cellularTechnology;
- (id)currentCarrierNetwork;
- (id)currentMCC;
- (id)currentMNC;
- (id)EASIdentifier;
- (id)enforcedSoftwareUpdateDelay;
- (id)isActivationLockEnabled;
- (id)isDataRoamingEnabled;
- (id)isNetworkTethered;
- (id)isPersonalHotspotEnabled;
- (id)isVoiceRoamingEnabled;
- (id)maximumResidentUsers;
- (id)modemFirmwareVersion;
- (id)serviceSubscriptions;
- (id)skippedSetupPanes;
- (id)subscriberCarrierNetwork;
- (id)subscriberMCC;
- (id)subscriberMNC;
- (id)activeManagedUsers;
- (id)autoSetupAdminAccounts;
- (id)installedExtensions;
- (id)isSystemIntegrityProtectionEnabled;
- (id)localHostName;
- (id)osUpdateSettings;
- (id)xsanConfiguration;
- (id)errorsForKeys;
- (void)setErrorsForKeys:;
+ (id)propertyNameForKey:;
+ (id)_sanitizedDeviceKey:;
@end
