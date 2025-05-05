@interface FPFetchDefaultContainerOperation : FPActionOperation
@property (nonatomic) @? fetchCompletionBlock;
- (void)setFetchCompletionBlock:;
- (id)fetchCompletionBlock;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (void)actionMain;
- (id)initForApplicationRecord:providerDomain:;
@end
