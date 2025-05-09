@interface IMDowntimeController : NSObject
@property (nonatomic) TUCallProviderManager callProviderManager;
@property (nonatomic) NSObject<OS_dispatch_queue> screenTimeDispatchQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> setupDispatchQueue;
@property (nonatomic) IMCommLimitsPolicyCache policyCache;
@property (nonatomic) NSMutableDictionary bundleIDPolicyMap;
@property (nonatomic) DMFApplicationPolicyMonitor appPolicyMonitor;
@property (nonatomic) BOOL isRunningFromMacMessagesApp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)setCallProviderManager:;
- (void).cxx_destruct;
- (void)providersChangedForProviderManager:;
- (id)callProviderManager;
- (id)conversationContextForChat:;
- (BOOL)isDowntimeLimited;
- (BOOL)allowedToShowAppExtensionWithBundleIdentifier:;
- (BOOL)allowedToShowConversationWithHandleIDs:sync:context:;
- (void)_participantsForChatDidChange:;
- (void)initializeContext:participantIDsHash:trackingChat:;
- (id)emergencyNumbers;
- (void)setEmergencyNumbers:;
- (void)getSTConversation:;
- (id)STConversation;
- (BOOL)allowedToShowConversationWithHandleIDs:sync:context:participantIDsHash:;
- (BOOL)_allowedToShowConversationWithHandleIDs:sync:context:participantIDsHash:trackingChat:;
- (BOOL)allowedToShowConversationForChat:sync:;
- (BOOL)isEmergencyHandle:;
- (void)_addObserversToChat:;
- (void)registerForScreenTimeNotifications;
- (void)_doRegisterForScreenTimeNotifications;
- (void)fetchScreenTimeAppPolicy;
- (id)screenTimeDispatchQueue;
- (void)setScreenTimeDispatchQueue:;
- (id)setupDispatchQueue;
- (void)setSetupDispatchQueue:;
- (id)policyCache;
- (void)setPolicyCache:;
- (id)bundleIDPolicyMap;
- (void)setBundleIDPolicyMap:;
- (id)appPolicyMonitor;
- (void)setAppPolicyMonitor:;
- (BOOL)isRunningFromMacMessagesApp;
- (void)setIsRunningFromMacMessagesApp:;
+ (id)sharedInstance;
+ (BOOL)isContactLimitsFeatureEnabled;
+ (id)fetchEmergencyNumbersSetWithProviderManager:;
@end
