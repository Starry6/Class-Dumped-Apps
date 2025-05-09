@interface BYManagedAppleIDBootstrap : NSObject
@property (nonatomic) UMUserSwitchContext userSwitchContext;
@property (nonatomic) NSInteger notifyToken;
@property (nonatomic) NSObject<OS_dispatch_queue> notificationQueue;
@property (nonatomic) BOOL shouldRetrySilentLoginUpgrade;
@property (nonatomic) q silentLoginUpgradeRetryCount;
@property (nonatomic) NSDictionary authenticationResults;
@property (nonatomic) BYPreferencesController buddyPreferences;
@property (nonatomic) NSString shortLivedToken;
@property (nonatomic) BOOL passwordChangeFlowNeedsToRun;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needsToUpgradeShortLivedToken;
- (void)recoverEMCSWithCompletion:;
- (void)_runSilentLoginUpgradeWithCompletion:shortLivedTokenUpgradeCompletion:;
- (id)init;
- (void)setNotifyToken:;
- (void)dealloc;
- (void)runSilentLoginUpgradeIfNeededWithCompletion:shortLivedTokenUpgradeCompletion:willNotCompleteBlock:;
- (int)notifyToken;
- (void)userSwitchContextHasBeenUsed;
- (void)runSilentLoginUpgradeIfNeededWithCompletion:shortLivedTokenUpgradeCompletion:;
- (id)_fetchAKURLBagSynchronously;
- (void)_createAppleAccountWithAuthenticationResults:completion:;
- (void)_modifyAuthenticationContextIfNeeded:;
- (BOOL)isLoginUser;
- (id)shortLivedToken;
- (BOOL)passwordChangeFlowNeedsToRun;
- (void)_registerForStartupCompletionNotificationWithTask:;
- (void)setShouldRetrySilentLoginUpgrade:;
- (id)notificationQueue;
- (id)userSwitchContext;
- (void)postUserSwitchContextHasBeenUsed;
- (void)willSwitchUser;
- (long long)silentLoginUpgradeRetryCount;
- (void)setNotificationQueue:;
- (id)buddyPreferences;
- (BOOL)shouldRetrySilentLoginUpgrade;
- (void)writeAccountConfigurationIfNeededWithCompletion:;
- (id)_authenticationContextWithAuthenticationResults:;
- (void)switchToLoginWindowDueToError:completion:;
- (void)setAuthenticationResults:;
- (void).cxx_destruct;
- (void)ingestManagedBuddyData;
- (void)_runPostStartupTasksWithAccountStore:completion:;
- (id)authenticationResults;
- (void)_upgradeShortLivedTokenCompletion:;
- (void)setBuddyPreferences:;
- (void)setSilentLoginUpgradeRetryCount:;
- (id)_languageConfigurationDictionary;
+ (BOOL)isFirstTimeLogin;
+ (id)sharedManager;
+ (id)delegateBundleIDsForManagedAccount;
+ (BOOL)isManagedAppleIDSignedIn;
+ (BOOL)isSettingUpMultiUser;
+ (BOOL)isMultiUser;
@end
