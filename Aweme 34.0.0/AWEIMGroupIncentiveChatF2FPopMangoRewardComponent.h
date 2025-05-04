@interface AWEIMGroupIncentiveChatF2FPopMangoRewardComponent : AWEIMComponentBase
@property (nonatomic) BOOL needListenExtChangeAndTryShowMangoReward;
- (void)componentDidMounted:;
- (void)groupConversationIsUpdateWithCon:;
- (void)setNeedListenExtChangeAndTryShowMangoReward:;
- (void)p_tryPopMangoReward;
- (BOOL)needListenExtChangeAndTryShowMangoReward;
- (void)dealloc;
+ (BOOL)canCreateComponentWithContext:;
@end
