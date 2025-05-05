@interface BRSharingCopyShareTokenOperation : BRShareOperation
@property (nonatomic) @? shareTokenCompletionBlock;
@property (nonatomic) @? shareAndBaseTokenCompletionBlock;
- (id)initWithURL:;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)shareTokenCompletionBlock;
- (void)setShareTokenCompletionBlock:;
- (id)shareAndBaseTokenCompletionBlock;
- (void)setShareAndBaseTokenCompletionBlock:;
@end
