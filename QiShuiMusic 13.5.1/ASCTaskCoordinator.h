@interface ASCTaskCoordinator : NSObject
@property (nonatomic) NSRecursiveLock consistencyLock;
@property (nonatomic) NSMutableDictionary pendingResults;
@property (nonatomic) NSCache loadedResults;
@property (nonatomic) NSString name;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)name;
- (void)withLock:;
- (id)pendingResults;
- (void)taskForKey:didCompleteWithResult:;
- (void)taskForKey:didFailWithError:;
- (BOOL)hasTaskForKey:;
- (id)taskForKey:;
- (id)taskForKey:withCreatorBlock:;
- (void)removeTaskForKey:;
- (void)removeAllFinishedTasks;
- (id)consistencyLock;
- (id)loadedResults;
+ (id)log;
@end
