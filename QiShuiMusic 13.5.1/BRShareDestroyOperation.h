@interface BRShareDestroyOperation : BRShareOperation
@property (nonatomic) CKShare share;
@property (nonatomic) @? shareDestroyCompletionBlock;
- (void)setShare:;
- (id)share;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)initWithShare:;
- (id)initWithShare:fileURL:;
- (id)shareDestroyCompletionBlock;
- (void)setShareDestroyCompletionBlock:;
@end
