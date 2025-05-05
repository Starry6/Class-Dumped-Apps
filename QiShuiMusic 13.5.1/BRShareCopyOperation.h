@interface BRShareCopyOperation : BRShareOperation
@property (nonatomic) @? shareCopyCompletionBlock;
@property (nonatomic) @? rootShareCopyCompletionBlock;
- (id)initWithURL:;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)shareCopyCompletionBlock;
- (void)setShareCopyCompletionBlock:;
- (id)rootShareCopyCompletionBlock;
- (void)setRootShareCopyCompletionBlock:;
@end
