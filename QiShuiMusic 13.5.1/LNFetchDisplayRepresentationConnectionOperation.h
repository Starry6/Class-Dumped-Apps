@interface LNFetchDisplayRepresentationConnectionOperation : LNInterfaceConnectionOperation
@property (nonatomic) NSArray results;
@property (nonatomic) NSArray actions;
@property (nonatomic) @? completionHandler;
- (void)setActions:;
- (void)start;
- (void)setCompletionHandler:;
- (id)results;
- (id)actions;
- (void).cxx_destruct;
- (void)finishWithError:;
- (void)setResults:;
- (id)completionHandler;
- (id)initWithConnectionInterface:actions:completionHandler:;
@end
