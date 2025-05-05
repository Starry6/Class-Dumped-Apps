@interface LNFetchMetadataConnectionOperation : LNInterfaceConnectionOperation
@property (nonatomic) LNBundleMetadata metadata;
@property (nonatomic) @? completionHandler;
- (void)start;
- (id)metadata;
- (void)setCompletionHandler:;
- (void)setMetadata:;
- (void).cxx_destruct;
- (void)finishWithError:;
- (id)completionHandler;
- (id)initWithConnectionInterface:completionHandler:;
@end
