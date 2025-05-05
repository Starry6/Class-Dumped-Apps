@interface ISTouchLivePhotoPlaybackFilter : ISLivePhotoPlaybackFilter
@property (nonatomic) q _playbackRequestID;
@property (nonatomic) ISDisplayLink _displayLink;
@property (nonatomic) NSDate _playbackStartDate;
@property (nonatomic) BOOL touchActive;
- (void)_setDisplayLink:;
- (id)_displayLink;
- (void).cxx_destruct;
- (void)reset;
- (void)didPerformChanges;
- (BOOL)isTouchActive;
- (void)_handleDisplayLink;
- (long long)_nextPlaybackRequestID;
- (void)setTouchActive:;
- (long long)_playbackRequestID;
- (void)_setPlaybackReaquestID:;
- (id)_playbackStartDate;
- (void)_setPlaybackStartDate:;
@end
