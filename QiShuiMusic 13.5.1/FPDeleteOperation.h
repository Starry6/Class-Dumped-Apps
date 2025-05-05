@interface FPDeleteOperation : FPActionOperation
- (id)initWithItems:;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (void)actionMain;
- (void)presendNotifications;
- (id)replicateForItems:;
@end
