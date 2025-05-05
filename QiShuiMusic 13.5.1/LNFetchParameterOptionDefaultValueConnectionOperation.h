@interface LNFetchParameterOptionDefaultValueConnectionOperation : LNRuntimeAssertionsTakingConnectionOperation
@property (nonatomic) LNActionMetadata actionMetadata;
@property (nonatomic) NSString parameterIdentifier;
@property (nonatomic) LNDynamicOption result;
@property (nonatomic) @? completionHandler;
- (id)result;
- (void)start;
- (void)setCompletionHandler:;
- (void).cxx_destruct;
- (void)finishWithError:;
- (void)setResult:;
- (id)completionHandler;
- (id)parameterIdentifier;
- (id)initWithConnectionInterface:actionMetadata:parameterIdentifier:completionHandler:;
- (id)actionMetadata;
- (void)setActionMetadata:;
- (void)setParameterIdentifier:;
@end
