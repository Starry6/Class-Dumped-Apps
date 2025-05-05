@interface IDSTransactionLogTask : NSObject
@property (nonatomic) @? completionBlock;
- (void)setCompletionBlock:;
- (void).cxx_destruct;
- (void)_completeWithError:;
- (id)completionBlock;
@end
