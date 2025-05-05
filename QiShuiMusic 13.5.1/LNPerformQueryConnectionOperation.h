@interface LNPerformQueryConnectionOperation : LNInterfaceConnectionOperation
@property (nonatomic) LNQueryRequest queryRequest;
@property (nonatomic) @? completionHandler;
@property (nonatomic) LNQueryOutput output;
- (id)output;
- (void)start;
- (void)setCompletionHandler:;
- (void)setOutput:;
- (void).cxx_destruct;
- (void)finishWithError:;
- (id)completionHandler;
- (id)initWithConnectionInterface:query:completionHandler:;
- (id)queryRequest;
@end
