@interface PHAssetCrashRecoverySupport : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)libraryServicesManager;
- (id)persistentStoreCoordinator;
- (void)_commitRequest:reply:;
- (id)initWithLibraryServicesManager:;
- (void)recoverFromCrashIfNeeded;
- (BOOL)_isCrashRecoveryFilename:;
- (BOOL)_isSafeToRecoverAfterCrashForCrashRecoveryFileURL:;
- (void).cxx_destruct;
@end
