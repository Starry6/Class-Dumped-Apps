@interface BWStreamStartStopSynchronizer : NSObject
@property (nonatomic) BOOL waitForMasterAEToSettle;
@property (nonatomic) NSArray synchronizationSlavesOrderedByPriority;
- (void)setWaitForMasterAEToSettle:;
- (void)dealloc;
- (void)setSynchronizationSlavesOrderedByPriority:;
- (id)initWithStreams:timeoutInSeconds:;
- (BOOL)waitForMasterAEToSettle;
- (BOOL)streamWillStop:;
- (BOOL)streamWillStart:;
- (void)streamDidStart:;
- (id)synchronizationSlavesOrderedByPriority;
- (void)streamDidStop:;
@end
