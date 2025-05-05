@interface PLCloudSharingEnablingJob : PLCloudSharingJob
@property (nonatomic) BOOL enableSharing;
- (id)initFromXPCObject:libraryServicesManager:;
- (void)run;
- (long long)daemonOperation;
- (void)runDaemonSide;
- (id)description;
- (void)encodeToXPCObject:;
- (BOOL)shouldArchiveXPCToDisk;
- (BOOL)enableSharing;
- (void)setEnableSharing:;
+ (void)enableCloudSharing:withPathManager:;
+ (void)disableCloudSharingWithLibraryServicesManager:;
+ (void)deleteAllLocalSharedAlbumsInLibrary:keepPendingAlbums:withReason:;
@end
