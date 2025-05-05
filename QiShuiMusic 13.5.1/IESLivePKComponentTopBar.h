@interface IESLivePKComponentTopBar : IESLivePKComponent
@property (nonatomic) HTSLiveDoubleInteractionTitleBar titleBar;
- (void)componentContainerFrameChanged;
- (void)componentDidClear:;
- (void)componentFinished;
- (void)componentInteracting;
- (void)componentPlaying;
- (void)loadInteractiveTitleBar;
- (void)setTitleBar:;
- (id)titleBar;
- (void).cxx_destruct;
@end
