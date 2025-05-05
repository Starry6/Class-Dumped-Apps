@interface BRSharingCopyShareInfoOperation : BROperation
@property (nonatomic) @? copyShareInfoCompletionBlock;
- (id)initWithURL:;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)copyShareInfoCompletionBlock;
- (void)setCopyShareInfoCompletionBlock:;
@end
