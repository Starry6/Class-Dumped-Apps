@interface PLRebuildableDirectory : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) BOOL isCPLAssets;
@property (nonatomic) BOOL isPhotoStream;
@property (nonatomic) PLPhotoLibrary photoLibrary;
@property (nonatomic) NSFileManager fm;
@property (nonatomic) double startTime;
- (id)photoLibrary;
- (id)url;
- (double)startTime;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (void)gatherAssetsToImport:pendingAssetsCount:onDiskURLsToSkip:cameraRollOnly:;
- (void)_collectContentsOfDirectoryURL:urlsToSkip:forAddingToAlbum:intoAssetsArray:assetsKind:startTime:;
- (BOOL)isCPLAssets;
- (BOOL)isPhotoStream;
- (id)fm;
+ (id)rebuildableDirectoryWithURL:isCPLAssets:isPhotoStream:photoLibrary:startTime:;
+ (void)collectFileURLs:urlsToSkip:forAddingToAlbum:intoAssetsArray:assetsKind:testCreationDates:startTime:pathManager:;
@end
