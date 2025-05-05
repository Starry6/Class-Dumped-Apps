@interface RPFileTransferLargeFileReceiveTask : NSObject
@property (nonatomic) NSInteger fileFD;
@property (nonatomic) RPFileTransferItem fileItem;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) Q taskID;
- (void)setTaskID:;
- (void).cxx_destruct;
- (unsigned long long)taskID;
- (void)setQueue:;
- (id)queue;
- (int)fileFD;
- (void)setFileFD:;
- (id)fileItem;
- (void)setFileItem:;
@end
