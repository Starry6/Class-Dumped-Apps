@interface AXAssetsService : NSObject
- (id)init;
- (void)dealloc;
- (void)downloadTTSResourceForVoiceId:;
- (void)updateAssetForPolicy:;
- (void)restartTTSResourceMigration;
- (void)runFirstBootTasks:;
- (void)_destroyXPCConnection;
- (void)deleteCompactResourceIfNeededForIdentifier:;
- (id)xpcConnection;
- (void)updateTTSResourcesForActionType:;
- (void).cxx_destruct;
- (void)informSiriVoiceSubscriptionsWithVoiceId:addition:;
- (void)refreshAssetCatalogForPolicy:withOverrideTimeout:forceCatalogRefresh:;
- (id)_serviceProxy;
@end
