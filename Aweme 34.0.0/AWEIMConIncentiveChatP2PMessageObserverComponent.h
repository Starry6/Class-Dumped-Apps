@interface AWEIMConIncentiveChatP2PMessageObserverComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)iesim_newP2PMessageNotifyConversation:message:;
- (void)componentDidMounted:;
- (void)rerouteWithMessage:loginUid:serverPushTime:;
- (void)p_handleRelationReloadMessage:loginUid:serverPushTime:;
- (void)handleChatProgressData:loginUid:serverPushTime:;
- (void)handleChatActivationData:loginUID:serverPushTime:;
- (void)handleActivityExitData:;
- (void)dealloc;
+ (BOOL)canCreateComponentWithContext:;
@end
