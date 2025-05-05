@interface IESLiveCombineCurrentValueSubject : IESLiveCombineSubject
@property (nonatomic) NSMutableArray subscribers;
@property (nonatomic) <IESLiveCompoundSubscription> subscriptions;
@property (nonatomic) @ lastValue;
- (void)realSendValue:;
- (void)sendVoid;
- (void)subscribe:bindingToSubscription:;
- (void)setSubscriptions:;
- (id)init;
- (id)subscriptions;
- (void)sendValue:;
- (id)lastValue;
- (void).cxx_destruct;
- (id)subscribers;
- (void)sendCompletion;
- (void)setLastValue:;
- (void)setSubscribers:;
+ (id)subject;
@end
