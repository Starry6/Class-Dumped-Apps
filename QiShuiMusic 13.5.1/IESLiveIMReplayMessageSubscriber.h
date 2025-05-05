@interface IESLiveIMReplayMessageSubscriber : NSObject
@property (nonatomic) @ subscriber;
@property (nonatomic) NSArray subscribedMessages;
@property (nonatomic) q replayMaxCount;
- (id)initWithSubscriber:forMessages:maxCount:;
- (long long)replayMaxCount;
- (void)setReplayMaxCount:;
- (void)setSubscribedMessages:;
- (id)subscribedMessages;
- (id)subscriber;
- (void).cxx_destruct;
- (void)setSubscriber:;
@end
