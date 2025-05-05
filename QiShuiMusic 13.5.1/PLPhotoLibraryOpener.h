@interface PLPhotoLibraryOpener : NSObject
@property (nonatomic) PLLibraryServicesManager libraryServicesManager;
- (id)libraryServicesManager;
- (BOOL)createPhotoLibraryDatabaseWithOptions:error:;
- (BOOL)openPhotoLibraryDatabaseWithAutoUpgrade:autoCreate:error:;
- (id)initWithLibraryServicesManager:reportInProgressUpgrades:;
- (void).cxx_destruct;
- (BOOL)lightweightPermissionCheckWithError:;
- (BOOL)lightweightPermissionCheckWithPath:isDir:error:;
+ (BOOL)canAutomaticallyCreateLibrary;
@end
