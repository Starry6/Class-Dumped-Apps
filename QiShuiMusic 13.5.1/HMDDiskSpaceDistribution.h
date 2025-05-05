@interface HMDDiskSpaceDistribution : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> priorityQueue;
@property (nonatomic) NSMutableDictionary modules;
@property (nonatomic) NSArray moduleClass;
@property (nonatomic) NSMutableArray callBacks;
- (void)setModuleClass:;
- (void)_addCallBack2PriorityQueue:;
- (id)_moduleClassFromDefaultModuls;
- (id)_removableFilePathsFromFiles:needSize:;
- (id)_removableFilesFromModule:;
- (id)callBacks;
- (void)getMoreDiskSpaceWithSize:priority:usingBlock:;
- (id)moduleClass;
- (void)setCallBacks:;
- (void)setPriorityQueue:;
- (id)init;
- (id)modules;
- (id)priorityQueue;
- (void).cxx_destruct;
- (void)setModules:;
- (void)registerModule:;
+ (id)sharedInstance;
@end
