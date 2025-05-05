@interface TSPKReporter : NSObject
@property (nonatomic) NSMutableDictionary consumerDict;
@property (nonatomic) <TSPKLock> lock;
- (id)consumerDict;
- (void)setConsumerDict:;
- (id)init;
- (void)addConsumer:;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
- (void)report:;
+ (id)sharedReporter;
@end
