@interface IESLiveCombinePassthroughSubject : IESLiveCombineSubject
@property (nonatomic) NSMutableArray subscribers;
@property (nonatomic) IESLiveCompoundSubscription subscriptions;
- (void)realSendValue:;
- (void)sendVoid;
- (void)subscribe:bindingToSubscription:;
- (void)setSubscriptions:;
- (id)init;
- (id)subscriptions;
- (void)sendValue:;
- (void).cxx_destruct;
- (id)subscribers;
- (void)sendCompletion;
- (void)setSubscribers:;
+ (id)subject;
@end
