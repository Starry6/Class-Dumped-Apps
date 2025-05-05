@interface LNFetchOptionsConnectionOperation : LNRuntimeAssertionsTakingConnectionOperation
@property (nonatomic) LNActionMetadata actionMetadata;
@property (nonatomic) LNActionParameterMetadata parameterMetadata;
@property (nonatomic) NSString searchTerm;
@property (nonatomic) NSString localeIdentifier;
@property (nonatomic) LNDynamicOptionsResult result;
@property (nonatomic) @? completionHandler;
- (id)result;
- (void)start;
- (void)setCompletionHandler:;
- (void)setSearchTerm:;
- (id)searchTerm;
- (void).cxx_destruct;
- (void)finishWithError:;
- (id)localeIdentifier;
- (void)setResult:;
- (void)setLocaleIdentifier:;
- (id)completionHandler;
- (id)parameterMetadata;
- (id)actionMetadata;
- (void)setActionMetadata:;
- (id)initWithConnectionInterface:actionMetadata:parameterMetadata:searchTerm:localeIdentifier:completionHandler:;
- (void)setParameterMetadata:;
@end
