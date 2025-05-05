@interface IESLivePKComponentInteractScore : IESLivePKComponent
@property (nonatomic) BOOL isInteractScoreShowAgain;
@property (nonatomic) UIButton ownerInteractScoreButton;
@property (nonatomic) UIButton oppositeInteractScoreButton;
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
- (void)setOppositeInteractScoreButton:;
- (void)bindAction;
- (void)componentContainerFrameChanged;
- (void)componentDidClear:;
- (void)componentFinished;
- (void)componentInteracting;
- (void)componentPlaying;
- (id)disposable;
- (BOOL)isInteractScoreShowAgain;
- (void)onInteractScoreButtonClicked:;
- (id)oppositeInteractScoreButton;
- (id)ownerInteractScoreButton;
- (void)setDisposable:;
- (void)setIsInteractScoreShowAgain:;
- (void)setOwnerInteractScoreButton:;
- (void)trackInteractScoreShow;
- (void)updateScoreWithButton:score:;
- (void).cxx_destruct;
- (void)setupView;
- (void)clean;
@end
