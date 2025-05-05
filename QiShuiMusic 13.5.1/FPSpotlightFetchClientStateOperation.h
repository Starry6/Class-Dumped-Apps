@interface FPSpotlightFetchClientStateOperation : FPOperation
- (id)initWithIndexer:index:indexName:domainID:reason:;
- (id)_clientStateCurrentVersionIfNeedReset;
- (id)operationDescription;
- (void)_handleFetchedClientState:error:;
- (void)_markClientStateResetDone;
- (void)main;
- (void).cxx_destruct;
- (void)_fetchClientState;
+ (id)_currentIndexerVersion;
@end
