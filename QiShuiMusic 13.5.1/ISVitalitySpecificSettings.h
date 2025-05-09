@interface ISVitalitySpecificSettings : ISSettings
@property (nonatomic) q behavior;
@property (nonatomic) double preDuration;
@property (nonatomic) double postDuration;
@property (nonatomic) double startSeekTolerance;
@property (nonatomic) double playbackRate;
@property (nonatomic) double endTimeOffset;
@property (nonatomic) double minimumVisibilityFactor;
@property (nonatomic) double maximumDelayBeforePlayback;
@property (nonatomic) double maxVitalityDelay;
@property (nonatomic) double minimumPhotoTransitionDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDefaultValues;
- (double)playbackRate;
- (void)setPlaybackRate:;
- (void)setBehavior:;
- (long long)behavior;
- (double)preDuration;
- (double)postDuration;
- (double)minimumPhotoTransitionDuration;
- (double)endTimeOffset;
- (double)minimumVisibilityFactor;
- (double)maximumDelayBeforePlayback;
- (double)maxVitalityDelay;
- (void)setPreDuration:;
- (void)setPostDuration:;
- (double)startSeekTolerance;
- (void)setStartSeekTolerance:;
- (void)setEndTimeOffset:;
- (void)setMinimumVisibilityFactor:;
- (void)setMaximumDelayBeforePlayback:;
- (void)setMaxVitalityDelay:;
- (void)setMinimumPhotoTransitionDuration:;
+ (id)sharedInstance;
+ (id)settingsControllerModule;
@end
