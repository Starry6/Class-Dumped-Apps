@interface CSJLottiePlayer : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) CSJLOTAnimationView animationView;
@property (nonatomic) CSJLottiePlayerItem playerItem;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL animationIsReady;
@property (nonatomic) BOOL audioIsReady;
@property (nonatomic) BOOL coverDownloadFinish;
@property (nonatomic) NSTimer timer;
@property (nonatomic) CSJLottiePlayerControlView controlView;
@property (nonatomic) q state;
@property (nonatomic) UITapGestureRecognizer singleTap;
@property (nonatomic) AVPlayer audioPlayer;
@property (nonatomic) double currentPlayTime;
@property (nonatomic) q lottieWidth;
@property (nonatomic) q lottieHeight;
@property (nonatomic) AVPlayerItem audioPlayerItem;
@property (nonatomic) BOOL playDidEnd;
@property (nonatomic) <CSJLottiePlayerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)audioPlayerItem;
- (double)currentPlayTime;
- (void)setLottieWidth:;
- (void)videoPlayFinish;
- (BOOL)animationIsReady;
- (BOOL)audioIsReady;
- (void)clickLayerWithLayerName:el:animationView:;
- (id)controlContainer;
- (BOOL)coverDownloadFinish;
- (id)finishView;
- (void)handlePlayFail:msg:;
- (void)innerPlay;
- (void)lot_animationFinished:;
- (void)lot_animationStart:;
- (long long)lottieHeight;
- (long long)lottieWidth;
- (BOOL)playDidEnd;
- (void)replaceImageWithEl:completion:;
- (void)setAnimationIsReady:;
- (void)setAudioIsReady:;
- (void)setAudioPlayerItem:;
- (void)setCoverDownloadFinish:;
- (void)setCurrentPlayTime:;
- (void)setLottieHeight:;
- (void)setPlayDidEnd:;
- (void)setSingleTap:;
- (void)setupAnimateViewConstraints;
- (void)setupAnimationView:;
- (void)setupAudioPlayerWithUrl:;
- (void)singleTapAction:;
- (BOOL)videoIsReady;
- (void)videoPlayerStateDidChanged;
- (void)invalidateTimer;
- (void)setAudioPlayer:;
- (void)seekToTime:;
- (void)dealloc;
- (void)play;
- (void)replay;
- (void)setState:;
- (void)setDelegate:;
- (void)stop;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)startTimer;
- (id)initWithPlayerItem:;
- (void)setMute:;
- (void)setTimer:;
- (id)view;
- (void)resume;
- (id)playerItem;
- (long long)state;
- (id)delegate;
- (void).cxx_destruct;
- (id)audioPlayer;
- (id)timer;
- (id)controlView;
- (void)pause;
- (void)setView:;
- (void)setupView;
- (void)setPlayerItem:;
- (id)animationView;
- (void)setAnimationView:;
- (void)timerAction;
- (BOOL)autoPlay;
- (void)setAutoPlay:;
- (void)setControlView:;
- (id)singleTap;
@end
