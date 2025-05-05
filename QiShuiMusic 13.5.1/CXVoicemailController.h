@interface CXVoicemailController : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> completionQueue;
@property (nonatomic) CXVoicemailObserver voicemailObserver;
- (id)completionQueue;
- (id)init;
- (void)requestTransaction:completion:;
- (void).cxx_destruct;
- (id)initWithQueue:;
- (void)requestTransactionWithActions:completion:;
- (void)requestTransactionWithAction:completion:;
- (void)_requestTransaction:completion:;
- (id)voicemailObserver;
@end
