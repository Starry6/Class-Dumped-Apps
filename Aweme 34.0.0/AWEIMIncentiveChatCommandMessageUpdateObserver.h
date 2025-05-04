@interface AWEIMIncentiveChatCommandMessageUpdateObserver : NSObject
@property (nonatomic) <IESIMIncentiveChatCommandMsgNotifierProtocol> commandMsgNotifier;
@property (nonatomic) BOOL canRegisterAfterColdStart;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)rerouteWithMessage:loginUid:serverPushTime:;
- (void)p_handleRelationReloadMessage:loginUid:serverPushTime:;
- (void)handleChatProgressData:loginUid:serverPushTime:;
- (void)handleChatActivationData:loginUID:serverPushTime:;
- (void)handleActivityExitData:;
- (void)iesim_didFinishCoreServiceFactoryCreate;
- (void)setCanRegisterAfterColdStart:;
- (void)p_registerCommandMsgNotifier;
- (BOOL)canRegisterAfterColdStart;
- (void)handleQuotaUpdateData:;
- (void)iesim_didReceiveIncentiveChatCommandMessage:;
- (void)registerCmdObserver;
- (id)commandMsgNotifier;
- (void)setCommandMsgNotifier:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
