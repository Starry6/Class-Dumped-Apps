@interface AWEIMDataBaseTrackerService : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) BOOL enable_performance_monitor;
@property (nonatomic) Q performance_ftc;
@property (nonatomic) Q last_track_single_user_time;
@property (nonatomic) Q last_track_cache_hit_time;
- (unsigned long long)performance_ftc;
- (BOOL)enable_performance_monitor;
- (void)setEnable_performance_monitor:;
- (void)setPerformance_ftc:;
- (unsigned long long)last_track_single_user_time;
- (void)setLast_track_single_user_time:;
- (unsigned long long)last_track_cache_hit_time;
- (void)setLast_track_cache_hit_time:;
- (id)init;
- (id)serialQueue;
- (void)setSerialQueue:;
- (void).cxx_destruct;
+ (void)trackContactPerformanceForScene:duration:count:;
+ (BOOL)boolValueInAwemeSettingsWithKey:;
+ (void)trackContactLogWithInfo:;
+ (void)trackContactForFetchWithNetStage:saveStage:isFull:count:requestStatus:saveStatus:;
+ (BOOL)p_meetFTC:;
+ (void)trackDatabaseCorrupt:status:;
+ (void)trackDatabaseRecover:status:;
+ (id)sharedInstance;
@end
