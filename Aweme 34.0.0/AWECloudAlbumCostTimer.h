@interface AWECloudAlbumCostTimer : NSObject
@property (nonatomic) double total;
@property (nonatomic) NSDate startDate;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL pausedManually;
- (void)p_pauseManually:;
- (BOOL)isPausedManually;
- (id)startDate;
- (id)init;
- (void)dealloc;
- (void)resume;
- (BOOL)isPaused;
- (void)setStartDate:;
- (void).cxx_destruct;
- (long long)duration;
- (double)total;
- (void)start;
- (void)pause;
- (void)setTotal:;
- (void)didEnterBackgroundNotification:;
- (void)didBecomeActiveNotification:;
@end
