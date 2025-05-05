@interface NSFilesystemItemLinkOperation : NSFilesystemItemCopyOperation
- (BOOL)_shouldProceedAfterErrno:linkingItemAtPath:toPath:;
- (BOOL)shouldProceedAfterError:linkingItemAtPath:toPath:;
- (BOOL)_validatePaths:;
- (BOOL)_shouldLinkItemAtPath:toPath:;
- (void)_handleFTSEntry:;
- (BOOL)shouldLinkItemAtPath:toPath:;
+ (id)_errorWithErrno:sourcePath:destinationPath:;
+ (id)filesystemItemLinkOperationWithSourcePath:destinationPath:;
+ (BOOL)_needsStatInfo;
@end
