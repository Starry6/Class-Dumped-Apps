@interface NSFilesystemItemRemoveOperation : NSOperation
@property (nonatomic) NSFileManager fileManager;
- (id)fileManager;
- (void)dealloc;
- (id)error;
- (BOOL)_delegateSaysProceedAfterError:removingItemAtPath:;
- (void)main;
- (BOOL)_delegateSaysShouldRemoveItemAtPath:;
- (id)initWithPath:fileManager:;
- (void)_setError:;
+ (id)filesystemItemRemoveOperationWithPath:fileManager:;
+ (id)_errorWithErrno:atPath:;
@end
