@interface IESLiveEffectsDownloadTaskStore : NSObject
@property (nonatomic) IESLiveEffectsDownloadQueue queue;
@property (nonatomic) NSMutableArray taskArray;
@property (nonatomic) NSMutableDictionary idToTaskSetMap;
@property (nonatomic) q conCurrentCount;
@property (nonatomic) q maxConCurrentCount;
@property (nonatomic) @? nodeDequeueBlock;
- (void)cancelDownloadTaskWithPriority:;
- (long long)conCurrentCount;
- (void)notifyLoopNextWithModel:status:;
- (id)idToTaskSetMap;
- (long long)maxConCurrentCount;
- (void)monitorDownloadTask:;
- (id)nodeDequeueBlock;
- (void)processTask:;
- (void)setConCurrentCount:;
- (void)setIdToTaskSetMap:;
- (void)setMaxConCurrentCount:;
- (void)setNodeDequeueBlock:;
- (void)setTaskArray:;
- (void)startQueue;
- (id)taskArray;
- (id)init;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (void)startTask:;
@end
