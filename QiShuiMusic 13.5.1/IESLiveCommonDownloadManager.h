@interface IESLiveCommonDownloadManager : NSObject
@property (nonatomic) NSMutableDictionary queueMap;
- (void)addTask:queueIdentifier:priority:;
- (id)queueMap;
- (id)queueWithIdentifier:;
- (void)removeAllTaskWithQueueIdentifier:;
- (void)removeTask:queueIdentifier:;
- (void)setQueueMap:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
