@interface AWEIMMessageListMangoIncentiveChatFakeUpdateNoticeComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)tryTriggerMangoIncentiveChatFakeUpdateNotice;
- (id)currentPeerUser;
- (id)p_frequencyUserKey;
- (id)p_frequencyConversationKey;
- (BOOL)p_canFakeMangoUpdateNotice;
- (void)p_makeFakeMangoUpdateNoticeIfNeed;
- (void)dealloc;
- (id)currentConversation;
+ (BOOL)canCreateComponentWithContext:;
@end
