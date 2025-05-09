@interface IMLockdownManager : NSObject
@property (nonatomic) Q _state;
@property (nonatomic) BOOL _settingUpActivationState;
@property (nonatomic) BOOL _isVendorInstall;
@property (nonatomic) BOOL _isInternalInstall;
@property (nonatomic) BOOL _isNonUIInstall;
@property (nonatomic) BOOL _isCarrierInstall;
@property (nonatomic) BOOL _hasShownWaitingAlertThisSession;
@property (nonatomic) BOOL _hasShownMismatchedSIM;
@property (nonatomic) BOOL isNonUIInstall;
@property (nonatomic) BOOL isVendorInstall;
@property (nonatomic) BOOL isInternalInstall;
@property (nonatomic) BOOL isCarrierInstall;
@property (nonatomic) BOOL isActivated;
@property (nonatomic) BOOL isExpired;
@property (nonatomic) NSString uniqueDeviceIdentifier;
- (unsigned long long)_state;
- (BOOL)isInternalInstall;
- (id)init;
- (void)_setState:;
- (BOOL)_hasShownWaitingAlertThisSession;
- (void)dealloc;
- (void)set_isCarrierInstall:;
- (void)set_hasShownWaitingAlertThisSession:;
- (BOOL)isExpired;
- (BOOL)_isInternalInstall;
- (void)_checkMobileActivation;
- (void)_resetActivationState;
- (void)_calculateInstallType;
- (void)set_isNonUIInstall:;
- (BOOL)_hasShownMismatchedSIM;
- (BOOL)_isCarrierInstall;
- (void)set_isVendorInstall:;
- (void)set_settingUpActivationState:;
- (void)set_hasShownMismatchedSIM:;
- (void)set_isInternalInstall:;
- (BOOL)_settingUpActivationState;
- (BOOL)_isNonUIInstall;
- (BOOL)isActivated;
- (BOOL)isVendorInstall;
- (id)description;
- (BOOL)isCarrierInstall;
- (void)_checkLockdown;
- (BOOL)isNonUIInstall;
- (BOOL)_isVendorInstall;
- (void)_setupActivationState;
- (long long)lockdownState;
- (id)uniqueDeviceIdentifier;
+ (id)sharedInstance;
@end
