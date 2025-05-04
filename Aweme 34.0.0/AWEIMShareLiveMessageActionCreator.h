@interface AWEIMShareLiveMessageActionCreator : IESLiveIMBaseActionCreator
@property (nonatomic) AWEIMShareLiveMessageManger dispatcherManager;
@property (nonatomic) NSHashTable subscribersForAll;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dispatcherManager;
- (void)setDispatcherManager:;
- (void)setupWithMessageConfig:;
- (void)setupWithRoomID:;
- (void)updateDispatcherManager:;
- (id)subscribersForAll;
- (void)setSubscribersForAll:;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)messageReceived:;
@end
