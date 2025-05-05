@interface UIDictationLandingViewSettings : NSObject
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) double shrinkDuration;
@property (nonatomic) double colorTransitionInDuration;
@property (nonatomic) double colorTransitionOutDuration;
@property (nonatomic) double circleRPM;
@property (nonatomic) BOOL useBlackWave;
- (id)init;
- (void)setShrinkDuration:;
- (void)setFadeInDuration:;
- (double)colorTransitionOutDuration;
- (void)setUseBlackWave:;
- (double)shrinkDuration;
- (double)circleRPM;
- (void)setColorTransitionOutDuration:;
- (void)setCircleRPM:;
- (double)fadeOutDuration;
- (BOOL)useBlackWave;
- (double)fadeInDuration;
- (void)setFadeOutDuration:;
- (double)colorTransitionInDuration;
- (void)setColorTransitionInDuration:;
+ (id)sharedInstance;
@end
