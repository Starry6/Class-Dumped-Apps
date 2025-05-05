@interface AnalyticsEventObserver : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <AnalyticsEventObserverDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (BOOL)stopObserving;
- (id)delegateQueue;
- (id)delegate;
- (void).cxx_destruct;
- (void)setQueue:;
- (void)setDelegateQueue:;
- (id)queue;
- (id).cxx_construct;
- (void)setEventObserverDelegate:queue:;
- (BOOL)startObservingEventList:;
- (BOOL)startObservingEventList:withErrorHandler:;
@end
