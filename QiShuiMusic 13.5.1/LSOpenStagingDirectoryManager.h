@interface LSOpenStagingDirectoryManager : NSObject
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithIOPersonality:;
- (void)_locked_updatePersonaStagingDirectories;
- (id)_locked_stagingDirectoryForKey:;
- (id)_stagingDirectoryForKeyRefreshingIfNecessary:;
- (id)stagingDirectoryForCloningURL:error:;
- (id)stagingDirectoryForCloningFileHandle:error:;
- (id)mainDataVolumeStagingURLWithError:;
+ (id)sharedServerInstance;
@end
