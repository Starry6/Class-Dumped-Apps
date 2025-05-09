@interface IDSCTAdapter : NSObject
@property (nonatomic) NSHashTable listeners;
@property (nonatomic) CoreTelephonyClient coreTelephonyClient;
@property (nonatomic) IDSCTAdapterCache cache;
@property (nonatomic) {os_unfair_lock_s=I} lock;
@property (nonatomic) NSMutableDictionary registrationStateByLabelID;
@property (nonatomic) IMSystemMonitor systemMonitor;
@property (nonatomic) BOOL dualSIMCapabilityEnabled;
@property (nonatomic) BOOL isAnySIMUsable;
@property (nonatomic) BOOL isAnySIMInserted;
@property (nonatomic) BOOL supportsIdentification;
@property (nonatomic) BOOL doesAnySIMSupportsSimultaneousVoiceAndDataRightNow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)subscriptionInfoDidChange;
- (void)operatorBundleChange:;
- (void)dualSimCapabilityDidChange;
- (void)removeListener:;
- (id)coreTelephonyClient;
- (id)initWithCoreTelephonyClient:systemMonitor:;
- (void)carrierBundleChange:;
- (void)setListeners:;
- (void)setCoreTelephonyClient:;
- (void)addListener:;
- (id)_unlocked_currentSIMsWithError:;
- (BOOL)_legacy_supportsSMSIdentification;
- (void)dealloc;
- (BOOL)supportsIdentification;
- (void)_unlocked_iterateListenersForSelector:block:;
- (id)listeners;
- (BOOL)isAnySIMUsable;
- (void)SIMStatusDidChange:status:;
- (void)setCache:;
- (void)_iterateListenersForSelector:block:;
- (void)_locked_accessCache:;
- (void)setSystemMonitor:;
- (BOOL)isAnySIMInserted;
- (id)lock;
- (BOOL)doesAnySIMSupportsSimultaneousVoiceAndDataRightNow;
- (id)SIMForIdentifier:;
- (id)systemMonitor;
- (void)context:pnrSupportChanged:;
- (void)didDetectSimDeactivation:info:;
- (BOOL)isPhoneNumberEmergencyNumber:;
- (void)setRegistrationStateByLabelID:;
- (void).cxx_destruct;
- (void)phoneNumberChanged:;
- (id)carrierBundleValueFromAllSIMsForKey:ofType:withFallback:;
- (id)registrationStateByLabelID;
- (void)pnrReadyStateNotification:regState:;
- (id)cache;
- (id)CTPNRForSIM:;
- (id)currentSIMsWithError:;
- (void)systemApplicationDidBecomeActive;
- (id)carrierBundleValueFromSIM:forKey:ofType:withFallback:;
- (void)_checkRegistrationStateForContext:;
- (id)contextForSim:;
- (void)context:capabilitiesChanged:;
- (BOOL)dualSIMCapabilityEnabled;
- (BOOL)isPNRNumber:andPhoneBookNumber:differentEnoughFromSIMIdentifier:toReregisterWithNewNumber:;
- (void)setLock:;
+ (id)sharedInstance;
+ (BOOL)isPhoneNumber:equivalentToExistingPhoneNumber:;
@end
