@interface LNFetchActionAppContextConnectionOperation : LNInterfaceConnectionOperation
@property (nonatomic) LNAction action;
@property (nonatomic) LNFocusConfigurationAppContext result;
@property (nonatomic) @? completionHandler;
- (id)result;
- (void)start;
- (void)setCompletionHandler:;
- (id)action;
- (void)setAction:;
- (void).cxx_destruct;
- (void)finishWithError:;
- (void)setResult:;
- (id)completionHandler;
- (id)initWithConnectionInterface:action:completionHandler:;
@end
