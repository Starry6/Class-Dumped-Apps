@interface AWEPlayInteractionSubtitleElement : AWEPlayInteractionLeftElement
@property (nonatomic) AWEFeedSubtitleContainerView subtitleContainer;
@property (nonatomic) double maxWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)onPlayer:didChangePlaybackStateWithAction:;
- (void)onPlayer:onSubtitleInfoCallBack:;
- (void)playInteractionWillEnterLandscape;
- (void)playInteractionDidExitLandscape;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)changeSubtitleSwitchStatus:;
- (BOOL)shouldShowSubtitleView;
- (void)dealloc;
- (void)viewDidLoad;
- (double)maxWidth;
- (void)setMaxWidth:;
- (void).cxx_destruct;
- (void)reset;
- (id)playerViewController;
- (void)setSubtitleContainer:;
- (id)subtitleContainer;
+ (id)activateInfoWithContext:;
@end
