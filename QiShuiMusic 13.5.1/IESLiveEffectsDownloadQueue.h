@interface IESLiveEffectsDownloadQueue : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
@property (nonatomic) NSMutableArray nodeArray;
@property (nonatomic) NSMutableDictionary nodeDict;
- (void)dequeueWithCompletion:;
- (void)enqueueWithNode:completion:;
- (void)getAndRemoveNodeWithPriority:completion:;
- (id)getTopNode;
- (long long)lastIndexOfPriority:;
- (id)nodeArray;
- (id)nodeDict;
- (void)setNodeArray:;
- (void)setNodeDict:;
- (id)init;
- (void)setWorkQueue:;
- (id)workQueue;
- (void)insertNode:;
- (void).cxx_destruct;
@end
