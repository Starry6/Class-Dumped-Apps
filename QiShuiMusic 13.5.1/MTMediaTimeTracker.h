@interface MTMediaTimeTracker : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) Q position;
@property (nonatomic) float playbackRate;
- (void)setPosition:;
- (unsigned long long)position;
- (float)playbackRate;
- (void)setPlaybackRate:;
- (id)date;
- (void).cxx_destruct;
- (void)setDate:;
- (id)initWithPosition:playbackRate:;
- (void)updatePosition:;
- (void)updatePosition:playbackRate:;
- (id)estimatedTimeAtPosition:;
- (id)estimatedTimeAtPastPosition:;
@end
