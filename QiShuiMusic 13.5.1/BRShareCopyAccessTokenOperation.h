@interface BRShareCopyAccessTokenOperation : BROperation
@property (nonatomic) NSURL url;
@property (nonatomic) @? shareCopyAccessTokenCompletionBlock;
- (id)url;
- (id)initWithURL:;
- (void)setUrl:;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)shareCopyAccessTokenCompletionBlock;
- (void)setShareCopyAccessTokenCompletionBlock:;
@end
