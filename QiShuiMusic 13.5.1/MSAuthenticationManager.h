@interface MSAuthenticationManager : NSObject
@property (nonatomic) BOOL isListeningToKeybagChanges;
@property (nonatomic) NSInteger keybagChangeNotifyToken;
@property (nonatomic) BOOL waitingForAuth;
- (void)dealloc;
- (id)initWithAlertManager:;
- (void)_didReceiveAccountConfigChangedNotification;
- (void)waitForDeviceUnlock;
- (BOOL)isListeningToKeybagChanges;
- (int)keybagChangeNotifyToken;
- (void)setKeybagChangeNotifyToken:;
- (BOOL)isWaitingForAuth;
- (void).cxx_destruct;
- (void)didEncounterAuthenticationFailureForPersonID:;
- (void)rearmAuthenticationAlert;
- (void)_renewCredentialsForAccount:;
- (void)setIsListeningToKeybagChanges:;
- (void)didEncounterAuthenticationSuccessForPersonID:;
+ (id)sharedManager;
@end
