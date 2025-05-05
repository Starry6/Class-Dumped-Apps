@interface LNFetchViewActionsConnectionOperation : LNInterfaceConnectionOperation
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSArray result;
- (id)result;
- (void)start;
- (void)setCompletionHandler:;
- (void).cxx_destruct;
- (void)finishWithError:;
- (void)setResult:;
- (id)completionHandler;
- (id)initWithConnectionInterface:completionHandler:;
@end
