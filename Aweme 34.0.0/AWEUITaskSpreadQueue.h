@interface AWEUITaskSpreadQueue : NSObject
@property (nonatomic) NSArray objects;
@property (nonatomic) <AWEUITaskSpreadProtocol> leading;
@property (nonatomic) <AWEUITaskSpreadProtocol> trailing;
- (void)dequeue:;
- (void)insertTasks:;
- (id)dequeueAtTaskID:;
- (id)dequeueAtGroupID:;
- (BOOL)isExistWithGroupID:;
- (BOOL)isExistWithTaskID:;
- (void)_remove:;
- (id)_dequeueAtGroupID:;
- (void)_removeAllObjects;
- (void)_insertTasks:;
- (id)init;
- (id)dequeue;
- (void)removeAllObjects;
- (BOOL)_enqueue:;
- (id)leading;
- (id)trailing;
- (void).cxx_destruct;
- (BOOL)enqueue:;
- (id)objects;
@end
