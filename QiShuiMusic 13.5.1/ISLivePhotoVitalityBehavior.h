@interface ISLivePhotoVitalityBehavior : ISBehavior
@property (nonatomic) BOOL prepared;
@property (nonatomic) BOOL preparing;
@property (nonatomic) BOOL playingBeyondPhoto;
@property (nonatomic) BOOL _shouldPlayAfterPreparation;
@property (nonatomic) {?=qiIq} playbackEndTime;
@property (nonatomic) {?=qiIq} playDuration;
@property (nonatomic) double photoTransitionDuration;
@property (nonatomic) BOOL pauseDuringTransition;
@property (nonatomic) Q assetOptions;
@property (nonatomic) float playRate;
@property (nonatomic) BOOL playing;
@property (nonatomic) <ISLivePhotoVitalityBehaviorDelegate> delegate;
- (BOOL)isPlaying;
- (void)dealloc;
- (BOOL)isPrepared;
- (void).cxx_destruct;
- (void)_setPrepared:;
- (long long)behaviorType;
- (float)playRate;
- (void)_startVideoPlayback;
- (void)activeDidChange;
- (void)videoReadyForDisplayDidChange;
- (void)_handleDidFinishPreroll;
- (double)photoTransitionDuration;
- (BOOL)_isPreparing;
- (void)_setPreparing:;
- (void)prepareForVitality;
- (void)playVitality;
- (id)initWithInitialLayoutInfo:playbackEndTime:playDuration:playRate:photoTransitionDuration:pauseDuringTransition:assetOptions:;
- (void)_startObservingVideo;
- (void)_stopObservingVideo;
- (void)_handleDidSeekToStartTime;
- (void)_didReachTransitionTime;
- (void)_didReachTransitionToPhotoTime;
- (void)cancelSettleToPhoto;
- (id)playbackEndTime;
- (id)playDuration;
- (BOOL)pauseDuringTransition;
- (unsigned long long)assetOptions;
- (BOOL)isPlayingBeyondPhoto;
- (void)_setPlayingBeyondPhoto:;
- (BOOL)_shouldPlayAfterPreparation;
- (void)_setShouldPlayAfterPreparation:;
@end
