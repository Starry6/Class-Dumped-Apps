@interface BRShareAcceptOperation : BROperation
@property (nonatomic) @? shareAcceptCompletionBlock;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)initWithShareLink:;
- (id)shareAcceptCompletionBlock;
- (void)setShareAcceptCompletionBlock:;
@end
