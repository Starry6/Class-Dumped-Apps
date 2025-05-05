@interface PLPhotosStateLog : NSObject
@property (nonatomic) NSObject<OS_dispatch_group> group;
@property (nonatomic) PLPhotoLibrary photoLibrary;
- (id)photoLibrary;
- (id)initWithPhotoLibrary:;
- (id)group;
- (void).cxx_destruct;
- (void)logMoments;
- (void)logAlbum:index:indent:completeMetadata:printAssets:;
- (void)logAlbumLists;
- (void)logAllAlbums;
- (void)logAssetCounts;
- (void)_logAssets:forAlbum:indent:;
- (void)logDescription:;
- (BOOL)compressFileFromPath:toPath:;
- (BOOL)copyFilesMatching:andExcluding:fromPath:toPath:usingCompression:;
- (void)createSnapshot;
@end
