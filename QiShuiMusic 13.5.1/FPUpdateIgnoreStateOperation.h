@interface FPUpdateIgnoreStateOperation : FPActionOperation
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (void)actionMain;
- (void)presendNotifications;
- (id)replicateForItems:;
- (id)initWithItems:ignoreState:action:;
@end
