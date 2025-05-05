@interface MNTracePlayerScheduler : NSObject
@property (nonatomic) <MNTracePlayerSchedulerDelegate> delegate;
@property (nonatomic) double speedMultiplier;
@property (nonatomic) double position;
- (void)setPosition:;
- (double)position;
- (void)_update;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)resume;
- (id)delegate;
- (void).cxx_destruct;
- (void)pause;
- (void)_timerUpdated:;
- (void)addTimelineStream:;
- (void)removeTimelineStream:;
- (void)removeAllTimelineStreams;
- (double)speedMultiplier;
- (void)setSpeedMultiplier:;
@end
