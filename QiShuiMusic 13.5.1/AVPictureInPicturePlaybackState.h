@interface AVPictureInPicturePlaybackState : NSObject
@property (nonatomic) double initializationTimestamp;
@property (nonatomic) double initializedElapsedTime;
@property (nonatomic) double timelineRate;
@property (nonatomic) double timelineDuration;
@property (nonatomic) double currentElapsedTime;
@property (nonatomic) BOOL paused;
- (BOOL)isPaused;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithElapsedTime:timelineDuration:timelineRate:paused:;
- (double)currentElapsedTime;
- (double)timelineRate;
- (double)timelineDuration;
- (double)initializationTimestamp;
- (double)initializedElapsedTime;
@end
