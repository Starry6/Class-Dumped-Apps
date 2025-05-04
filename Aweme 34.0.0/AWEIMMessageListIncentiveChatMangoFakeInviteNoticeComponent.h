@interface AWEIMMessageListIncentiveChatMangoFakeInviteNoticeComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (void)p_makeFakeInviteNotice;
- (id)currentPeerUser;
- (id)p_frequencyUserKey;
- (id)p_frequencyConversationKey;
- (BOOL)p_canFakeMangoInviteNotice;
- (void)dealloc;
- (id)currentConversation;
+ (BOOL)canCreateComponentWithContext:;
@end
