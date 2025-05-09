@interface AWEUGPendantAlphaVideoView : AWEUGPendantContentBaseView
@property (nonatomic) IESLiveVideoGiftController expandedController;
@property (nonatomic) IESLiveVideoGiftController foldedController;
@property (nonatomic) IESLiveVideoGiftMetalConfiguration expandedConfig;
@property (nonatomic) IESLiveVideoGiftMetalConfiguration foldedConfig;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} foldFrame;
@property (nonatomic) BOOL isExistedError;
@property (nonatomic) BOOL playSuccessfully;
@property (nonatomic) q retryTimes;
@property (nonatomic) @? contentPlaySuccessfullyHandler;
@property (nonatomic) @? contentPlayFailedHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishPlayingWithError:;
- (void)videoGiftController:willPlayFrame:;
- (long long)retryTimes;
- (void)setRetryTimes:;
- (void)setFoldFrame:;
- (void)performUpdateFromState:toState:animated:animationStart:animationEnd:;
- (id)foldFrame;
- (void)setContentPlaySuccessfullyHandler:;
- (void)setContentPlayFailedHandler:;
- (id)contentPlaySuccessfullyHandler;
- (id)contentPlayFailedHandler;
- (void)playLoopAniamtion;
- (void)animateWithDuration:timingFunction:animations:completion:;
- (id)addAlphaVideoControllerWithConfig:frame:;
- (void)setFoldedController:;
- (void)setExpandedConfig:;
- (void)setFoldedConfig:;
- (void)switchPlayingAlphaVideoWithFolded:;
- (id)foldedController;
- (void)setPlaySuccessfully:;
- (void)setIsExistedError:;
- (void)performFoldingAnimationWithAnimationStart:animationEnd:;
- (void)performExpandingAnimationWithAnimationStart:animationEnd:;
- (void)performEdgingAnimationWithAnimationStart:animationEnd:;
- (void)performUnedgingAnimationWithAnimationStart:animationEnd:;
- (void)trackAlphaVideoLogWithMessage:;
- (id)expandedConfig;
- (id)foldedConfig;
- (void)monitorAlphaVideoPlayRetrySuccessfullyWithRetryTimes:;
- (BOOL)playSuccessfully;
- (void)monitorAlphaVideoPlayFailedWithError:;
- (BOOL)isExistedError;
- (id)initWithFrame:expandFrame:foldFrame:foldedAlphaVideo:expandedAlphaVideo:;
- (void)updateWithFrame:expandFrame:foldFrame:foldedAlphaVideo:expandedAlphaVideo:;
- (void).cxx_destruct;
- (void)pauseAnimation;
- (void)addObservers;
- (void)appDidBecomeActive;
- (id)expandedController;
- (void)setExpandedController:;
@end
