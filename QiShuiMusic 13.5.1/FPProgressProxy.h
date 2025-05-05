@interface FPProgressProxy : NSProgress
@property (nonatomic) BOOL updateFileCount;
- (void)dealloc;
- (id)shortDescription;
- (void)setCancellationHandler:;
- (void).cxx_destruct;
- (void)updateWithProgress:;
- (void)startTrackingFileURL:kind:;
- (void)stopTrackingIfStarted;
- (void)stopTrackingIfStartedNotSynchronized;
- (void)setProgressDidSetupHandler:;
- (BOOL)updateFileCount;
- (void)setUpdateFileCount:;
@end
