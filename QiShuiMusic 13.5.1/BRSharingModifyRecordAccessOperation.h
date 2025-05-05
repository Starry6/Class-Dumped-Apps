@interface BRSharingModifyRecordAccessOperation : BRShareOperation
@property (nonatomic) @? allowAccessCompletionBlock;
@property (nonatomic) @? accessAllowedCompletionBlock;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)initWithURL:allowAccess:;
- (id)allowAccessCompletionBlock;
- (void)setAllowAccessCompletionBlock:;
- (id)accessAllowedCompletionBlock;
- (void)setAccessAllowedCompletionBlock:;
@end
