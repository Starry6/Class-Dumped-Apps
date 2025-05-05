@interface BRShareProcessSubitems : BRShareOperation
@property (nonatomic) @? processSubitemsCompletionBlock;
@property (nonatomic) Q maxSharedSubitemsBeforeFailure;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)initWithURL:processType:;
- (id)processSubitemsCompletionBlock;
- (void)setProcessSubitemsCompletionBlock:;
- (unsigned long long)maxSharedSubitemsBeforeFailure;
- (void)setMaxSharedSubitemsBeforeFailure:;
@end
