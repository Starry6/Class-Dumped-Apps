@interface BRShareUnshareOperation : BRShareOperation
@property (nonatomic) CKShare share;
@property (nonatomic) @? unshareCompletionBlock;
- (void)setShare:;
- (id)share;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)initWithShare:;
- (id)initWithShare:fileURL:;
- (id)unshareCompletionBlock;
- (void)setUnshareCompletionBlock:;
@end
