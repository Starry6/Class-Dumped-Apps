@interface PFVideoExportRangeWaitingCaller : NSObject
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphore;
@property (nonatomic) {_NSRange=QQ} requestedRange;
@property (nonatomic) BOOL requestedRangeIsAvailable;
@property (nonatomic) BOOL cancelled;
- (BOOL)cancelled;
- (void)setCancelled:;
- (id)init;
- (void)setSemaphore:;
- (void)resume;
- (void).cxx_destruct;
- (id)semaphore;
- (void)waitWithTimeout:;
- (BOOL)canResumeForRange:;
- (id)requestedRange;
- (void)setRequestedRange:;
- (BOOL)requestedRangeIsAvailable;
- (void)setRequestedRangeIsAvailable:;
+ (id)waitingCallerWithRequestedRange:;
@end
