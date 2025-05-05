@interface GEOXPCActivity : NSObject
@property (nonatomic) NSObject<OS_xpc_object> criteria;
- (void)setCriteria:;
- (void)dealloc;
- (id)criteria;
- (void)deferActivity;
- (id)initWithName:criteria:shouldLaunchDaemon:handler:;
- (void)cancelActivity;
- (void).cxx_destruct;
- (void)finishActivity;
- (BOOL)shouldDeferActivity;
- (void)_handleRunActivity:;
+ (void)updateActivities:;
+ (id)registerActivity:criteria:shouldLaunchDaemon:handler:;
+ (void)checkInActivity:handler:;
+ (void)clearActivity:;
+ (void)resetActivities;
+ (void)cancelActivity:;
+ (void)addActivity:shouldLaunchDaemon:repeating:;
@end
