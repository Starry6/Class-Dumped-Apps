@interface GEOToolRequester : NSObject
- (id)ping;
- (void)invalidateTileCache;
- (void)unlockDBs;
- (void)lockDBs;
- (id)getDefault:source:;
- (unsigned long long)calculatePurgableSpaceForUrgency:;
- (unsigned long long)freePurgableSpace:forUrgency:;
- (BOOL)notifyNetworkDefaultsChanged;
- (void)forceProactiveTileDownloaderRun;
- (BOOL)isProactiveTileDownloadEnabled;
- (id)listFilePathsRemote;
- (id)listFilePathsLocal;
+ (id)sharedRequester;
@end
