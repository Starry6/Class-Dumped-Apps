@interface CATBlockOperationObserver : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) @? didStart;
@property (nonatomic) @? didProgress;
@property (nonatomic) @? didFinish;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)operationDidStart:;
- (id)init;
- (void)operationDidProgress:;
- (id)delegateQueue;
- (void).cxx_destruct;
- (void)operationDidFinish:;
- (void)setDelegateQueue:;
- (id)didFinish;
- (void)setDidFinish:;
- (id)didStart;
- (void)setDidStart:;
- (void)invokeBlock:operation:;
- (id)didProgress;
- (void)setDidProgress:;
@end
