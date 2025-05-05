@interface PFSharingRemaker : NSObject
@property (nonatomic) PFSharingRemakerOptions _options;
@property (nonatomic) NSArray _operations;
@property (nonatomic) @? _progressHandler;
@property (nonatomic) @? _completionHandler;
- (void)_setOptions:;
- (id)init;
- (id)_options;
- (id)_completionHandler;
- (void).cxx_destruct;
- (void)_setCompletionHandler:;
- (void)_updateProgress;
- (id)_operations;
- (id)_progressHandler;
- (void)cancelRemaking;
- (void)remakeWithProgressHandler:completionHandler:;
- (double)_computeProgress;
- (void)_callProgressBlockWithProgress:;
- (void)_endSessionWithSuccess:error:;
- (void)_configureVideoOperation:withUUID:dispatchGroup:;
- (void)_configurePhotoOperation:withUUID:dispatchGroup:;
- (void)_completeOperationWithUUID:;
- (void)_abortWithUnderlyingOperationError:;
- (void)_setOperations:;
- (void)_setProgressHandler:;
+ (id)remakerWithOperations:options:;
@end
