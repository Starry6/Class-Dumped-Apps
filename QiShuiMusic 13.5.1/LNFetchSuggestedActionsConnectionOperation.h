@interface LNFetchSuggestedActionsConnectionOperation : LNInterfaceConnectionOperation
@property (nonatomic) NSArray results;
@property (nonatomic) NSString siriLanguageCode;
@property (nonatomic) @? completionHandler;
- (void)start;
- (void)setCompletionHandler:;
- (id)siriLanguageCode;
- (id)results;
- (void).cxx_destruct;
- (void)finishWithError:;
- (void)setResults:;
- (id)completionHandler;
- (id)initWithConnectionInterface:siriLanguageCode:completionHandler:;
- (void)setSiriLanguageCode:;
@end
