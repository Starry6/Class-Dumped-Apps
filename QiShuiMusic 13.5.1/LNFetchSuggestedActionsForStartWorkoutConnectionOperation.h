@interface LNFetchSuggestedActionsForStartWorkoutConnectionOperation : LNInterfaceConnectionOperation
@property (nonatomic) NSArray results;
@property (nonatomic) LNAction action;
@property (nonatomic) @? completionHandler;
- (void)start;
- (void)setCompletionHandler:;
- (id)action;
- (void)setAction:;
- (id)results;
- (void).cxx_destruct;
- (void)finishWithError:;
- (void)setResults:;
- (id)completionHandler;
- (id)initWithConnectionInterface:action:completionHandler:;
@end
