@interface IESLivePKComponentLastResultView : IESLivePKComponent
@property (nonatomic) UIButton lastResultButton;
@property (nonatomic) <IESLiveSubscription> disposable;
- (void)onButtonClicked;
- (void)bindAction;
- (void)componentContainerFrameChanged;
- (void)componentDidClear:;
- (void)componentFinished;
- (void)componentInteracting;
- (void)componentPlaying;
- (id)disposable;
- (id)lastResultButton;
- (void)refreshLastResultButtonFrame;
- (void)setDisposable:;
- (void)setLastResultButton:;
- (void).cxx_destruct;
- (void)setUpView;
- (void)clean;
@end
