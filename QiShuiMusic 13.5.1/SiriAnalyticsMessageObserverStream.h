@interface SiriAnalyticsMessageObserverStream : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_publishMessagesToAllObservers:;
- (void)removeObserverDelegate:;
- (void)produceMessages:completion:;
- (id)subscribeWithMessagesProduced:;
- (void)_removeObserverHandle:;
- (void).cxx_destruct;
- (id)initWithQueue:;
- (void)addObserverDelegate:;
@end
