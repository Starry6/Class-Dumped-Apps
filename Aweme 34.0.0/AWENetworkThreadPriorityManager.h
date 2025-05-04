@interface AWENetworkThreadPriorityManager : NSObject
@property (nonatomic) BOOL hasResetTTNetIOThreadPriority;
- (void)resetTTNetworkThreadPriorityIfNeeded;
- (void)setUpTTNetChromeIOThreadInitPriorityIfNeeded;
- (void)setHasResetTTNetIOThreadPriority:;
- (BOOL)needJudgeCache;
- (BOOL)hasResetTTNetIOThreadPriority;
- (id)aAWENetworkBusinessServiceDOUYINJXAdapter;
- (id)aAWENetworkBusinessServiceDOUYINSSAdapter;
- (id)aAWENetworkBusinessServiceDOUYINLGAdapter;
- (id)init;
+ (Class)aAWENetworkBusinessServiceDOUYINJXAdapterClass;
+ (Class)aAWENetworkBusinessServiceDOUYINSSAdapterClass;
+ (Class)aAWENetworkBusinessServiceDOUYINLGAdapterClass;
+ (id)shareInstance;
@end
