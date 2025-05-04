@interface AWETaskSpreadDispatcherBase : NSObject
@property (nonatomic) NSMutableArray metaTasks;
@property (nonatomic) NSMeasurement currentMachTime;
@property (nonatomic) BOOL idle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMetaTasks:;
- (id)metaTasks;
- (void)__bindTaskObserver:;
- (void)__updateIdleState;
- (void)removeMetaTask:;
- (id)currentMachTime;
- (void)registToMainScheduler;
- (void)addMetaTask:;
- (void)removeMetaTaskWithFilter:;
- (void)removeAllMetaTask;
- (id)findMetaTaskWithFilter:;
- (void)executeMetaTaskWithContext:;
- (id)init;
- (void)execute;
- (void).cxx_destruct;
- (BOOL)isIdle;
- (void)setIdle:;
+ (id)currentMachTime;
+ (double)currentMachTimeInSeconds;
+ (id)machTimeAfterDelay:;
@end
