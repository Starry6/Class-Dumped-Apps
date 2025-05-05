@interface RxMultipleDelegateNode : NSObject
@property (nonatomic) @ delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
- (void)dealloc;
- (id)initWithDelegate:delegateQueue:;
- (void)setDelegate:;
- (id)delegateQueue;
- (id)delegate;
- (void).cxx_destruct;
@end
