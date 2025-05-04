@interface AWEPublishTaskPersist : NSObject
@property (nonatomic) NSMutableArray taskIds;
@property (nonatomic) NSArray taskIdArray;
- (id)taskIds;
- (void)setTaskIds:;
- (void)removeCachedTaskID:;
- (id)cachedTaskIds;
- (void)destoryCache;
- (void)addTaskId:;
- (BOOL)removeTaskId:;
- (void)synchronizeTaskIds;
- (id)taskIdArray;
- (id)init;
- (void)addTask:;
- (BOOL)removeTask:;
- (void).cxx_destruct;
+ (void)buildAndUpdateEditService:withModel:;
+ (id)generateVideoServiceWithPublishViewModel:;
+ (void)taskExist:completion:;
+ (void)updateEditService:withModel:;
@end
