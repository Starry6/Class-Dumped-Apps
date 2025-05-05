@interface ISOperationQueue : NSObject
@property (nonatomic) BOOL adjustsMaxConcurrentOperationCount;
- (id)operations;
- (void)cancelAllOperations;
- (id)init;
- (void)dealloc;
- (void)setName:;
- (void)addOperation:;
- (void)setAdjustsMaxConcurrentOperationCount:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)addOperations:waitUntilFinished:;
- (long long)operationCount;
- (void).cxx_destruct;
- (long long)maxConcurrentOperationCount;
- (BOOL)adjustsMaxConcurrentOperationCount;
- (void)setMaxConcurrentOperationCount:;
- (id)name;
- (void)setSuspended:;
+ (id)mainQueue;
@end
