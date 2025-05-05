@interface DJLazyTaskManager : NSObject
@property (nonatomic) NSMutableArray taskQueue;
@property (nonatomic) q state;
- (void)addLazyTarget:selector:param:;
- (void)cancelLazyTarget:selector:param:;
- (id)init;
- (void)dealloc;
- (void)setState:;
- (void)start;
- (void)stop;
- (void)setTaskQueue:;
- (long long)state;
- (void).cxx_destruct;
- (id)taskQueue;
@end
