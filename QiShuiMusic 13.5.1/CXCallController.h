@interface CXCallController : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> completionQueue;
@property (nonatomic) CXCallObserver callObserver;
- (id)completionQueue;
- (id)init;
- (void)requestTransaction:completion:;
- (id)callObserver;
- (void).cxx_destruct;
- (id)initWithQueue:;
- (void)setCallObserver:;
- (void)requestTransactionWithActions:completion:;
- (void)requestTransactionWithAction:completion:;
- (void)_requestTransaction:completion:;
@end
