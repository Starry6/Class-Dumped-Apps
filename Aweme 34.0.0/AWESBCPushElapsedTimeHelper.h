@interface AWESBCPushElapsedTimeHelper : NSObject
@property (nonatomic) NSMutableDictionary monitorDict;
@property (nonatomic) BOOL isEnableTraceElapsedTime;
- (id)monitorDict;
- (void)setMonitorDict:;
- (id)getSBCPushElapsedTimeWithBusinessType:scene:;
- (void)createMonitorIntoDictWithBusinessType:;
- (BOOL)isEnableTraceElapsedTime;
- (BOOL)enableTraceShowingInnerPushElapsedTime;
- (id)getMonitorWithBusinessType:;
- (void)setIsEnableTraceElapsedTime:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
