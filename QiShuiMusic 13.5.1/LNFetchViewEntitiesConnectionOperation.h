@interface LNFetchViewEntitiesConnectionOperation : LNInterfaceConnectionOperation
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSArray result;
@property (nonatomic) NSArray interactionIDs;
- (id)result;
- (void)start;
- (void)setCompletionHandler:;
- (void).cxx_destruct;
- (void)finishWithError:;
- (void)setResult:;
- (id)completionHandler;
- (id)initWithConnectionInterface:completionHandler:;
- (id)initWithConnectionInterface:interactionIDs:completionHandler:;
- (id)interactionIDs;
- (void)setInteractionIDs:;
@end
