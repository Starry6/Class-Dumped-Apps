@interface FTDeviceSupport : NSObject
@property (nonatomic) BOOL isTelephonyDevice;
@property (nonatomic) BOOL faceTimeAvailable;
@property (nonatomic) BOOL faceTimeBlocked;
@property (nonatomic) BOOL faceTimeSupported;
@property (nonatomic) BOOL callingAvailable;
@property (nonatomic) BOOL callingBlocked;
@property (nonatomic) BOOL callingSupported;
@property (nonatomic) BOOL multiwayAvailable;
@property (nonatomic) BOOL multiwayBlocked;
@property (nonatomic) BOOL multiwaySupported;
@property (nonatomic) BOOL nonWifiFaceTimeAvailable;
@property (nonatomic) BOOL nonWifiCallingAvailable;
@property (nonatomic) BOOL iMessageAvailable;
@property (nonatomic) BOOL iMessageBlocked;
@property (nonatomic) BOOL iMessageSupported;
@property (nonatomic) BOOL identityServicesSupported;
@property (nonatomic) BOOL madridAvailable;
@property (nonatomic) BOOL madridBlocked;
@property (nonatomic) BOOL madridSupported;
@property (nonatomic) BOOL conferencingEnabled;
@property (nonatomic) BOOL conferencingBlocked;
@property (nonatomic) BOOL conferencingAllowed;
@property (nonatomic) BOOL commCenterDead;
@property (nonatomic) BOOL accountModificationRestricted;
@property (nonatomic) BOOL isInMultiUserMode;
@property (nonatomic) BOOL wantsBreakBeforeMake;
@property (nonatomic) BOOL isC2KEquipment;
@property (nonatomic) BOOL supportsHDRdecoding;
@property (nonatomic) BOOL supportsSimultaneousVoiceAndDataRightNow;
@property (nonatomic) BOOL supportsAppleIDIdentification;
@property (nonatomic) BOOL supportsApplePay;
@property (nonatomic) BOOL supportsManateeForAppleCash;
@property (nonatomic) BOOL supportsRegionForAppleCash;
@property (nonatomic) BOOL supportsFMDV2;
@property (nonatomic) BOOL supportsVenice;
@property (nonatomic) BOOL supportsHandoff;
@property (nonatomic) BOOL supportsTethering;
@property (nonatomic) BOOL supportsSMS;
@property (nonatomic) BOOL supportsMMS;
@property (nonatomic) BOOL supportsWiFi;
@property (nonatomic) BOOL supportsCellularData;
@property (nonatomic) BOOL supportsWLAN;
@property (nonatomic) BOOL supportsNonWiFiFaceTime;
@property (nonatomic) BOOL supportsNonWiFiCalling;
@property (nonatomic) BOOL supportsKeySharing;
@property (nonatomic) BOOL supportsHarmony;
@property (nonatomic) BOOL supportsUWB;
@property (nonatomic) BOOL mmsConfigured;
@property (nonatomic) BOOL supportsFrontFacingCamera;
@property (nonatomic) BOOL supportsBackFacingCamera;
@property (nonatomic) BOOL supportsFunCam;
@property (nonatomic) BOOL supportsAnimojiV2;
@property (nonatomic) BOOL supportsHomeKitResident;
@property (nonatomic) BOOL supportsCinematicFraming;
@property (nonatomic) BOOL supportsHEIFEncoding;
@property (nonatomic) BOOL isGreenTea;
@property (nonatomic) NSDictionary telephonyCapabilities;
@property (nonatomic) NSString deviceName;
@property (nonatomic) NSString deviceColor;
@property (nonatomic) NSString enclosureColor;
@property (nonatomic) NSString deviceIDPrefix;
@property (nonatomic) NSString deviceTypeIDPrefix;
@property (nonatomic) NSString deviceRegionInfo;
@property (nonatomic) NSString model;
@property (nonatomic) NSString userAgentString;
@property (nonatomic) NSString productName;
@property (nonatomic) NSString productVersion;
@property (nonatomic) NSString productBuildVersion;
@property (nonatomic) NSString productOSVersion;
@property (nonatomic) NSString deviceInformationString;
@property (nonatomic) q performanceClass;
@property (nonatomic) q deviceType;
@property (nonatomic) BOOL registrationSupported;
@property (nonatomic) BOOL supportsSMSIdentification;
@property (nonatomic) BOOL SIMInserted;
@property (nonatomic) NSDictionary CTNetworkInformation;
@property (nonatomic) NSString telephoneNumber;
@property (nonatomic) BOOL lowRAMDevice;
@property (nonatomic) BOOL slowCPUDevice;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)deviceColor;
- (long long)deviceType;
- (void)operatorBundleChange:;
- (id)productName;
- (id)userAgentString;
- (id)model;
- (BOOL)supportsSMS;
- (void)carrierBundleChange:;
- (long long)memorySize;
- (BOOL)conferencingEnabled;
- (void)_handleSIMStatusChangedToStatus:;
- (id)productVersion;
- (BOOL)_legacy_supportsSMSIdentification;
- (id)init;
- (void)_handlePotentialPhoneNumberRegistrationStateChanged;
- (void)dealloc;
- (void)_updateCapabilities;
- (id)CTNetworkInformation;
- (id)telephoneNumber;
- (BOOL)callingSupported;
- (BOOL)isInMultiUserMode;
- (id)deviceName;
- (void)_lockdownStateChanged:;
- (BOOL)supportsFMDV2;
- (BOOL)madridSupported;
- (BOOL)multiwayAvailable;
- (BOOL)callingAvailable;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:;
- (BOOL)supportsNonWiFiFaceTime;
- (BOOL)faceTimeAvailable;
- (BOOL)supportsFunCam;
- (BOOL)isTelephonyDevice;
- (id)registrationState;
- (BOOL)multiwayBlocked;
- (BOOL)supportsApplePay;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:userInfo:;
- (BOOL)supportsMMS;
- (void)_commCenterAlive;
- (BOOL)supportsHomeKitResident;
- (BOOL)supportsKeySharing;
- (void)_registerForInternalCoreTelephonyNotifications;
- (BOOL)inProcess_isCallingSupported;
- (BOOL)iMessageSupported;
- (BOOL)conferencingBlocked;
- (void)_registerForLockdownNotifications;
- (BOOL)supportsHandoff;
- (void)_handleCarrierSettingsChanged;
- (BOOL)faceTimeSupported;
- (BOOL)supportsTethering;
- (id)_serviceStatus;
- (id)deviceRegionInfo;
- (BOOL)_enoughPowerToSupportEffects;
- (BOOL)nonBluetoothAvailableForBundleId:;
- (void)_invalidateValuesCachedForSelectedPhoneNumberRegistration;
- (BOOL)supportsHarmony;
- (BOOL)callingBlocked;
- (BOOL)supportsHDRdecoding;
- (void)_updateManagedConfigurationSettings;
- (BOOL)madridAvailable;
- (BOOL)supportsManateeForAppleCash;
- (BOOL)madridBlocked;
- (void)_registerForServiceStatusNotifications;
- (int)cpuFamily;
- (BOOL)lowRAMDevice;
- (BOOL)conferencingAllowed;
- (id)deviceTypeIDPrefix;
- (BOOL)supportsWiFi;
- (BOOL)isInDualPhoneIdentityMode;
- (BOOL)wifiAllowedForBundleId:;
- (BOOL)supportsAnimojiV2;
- (id)deviceIDPrefix;
- (void)_registerForCapabilityNotifications;
- (BOOL)nonWifiCallingAvailable;
- (BOOL)iMessageAvailable;
- (id)productOSVersion;
- (BOOL)commCenterDead;
- (BOOL)supportsSMSIdentification;
- (void).cxx_destruct;
- (id)productBuildVersion;
- (void)_unregisterForCommCenterReadyNotifications;
- (id)deviceInformationString;
- (BOOL)identityServicesSupported;
- (BOOL)supportsFrontFacingCamera;
- (BOOL)supportsVenice;
- (void)phoneNumberChanged:;
- (BOOL)slowCPUDevice;
- (void)_unregisterForServiceStatusNotifications;
- (BOOL)supportsHEIFEncoding;
- (void)_initializeSIMInsertedCachedValue;
- (void)_registerForCarrierNotifications;
- (BOOL)supportsBackFacingCamera;
- (BOOL)supportsSimultaneousVoiceAndDataRightNow;
- (id)enclosureColor;
- (void)_updateCTNetworkDictionary:key:withTelephonyNetworkValue:telephonyError:;
- (BOOL)multiwaySupported;
- (BOOL)isGreenTea;
- (BOOL)supportsCellularData;
- (BOOL)supportsWLAN;
- (BOOL)nonWifiAvailableForBundleId:;
- (BOOL)supportsAppleIDIdentification;
- (void)pnrReadyStateNotification:regState:;
- (BOOL)registrationSupported;
- (BOOL)SIMInserted;
- (id)telephonyCapabilities;
- (BOOL)mmsConfigured;
- (void)noteSelectedPhoneNumberRegistrationSubscriptionDidChange;
- (BOOL)accountModificationRestricted;
- (void)_registerForCommCenterReadyNotifications;
- (BOOL)nonWifiFaceTimeAvailable;
- (BOOL)iMessageBlocked;
- (BOOL)faceTimeBlocked;
- (void)_registerForManagedConfigurationNotifications;
- (BOOL)wantsBreakBeforeMake;
- (BOOL)isC2KEquipment;
- (BOOL)supportsCinematicFraming;
- (BOOL)supportsNonWiFiCalling;
- (void)simStatusDidChange:status:;
- (BOOL)supportsUWB;
- (void)_unregisterForManagedConfigurationNotifications;
- (long long)performanceClass;
- (BOOL)supportsRegionForAppleCash;
+ (id)sharedInstance;
+ (id)marketingNameForDeviceType:;
@end
