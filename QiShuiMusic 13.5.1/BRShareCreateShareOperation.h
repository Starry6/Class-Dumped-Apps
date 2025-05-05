@interface BRShareCreateShareOperation : BRShareOperation
@property (nonatomic) @? shareCreateCompletionBlock;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)shareCreateCompletionBlock;
- (void)setShareCreateCompletionBlock:;
@end
