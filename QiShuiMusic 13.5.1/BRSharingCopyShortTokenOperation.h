@interface BRSharingCopyShortTokenOperation : BROperation
@property (nonatomic) @? shortTokenCompletionBlock;
- (id)initWithURL:;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)shortTokenCompletionBlock;
- (void)setShortTokenCompletionBlock:;
@end
