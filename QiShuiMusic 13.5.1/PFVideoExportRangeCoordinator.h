@interface PFVideoExportRangeCoordinator : NSObject
@property (nonatomic) {_NSRange=QQ} availableRange;
@property (nonatomic) NSMutableArray waitingCallers;
@property (nonatomic) NSObject<OS_dispatch_queue> rangeCoordinatorStateQueue;
@property (nonatomic) BOOL cancelled;
- (BOOL)cancelled;
- (void)setCancelled:;
- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)waitForAvailabilityOfRange:timeout:error:;
- (void)updateAvailableRange:;
- (id)availableRange;
- (void)setAvailableRange:;
- (id)waitingCallers;
- (void)setWaitingCallers:;
- (id)rangeCoordinatorStateQueue;
- (void)setRangeCoordinatorStateQueue:;
@end
