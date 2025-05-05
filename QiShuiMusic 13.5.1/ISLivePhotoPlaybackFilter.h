@interface ISLivePhotoPlaybackFilter : ISObservable
@property (nonatomic) BOOL isPerformingInputChanges;
@property (nonatomic) BOOL playbackDisabled;
@property (nonatomic) NSMutableSet _playbackDisabledReasons;
@property (nonatomic) double hintProgress;
@property (nonatomic) q state;
@property (nonatomic) BOOL playIsSticky;
- (id)mutableChangeObject;
- (id)init;
- (void)_setState:;
- (void)setState:;
- (long long)state;
- (void).cxx_destruct;
- (void)reset;
- (void)setPlaybackDisabled:forReason:;
- (BOOL)isPlaybackDisabled;
- (void)setHintProgress:;
- (double)hintProgress;
- (BOOL)playIsSticky;
- (void)setPlayIsSticky:;
- (BOOL)isPerformingInputChanges;
- (void)_setPerformingInputChanges:;
- (void)_setPlaybackDisabled:;
- (id)_playbackDisabledReasons;
@end
