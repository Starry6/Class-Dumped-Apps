@interface LNFetchSuggestedFocusActionsConnectionOperation : LNInterfaceConnectionOperation
@property (nonatomic) LNActionMetadata actionMetadata;
@property (nonatomic) LNFocusConfigurationSuggestionContext suggestionContext;
@property (nonatomic) NSArray results;
@property (nonatomic) @? completionHandler;
- (void)start;
- (void)setCompletionHandler:;
- (id)results;
- (void).cxx_destruct;
- (void)finishWithError:;
- (void)setResults:;
- (id)completionHandler;
- (id)suggestionContext;
- (id)actionMetadata;
- (void)setActionMetadata:;
- (id)initWithConnectionInterface:actionMetadata:suggestionContext:completionHandler:;
- (void)setSuggestionContext:;
@end
