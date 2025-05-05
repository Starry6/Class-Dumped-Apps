@interface NSFilesystemItemCopyOperation : NSDirectoryTraversalOperation
- (id)initWithSourcePath:destinationPath:options:;
- (void)dealloc;
- (BOOL)shouldProceedAfterError:copyingItemAtPath:toPath:;
- (BOOL)shouldCopyItemAtPath:toPath:;
- (BOOL)_shouldProceedAfterErrno:copyingItemAtPath:toPath:;
- (BOOL)_validatePaths:;
- (BOOL)_shouldCopyItemAtPath:toPath:;
- (void)_handleFTSEntry:;
+ (id)_errorWithErrno:sourcePath:destinationPath:;
+ (id)filesystemItemCopyOperationWithSourcePath:destinationPath:options:;
@end
