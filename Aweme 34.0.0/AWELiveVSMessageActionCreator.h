@interface AWELiveVSMessageActionCreator : IESLiveIMBaseActionCreator
@property (nonatomic) AWELiveVSMessageManager dispatcherManager;
@property (nonatomic) IESLiveDataSyncManager wrdsManager;
@property (nonatomic) NSHashTable subscribersForAll;
@property (nonatomic) BOOL isCallingStart;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dispatcherManager;
- (void)setDispatcherManager:;
- (void)updateDispatcherManager:;
- (id)subscribersForAll;
- (void)setSubscribersForAll:;
- (BOOL)isCallingStart;
- (void)realStart;
- (id)setupIMDispatcherWithConfig:;
- (void)setWrdsManager:;
- (id)wrdsManager;
- (void)subscribedSyncDataUpdatedWithValue:oldVersion:newVersion:;
- (void)startAll;
- (id)decideReceiver;
- (void)setIsCallingStart:;
- (void)dealloc;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (void)stopAll;
- (void)messageReceived:;
@end
