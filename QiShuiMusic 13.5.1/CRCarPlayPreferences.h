@interface CRCarPlayPreferences : NSObject
@property (nonatomic) BOOL cachedCarPlayAllowed;
@property (nonatomic) <CRCarPlayPreferencesDelegate> preferencesDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setPreferencesDelegate:;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:;
- (BOOL)isWirelessCarPlayEnabled;
- (void)_updateCarPlayAllowed;
- (BOOL)isCarPlayCapable;
- (void).cxx_destruct;
- (id)preferencesDelegate;
- (BOOL)cachedCarPlayAllowed;
- (BOOL)isCarPlayAllowed;
- (BOOL)_isCarPlayAllowed;
- (void)setCachedCarPlayAllowed:;
@end
