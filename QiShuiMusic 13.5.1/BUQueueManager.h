@interface BUQueueManager : NSObject
@property (nonatomic) BUQueueManagerConfig config;
- (id)_pbu_hierarchyStringWithHierarchy:;
- (id)concurrentQueueWithHierarchy:suffixLabel:;
- (id)concurrentQueueWithHierarchy:suffixLabel:outQueueName:;
- (id)serialQueueWithHierarchy:suffixLabel:;
- (id)serialQueueWithHierarchy:suffixLabel:outQueueName:;
- (void)updateConfig:;
- (id)init;
- (void)setConfig:;
- (void).cxx_destruct;
- (id)config;
+ (id)sharedInstance;
@end
