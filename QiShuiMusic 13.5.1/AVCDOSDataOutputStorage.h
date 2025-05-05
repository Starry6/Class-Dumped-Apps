@interface AVCDOSDataOutputStorage : NSObject
@property (nonatomic) AVCaptureOutput<AVCaptureDataOutputDelegateOverride> dataOutput;
@property (nonatomic) NSMutableArray synchronizedDataQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateOverrideCallbackQueue;
@property (nonatomic) BOOL live;
@property (nonatomic) NSMutableArray timestampAdjustmentsDataQueue;
- (void)dealloc;
- (BOOL)isLive;
- (id)delegateOverrideCallbackQueue;
- (id)initWithDataOutput:;
- (BOOL)hasAllExpectedSynchronizedDataForLeaderTimestamp:;
- (id)dataOutput;
- (id)synchronizedDataQueue;
- (id)timestampAdjustmentsDataQueue;
- (void)setTimestampAdjustmentsDataQueue:;
@end
