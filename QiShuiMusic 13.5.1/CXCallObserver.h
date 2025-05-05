@interface CXCallObserver : NSObject
@property (nonatomic) <CXCallObserverDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> concurrentQueue;
@property (nonatomic) <CXCallObserverDataSource> dataSource;
@property (nonatomic) NSArray calls;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)_performDelegateCallback:;
- (id)concurrentQueue;
- (id)delegateQueue;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDataSource:concurrentQueue:;
- (void)dataSource:callChanged:;
- (void)setDelegateQueue:;
- (id)calls;
- (void)setDelegate:queue:;
@end
