@interface WBSCloudKitOperationRetryManager : NSObject
@property (nonatomic) double timeout;
@property (nonatomic) Q numberOfRetries;
@property (nonatomic) NSObject<OS_dispatch_queue> scheduleQueue;
- (long long)scheduleRetryIfNeededForError:usingBlock:;
- (id)init;
- (void)setTimeout:;
- (unsigned long long)numberOfRetries;
- (void).cxx_destruct;
- (id)scheduleQueue;
- (double)timeout;
- (void)setScheduleQueue:;
@end
