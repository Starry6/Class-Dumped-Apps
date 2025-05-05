@interface BRFetchQuotaOperation : BROperation
@property (nonatomic) @? fetchQuotaCompletionBlock;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)fetchQuotaCompletionBlock;
- (void)setFetchQuotaCompletionBlock:;
@end
