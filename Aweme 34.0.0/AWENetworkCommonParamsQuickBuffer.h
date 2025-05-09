@interface AWENetworkCommonParamsQuickBuffer : NSObject
@property (nonatomic) BOOL p_teensMode;
@property (nonatomic) NSObject<OS_dispatch_queue> concurrentQueue;
@property (nonatomic) BOOL privacyAlertAgree;
@property (nonatomic) BOOL privacyAlertAgreeAndNotBaicMode;
@property (nonatomic) BOOL privacyGuestMode;
@property (nonatomic) NSString p_currentUserID;
@property (nonatomic) BOOL personalRecommendSwitch;
@property (nonatomic) NSString installID;
@property (nonatomic) NSString deviceID;
@property (nonatomic) NSString clientDeviceID;
@property (nonatomic) NSString klinkEgdi;
@property (nonatomic) NSString idfv;
@property (nonatomic) NSString idfa;
@property (nonatomic) NSString ironmanVersion;
@property (nonatomic) BOOL teensMode;
@property (nonatomic) NSString currentUserID;
@property (nonatomic) @? privacyAlertAgreeStatusChangeBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)teenModeDidChange:isLogout:;
- (void)teenPersonalRecommendSwitchChanged:;
- (id)idfv;
- (void)setIdfv:;
- (id)idfa;
- (void)setInstallID:;
- (void)setKlinkEgdi:;
- (id)klinkEgdi;
- (void)setIdfa:;
- (void)basicModeDidChange:;
- (id)p_currentUserID;
- (void)updatePersonalRecommendSwitch;
- (void)awe_privacyAlertAgreed;
- (BOOL)enableTrackerMissDid;
- (void)p_updateDeviceID;
- (void)p_updateInstallID;
- (void)p_updateKlinkEgdi;
- (void)p_update_device_info:install_id:;
- (void)setPrivacyAlertAgree:;
- (void)setPrivacyAlertAgreeAndNotBaicMode:;
- (void)setPrivacyGuestMode:;
- (id)privacyAlertAgreeStatusChangeBlock;
- (void)setP_teensMode:;
- (void)setP_currentUserID:;
- (BOOL)p_teensMode;
- (void)setPersonalRecommendSwitch:;
- (void)p_updateAccountStuff;
- (BOOL)privacyAlertAgree;
- (BOOL)privacyAlertAgreeAndNotBaicMode;
- (BOOL)personalRecommendSwitch;
- (BOOL)privacyGuestMode;
- (BOOL)isTeensMode;
- (id)clientDeviceID;
- (void)setClientDeviceID:;
- (void)setPrivacyAlertAgreeStatusChangeBlock:;
- (id)ironmanVersion;
- (void)setIronmanVersion:;
- (id)concurrentQueue;
- (id)init;
- (void)setDeviceID:;
- (id)installID;
- (void)setConcurrentQueue:;
- (void).cxx_destruct;
- (id)deviceID;
- (id)currentUserID;
+ (id)tncUpdateVersionCode;
+ (id)shared;
@end
