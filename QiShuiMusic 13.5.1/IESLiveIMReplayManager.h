@interface IESLiveIMReplayManager : NSObject
@property (nonatomic) BOOL replayRunning;
@property (nonatomic) q bufferSize;
@property (nonatomic) IESLiveIMReplayBuffer replayBuffer;
@property (nonatomic) NSMapTable subscribers;
@property (nonatomic) NSMutableDictionary messageSubscribersDic;
- (void)addReplaySubscriber:;
- (id)messageSubscribersDic;
- (void)putMessagesToReplayBuffer:;
- (void)removeReplaySubscriber:;
- (id)replayBuffer;
- (BOOL)replayRunning;
- (void)setMessageSubscribersDic:;
- (void)setReplayBuffer:;
- (void)setReplayRunning:;
- (void)startReplay;
- (void)stopReplay;
- (id)init;
- (id)replay;
- (void)setBufferSize:;
- (void).cxx_destruct;
- (id)subscribers;
- (long long)bufferSize;
- (id)initWithBufferSize:;
- (void)setSubscribers:;
@end
