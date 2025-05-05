@interface TMPerformanceReporter : NSObject
@property (nonatomic) NSMutableDictionary apiCallInfo;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (void)recordTimeInfo:ForKey:withTime:;
- (void)setApiCallInfo:;
- (id)apiCallInfo;
- (void)recordEndTime:withKey:;
- (void)recordParams:withKey:;
- (void)recordParamsInfo:withKey:;
- (void)recordStartTime:withKey:;
- (void)reporter:withName:;
- (void)reporterTimeConsumingWithKey:;
- (id)init;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
+ (void)recordTimonEnd;
+ (void)recordTimonService:cost:sync:;
+ (void)recordTimonStart;
+ (void)reportTimonInitInfo:;
+ (id)sharedInstance;
@end
