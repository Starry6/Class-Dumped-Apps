@interface ISBehavior : NSObject
@property (nonatomic) BOOL active;
@property (nonatomic) <ISBehaviorDelegate> delegate;
@property (nonatomic) ISPlayerState initialLayoutInfo;
@property (nonatomic) q behaviorType;
- (void)becomeActive;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)videoDidPlayToEnd;
- (BOOL)isActive;
- (void)resignActive;
- (long long)behaviorType;
- (void)setVideoVolume:;
- (id)initWithInitialLayoutInfo:;
- (void)activeDidChange;
- (void)videoPlayerItemDidChange;
- (void)setOutputInfo:withTransitionOptions:completion:;
- (void)setVideoPlayRate:;
- (BOOL)seekVideoPlayerToTime:completionHandler:;
- (BOOL)seekVideoPlayerToTime:toleranceBefore:toleranceAfter:completionHandler:;
- (BOOL)prerollVideoAtRate:completionHandler:;
- (void)setVideoForwardPlaybackEndTime:;
- (void)videoWillPlayToPhoto;
- (void)videoWillPlayToEnd;
- (void)videoReadyForDisplayDidChange;
- (id)initialLayoutInfo;
@end
