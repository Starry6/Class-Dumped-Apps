@interface FPTrashOperation : FPTransformOperation
- (id)initWithItems:;
- (id)fp_prettyDescription;
- (void)finishWithResult:error:;
- (void)presendNotifications;
- (void)subclassPreflightWithCompletion:;
- (id)replicateForItems:;
- (unsigned long long)transformItem:atIndex:;
@end
