@interface AnalyticsConfigurationObserver : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <AnalyticsConfigurationObserverDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
- (id)init;
- (void)setConfigurationObserverDelegate:queue:;
- (void)dealloc;
- (BOOL)stopObservingConfigurationType:;
- (void)setDelegate:;
- (BOOL)startObservingConfigurationType:;
- (id)delegateQueue;
- (id)delegate;
- (void).cxx_destruct;
- (void)setQueue:;
- (void)setDelegateQueue:;
- (id)queue;
- (id).cxx_construct;
@end
