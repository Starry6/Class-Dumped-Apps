@interface SFCapsuleContentViewRegistration : NSObject
- (id)createOrDequeueViewWithExistingView:;
- (void)discardView:;
- (void)enqueueView:;
- (void).cxx_destruct;
- (id)initWithCreateViewBlock:;
@end
