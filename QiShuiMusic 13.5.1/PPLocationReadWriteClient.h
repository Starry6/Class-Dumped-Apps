@interface PPLocationReadWriteClient : NSObject
- (id)init;
- (BOOL)cloudSyncWithError:;
- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:;
- (BOOL)clearWithError:deletedCount:;
- (BOOL)donateLocations:source:contextualNamedEntities:algorithm:cloudSync:decayRate:error:;
- (BOOL)_doSyncCallWithError:syncCall:;
- (BOOL)_doDeletionSyncCallWithError:deletedCount:syncCall:;
+ (id)sharedInstance;
@end
