@interface WBSRetryableCKAcceptSharesOperation : WBSRetryableCKOperation
@property (nonatomic) NSArray shareMetadatas;
@property (nonatomic) @? perShareCompletionBlock;
@property (nonatomic) @? acceptSharesCompletionBlock;
- (void)_setUpOperation:;
- (id)_makeOperation;
- (void).cxx_destruct;
- (void)setPerShareCompletionBlock:;
- (void)setAcceptSharesCompletionBlock:;
- (id)perShareCompletionBlock;
- (id)acceptSharesCompletionBlock;
- (void)setShareMetadatas:;
- (id)shareMetadatas;
@end
