@interface LNPerformSuggestedResultsQueryOperation : LNInterfaceConnectionOperation
@property (nonatomic) NSString entityType;
@property (nonatomic) NSString entityMangledTypeName;
@property (nonatomic) @? completionHandler;
@property (nonatomic) LNQueryOutput output;
- (id)output;
- (void)start;
- (void)setCompletionHandler:;
- (void)setOutput:;
- (void).cxx_destruct;
- (id)entityType;
- (void)finishWithError:;
- (id)completionHandler;
- (void)setEntityType:;
- (id)entityMangledTypeName;
- (id)initWithConnectionInterface:entityMangledTypeName:completionHandler:;
- (id)initWithConnectionInterface:entityType:completionHandler:;
- (void)setEntityMangledTypeName:;
@end
