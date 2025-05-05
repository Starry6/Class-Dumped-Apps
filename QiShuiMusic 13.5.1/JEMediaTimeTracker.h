@interface JEMediaTimeTracker : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) Q position;
@property (nonatomic) float playbackRate;
@property (nonatomic) JEMediaTimeTrackerDateProvider dateProvider;
- (void)setPosition:;
- (unsigned long long)position;
- (float)playbackRate;
- (void)setPlaybackRate:;
- (void)setDateProvider:;
- (id)date;
- (void).cxx_destruct;
- (void)setDate:;
- (id)dateProvider;
- (id)initWithPosition:playbackRate:;
- (void)updatePosition:;
- (void)updatePosition:playbackRate:;
- (id)estimatedTimeAtPosition:;
- (id)estimatedTimeAtPastPosition:;
@end
