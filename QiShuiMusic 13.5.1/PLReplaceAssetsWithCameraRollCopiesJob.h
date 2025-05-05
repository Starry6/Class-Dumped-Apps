@interface PLReplaceAssetsWithCameraRollCopiesJob : PLDaemonJob
@property (nonatomic) NSArray assets;
@property (nonatomic) PLManagedAlbum album;
@property (nonatomic) PLPhotoLibrary photoLibrary;
@property (nonatomic) PLManagedObjectContext managedObjectContext;
@property (nonatomic) NSPersistentStoreCoordinator coordinator;
- (id)photoLibrary;
- (id)managedObjectContext;
- (id)initWithPhotoLibrary:;
- (void)setAlbum:;
- (void)dealloc;
- (id)assets;
- (id)album;
- (id)initFromXPCObject:libraryServicesManager:;
- (void)setPhotoLibrary:;
- (void)setAssets:;
- (id)coordinator;
- (void)run;
- (long long)daemonOperation;
- (void)runDaemonSide;
- (void).cxx_destruct;
- (void)encodeToXPCObject:;
- (id)_cameraRollAssetDerivedFromAsset:;
+ (void)replaceAssets:withCameraRollCopiesInAlbum:;
@end
