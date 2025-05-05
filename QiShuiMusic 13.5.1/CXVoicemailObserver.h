@interface CXVoicemailObserver : NSObject
@property (nonatomic) <CXVoicemailObserverDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <CXVoicemailObserverDataSource> dataSource;
@property (nonatomic) NSArray voicemails;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)_performDelegateCallback:;
- (id)delegateQueue;
- (id)voicemails;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegateQueue:;
- (id)queue;
- (void)setDelegate:queue:;
- (void)dataSourceVoicemailsChanged:;
- (id)initWithDataSource:queue:;
@end
