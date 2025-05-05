@interface BREvictItemOperation : BROperation
@property (nonatomic) @? evictionCompletionBlock;
- (id)initWithURL:;
- (void)main;
- (void).cxx_destruct;
- (id)description;
- (void)finishWithResult:error:;
- (id)evictionCompletionBlock;
- (void)setEvictionCompletionBlock:;
@end
