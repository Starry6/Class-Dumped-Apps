@interface NSDirectoryTraversalOperation : NSOperation
- (void)dealloc;
- (BOOL)shouldProceedAfterError:;
- (void)setDelegate:;
- (id)error;
- (void)main;
- (void)handlePathname:;
- (id)delegate;
- (BOOL)_validatePaths:;
- (id)initWithPath:;
- (BOOL)_shouldFilterEntry:;
- (void)_setError:;
- (void)_handleFTSEntry:;
+ (id)_errorWithErrno:atPath:;
+ (BOOL)_needsStatInfo;
+ (id)directoryTraversalOperationAtPath:;
@end
