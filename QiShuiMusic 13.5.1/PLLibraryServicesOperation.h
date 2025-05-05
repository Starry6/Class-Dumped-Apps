@interface PLLibraryServicesOperation : NSBlockOperation
@property (nonatomic) q requiredState;
@property (nonatomic) NSProgress progress;
@property (nonatomic) q progressPercentOfTotal;
@property (nonatomic) @? cancellationBlock;
@property (nonatomic) NSString logPrefix;
- (void)setCancellationBlock:;
- (id)init;
- (void)dealloc;
- (void)setRequiredState:;
- (void)setProgress:;
- (void)setExecutionBlockFromOperationBlock:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)_safeRemoveCancellationObserver;
- (id)debugDescription;
- (id)progress;
- (id)logPrefix;
- (void)setLogPrefix:;
- (void)setProgressPercentOfTotal:;
- (void)_runOperationBlock:;
- (void).cxx_destruct;
- (long long)requiredState;
- (long long)progressPercentOfTotal;
- (id)cancellationBlock;
+ (BOOL)shouldSuppressLogging;
+ (id)operationWithName:requiredState:parentProgress:execution:;
+ (void)setShouldSuppressLogging:;
@end
