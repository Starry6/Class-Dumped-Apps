@interface IESSaaSVSVideoComponentTrackerManager : NSObject
@property (nonatomic) IESSaaSVSComponentTracker traceContext;
- (void)setTraceContext:;
- (id)traceContext;
- (id)init;
- (void).cxx_destruct;
+ (id)componentTracker;
+ (id)manager;
@end
