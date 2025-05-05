@interface LNFetchActionOutputValueOperation : LNInterfaceConnectionOperation
@property (nonatomic) LNActionOutput actionOutput;
@property (nonatomic) LNValue value;
@property (nonatomic) @? completionHandler;
- (void)start;
- (void)setCompletionHandler:;
- (void)setValue:;
- (void).cxx_destruct;
- (void)finishWithError:;
- (id)value;
- (id)completionHandler;
- (id)actionOutput;
- (id)initWithConnectionInterface:actionOutput:completionHandler:;
- (void)setActionOutput:;
@end
