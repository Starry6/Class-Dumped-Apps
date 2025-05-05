@interface RPFileTransferLargeFileSendTask : NSObject
@property (nonatomic) NSInteger fileFD;
@property (nonatomic) RPFileTransferItem fileItem;
@property (nonatomic) BOOL needsRetry;
@property (nonatomic) NSInteger outstandingSends;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) Q remainingSize;
@property (nonatomic) Q taskID;
- (void)setTaskID:;
- (void).cxx_destruct;
- (unsigned long long)taskID;
- (void)setQueue:;
- (id)queue;
- (BOOL)needsRetry;
- (void)setNeedsRetry:;
- (int)fileFD;
- (void)setFileFD:;
- (id)fileItem;
- (void)setFileItem:;
- (int)outstandingSends;
- (void)setOutstandingSends:;
- (unsigned long long)remainingSize;
- (void)setRemainingSize:;
@end
