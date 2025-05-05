@interface RPFileTransferSmallFilesTask : NSObject
@property (nonatomic) NSMutableArray fileItems;
@property (nonatomic) BOOL needsRetry;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) Q taskID;
- (void)setTaskID:;
- (void).cxx_destruct;
- (unsigned long long)taskID;
- (void)setQueue:;
- (id)queue;
- (id)fileItems;
- (void)setFileItems:;
- (BOOL)needsRetry;
- (void)setNeedsRetry:;
@end
