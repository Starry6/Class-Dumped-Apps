@interface AWEPlayInteractionVideoLoadingController : AWEPlayInteractionBaseController
@property (nonatomic) AWELoadingAndVolumeView loadAndVolumeView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)playLoadingAnimation;
- (void)setContainerHidden:;
- (void)setUpEvent;
- (id)loadAndVolumeView;
- (void)playLoadingAnimationAfterFeedReadyDelay;
- (void)setLoadAndVolumeView:;
- (void)addLoadAndVolumeView;
- (void)updateAnimationDelayStatusWithHidden:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)stopLoadingAnimation;
@end
