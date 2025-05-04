@interface AWEStorageServiceMonitor : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
@property (nonatomic) AWEStorageServiceMonitorDataManager dataManager;
- (double)timestampMsec;
- (id)processSpecialKey:;
- (id)errorInfo:;
- (long long)getSizeFromValue:;
- (void)startWithKey:domain:monitorType:opreationType:;
- (void)finishWithKey:domain:data:success:error:;
- (void)startWithKey:domain:monitorType:opreationType:moduleName:identifier:;
- (void)updateSerializeStartTime:;
- (void)updateSerializeFinishTime:data:;
- (void)updateDeserializeStartTime:;
- (void)updateDeserializeFinishTime:data:;
- (void)updateWriteStartTime:;
- (void)updateWriteFinishTime:value:;
- (void)updateReadStartTime:;
- (void)updateReadFinishTime:value:inputFrom:;
- (void)finishWithKey:value:error:identifier:;
- (void)recordCacheExtension:domain:;
- (id)init;
- (id)workQueue;
- (id)dataManager;
- (void)setWorkQueue:;
- (void)setDataManager:;
- (void).cxx_destruct;
- (double)timestampSec;
@end
