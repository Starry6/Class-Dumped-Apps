@interface FPUntrashOperation : FPTransformOperation
@property (nonatomic) @? untrashCompletionBlock;
- (void).cxx_destruct;
- (id)fp_prettyDescription;
- (void)presendNotifications;
- (id)replicateForItems:;
- (void)postStitchingFinishWithResult:error:;
- (unsigned long long)transformItem:atIndex:;
- (id)initWithItems:restoreDirectory:;
- (id)untrashCompletionBlock;
- (void)setUntrashCompletionBlock:;
@end
