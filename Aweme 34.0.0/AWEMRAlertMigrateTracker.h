@interface AWEMRAlertMigrateTracker : NSObject
@property (nonatomic) double popViewKillTimeInterval;
@property (nonatomic) NSMutableDictionary trackTaskDict;
@property (nonatomic) NSMutableArray timerArray;
- (void)initTask;
- (void)updateLastShownWithAlertContext:;
- (void)setupTrackTime;
- (void)setPopViewKillTimeInterval:;
- (id)trackTaskDict;
- (double)popViewKillTimeInterval;
- (void)timeIntervalDidEnd:;
- (id)timerArray;
- (void)trackPopViewKillApp:;
- (void)setTrackTaskDict:;
- (void)setTimerArray:;
- (void)appDidEnterBackground:;
- (id)init;
- (void)dealloc;
- (void)addTask:;
- (void).cxx_destruct;
@end
