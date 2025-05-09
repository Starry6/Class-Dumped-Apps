@interface CNUIUserActionTargetDiscovering : NSObject
@property (nonatomic) <CNLSApplicationWorkspace> applicationWorkspace;
@property (nonatomic) <CNTUCallProviderManager> callProviderManager;
@property (nonatomic) <CNMCProfileConnection> profileConnection;
@property (nonatomic) <CNCapabilities> capabilities;
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
@property (nonatomic) <CNSchedulerProvider> highLatencySchedulerProvider;
@property (nonatomic) CNUIUserActionTargetDiscoveryCache cache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)capabilities;
- (id)schedulerProvider;
- (void).cxx_destruct;
- (id)profileConnection;
- (id)cache;
- (id)callProviderManager;
- (id)applicationWorkspace;
- (id)targetForTextWithMessages;
- (id)thirdPartyTargetsForActionTypes:;
- (id)highLatencySchedulerProvider;
- (id)observableForTargetsChangedForActionType:schedulerProvider:;
- (id)targetsForActionType:;
- (id)thirdPartyTargetsForBundleIdentifier:;
- (id)initWithApplicationWorkspace:callProviderManager:profileConnection:schedulerProvider:highLatencySchedulerProvider:capabilities:;
- (void)resetTargetsForActionType:;
- (id)_targetsForActionType:;
- (id)targetsForEmail;
- (id)targetsForPay;
- (id)targetsForDirections;
- (id)targetsForVoice;
- (id)targetsForVideo;
- (id)targetsForText;
- (id)targetForVoiceWithTelephony;
- (id)targetForVoiceWithFaceTime;
- (id)targetForVideoWithFaceTime;
- (id)targetForVoiceWithSkype;
- (id)targetForVideoWithSkype;
- (id)targetForTextWithSkype;
- (id)targetsForVoiceWithThirdPartyCallProviders;
- (id)targetsForVideoWithThirdPartyCallProviders;
- (id)targetsForStartAudioCallIntent;
- (id)targetsForStartVideoCallIntent;
- (id)targetsForSendMessageIntent;
+ (id)os_log;
+ (id)applicationProxiesForIntent:applicationWorkspace:;
+ (BOOL)shouldIgnoreApplicationProxy:;
+ (BOOL)isSkypeAvailableWithEnvironment:;
@end
