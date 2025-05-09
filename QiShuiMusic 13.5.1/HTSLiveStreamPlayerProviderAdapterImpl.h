@interface HTSLiveStreamPlayerProviderAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) <IESLivePlayerProtocol> player;
@property (nonatomic) double currentWatchTime;
@property (nonatomic) double latestLiveTime;
@property (nonatomic) double liveStartTime;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} contentViewFrame;
@property (nonatomic) {CGSize=dd} mediaSize;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} renderViewFrame;
@property (nonatomic) NSArray multiLinkerGridRatioFrames;
@property (nonatomic) BOOL isNeedUpdateMultiLinkerLayoutParam;
@property (nonatomic) BOOL enableVideoRenderInAudioRoom;
@property (nonatomic) Q alignMode;
@property (nonatomic) q scaleType;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) NSNumber doubleInterationDistance;
@property (nonatomic) BOOL isVerticalStream;
@property (nonatomic) Q playbackState;
@property (nonatomic) BOOL shouldHasViceView;
@property (nonatomic) BOOL isGameViceViewExist;
@property (nonatomic) @? frameChangedBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)pauseCurrentMediaWithCallTrace:;
- (unsigned long long)alignMode;
- (void)changeCameraTo:callTrace:;
- (void)configToBeLayoutEvent:;
- (id)currentPlayerFrameWithLayoutType:;
- (id)doubleInterationDistance;
- (id)frameChangedBlock;
- (id)getUsedSpecifyRatioFrame;
- (void)layoutWithType:callTrace:;
- (BOOL)liveEnableRenderVideoOptimize;
- (void)p_layoutWithData:layoutType:;
- (void)pauseWithCallTrace:;
- (id)playViewFrameWithLayoutType:;
- (void)playWithCallTrace:;
- (id)playerOffsetWithPlayerFrame:videoSize:callTrace:;
- (id)playerViewWithCallTrace:;
- (id)previewViewWithCallTrace:;
- (void)resetFrame:callTrace:;
- (void)resetFrameWithCallTrace:;
- (void)resumeCurrentMediaWithCallTrace:;
- (void)resumePreviousMediaWithCallTrace:;
- (void)setDoubleInterationDistance:;
- (void)setFrameChangedBlock:;
- (void)setMute:callTrace:;
- (void)setPlayerViewHidden:callTrace:;
- (void)setRenderViewFrame:;
- (void)startVideoRenderingWithCallTrace:;
- (void)stopAndClearCurrentMediaWithCallTrace:;
- (void)stopVideoRenderingWithCallTrace:;
- (id)targetInstance;
- (id)trackParams;
- (id)videoAreaFrame;
- (id)player;
- (id)mediaSize;
+ (id)targetProtocol;
@end
