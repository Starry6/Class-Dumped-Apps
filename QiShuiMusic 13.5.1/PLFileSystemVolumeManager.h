@interface PLFileSystemVolumeManager : NSObject
- (void)dealloc;
- (void)registerPLFileSystemVolume:;
- (void)_updateMountedVolumeURLs;
- (id)volumeForURL:context:;
- (id)initSharedVolumeManager;
- (void).cxx_destruct;
- (void)_updateOfflineStates;
- (void)unregisterPLFileSystemVolume:;
+ (id)sharedFileSystemVolumeManager;
@end
