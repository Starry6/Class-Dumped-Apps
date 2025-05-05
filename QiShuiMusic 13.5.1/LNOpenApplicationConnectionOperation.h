@interface LNOpenApplicationConnectionOperation : LNConnectionOperation
@property (nonatomic) @? completionHandler;
- (void)setCompletionHandler:;
- (void).cxx_destruct;
- (void)finishWithError:;
- (id)completionHandler;
- (id)initWithPriority:completionHandler:;
- (void)finishWithActionResponse:error:;
@end
