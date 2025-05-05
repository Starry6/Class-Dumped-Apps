@interface NRDeviceCollectionHistoryObserverWrapper : NSObject
@property (nonatomic) @? observer;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (void)setObserver:;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (id)observer;
@end
