@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob
@property (nonatomic) NSArray albumCloudGUIDsToDelete;
@property (nonatomic) NSString inviterAddress;
- (id)initFromXPCObject:libraryServicesManager:;
- (void)run;
- (long long)daemonOperation;
- (void)runDaemonSide;
- (void).cxx_destruct;
- (id)description;
- (void)encodeToXPCObject:;
- (id)albumCloudGUIDsToDelete;
- (void)setAlbumCloudGUIDsToDelete:;
- (id)inviterAddress;
- (void)setInviterAddress:;
+ (void)deleteLocalAlbumsForMSASAlbumGUIDs:;
+ (void)deleteLocalAlbumForMSASAlbumGUID:inviterAddress:;
@end
