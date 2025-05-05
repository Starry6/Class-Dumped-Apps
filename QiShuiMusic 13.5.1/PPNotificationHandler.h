@interface PPNotificationHandler : NSObject
@property (nonatomic) double waitSeconds;
@property (nonatomic) NSString name;
- (void)waitOnQueueToDrain;
- (void)setName:;
- (void)fireWithObjects:;
- (id)initWithName:waitSeconds:;
- (void)_delayedExecutionAfterSeconds:;
- (void)addObserverBlock:forLifetimeOfObject:;
- (void).cxx_destruct;
- (double)waitSeconds;
- (void)_executeBlocksWithGuardedData:;
- (id)description;
- (id)name;
- (void)setWaitSeconds:;
@end
