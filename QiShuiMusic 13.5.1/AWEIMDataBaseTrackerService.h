@interface AWEIMDataBaseTrackerService : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) BOOL enable_performance_monitor;
@property (nonatomic) Q performance_ftc;
@property (nonatomic) Q last_track_single_user_time;
@property (nonatomic) Q last_track_cache_hit_time;
- (unsigned long long)performance_ftc;
- (void)setLast_track_single_user_time:;
- (BOOL)enable_performance_monitor;
- (unsigned long long)last_track_cache_hit_time;
- (unsigned long long)last_track_single_user_time;
- (void)setEnable_performance_monitor:;
- (void)setLast_track_cache_hit_time:;
- (void)setPerformance_ftc:;
- (id)init;
- (id)serialQueue;
- (void).cxx_destruct;
- (void)setSerialQueue:;
+ (BOOL)p_meetFTC:;
+ (void)trackContactForFetchWithNetStage:saveStage:isFull:count:;
+ (void)trackContactPerformanceForCacheHit:;
+ (void)trackContactPerformanceForSaveUsers:count:isMainThread:;
+ (void)trackContactPerformanceForScene:duration:count:;
+ (void)trackContactPerformanceForSingleUser:isMainThread:;
+ (void)trackDatabaseCorrupt:status:;
+ (void)trackDatabaseRecover:status:;
+ (id)sharedInstance;
@end
