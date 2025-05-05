@interface NSFilesystemItemMoveOperation : NSOperation
- (void)dealloc;
- (void)setDelegate:;
- (id)error;
- (BOOL)filesystemItemCopyOperation:shouldProceedAfterError:copyingItemAtPath:toPath:;
- (void)main;
- (id)delegate;
- (id)initWithSourceURL:destinationURL:options:;
- (void)_setError:;
+ (id)filesystemItemMoveOperationWithSourceURL:destinationURL:options:;
+ (id)_errorWithErrno:sourceURL:destinationURL:;
@end
