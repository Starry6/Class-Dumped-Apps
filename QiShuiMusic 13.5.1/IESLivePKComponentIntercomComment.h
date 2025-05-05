@interface IESLivePKComponentIntercomComment : IESLivePKComponent
@property (nonatomic) IESLiveIntercomCommentEntranceView entranceView;
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
@property (nonatomic) BOOL hasPropEffectInfo;
- (BOOL)enablePKComponentLayoutOptimize;
- (void)bindAction;
- (void)bindActionLayout;
- (void)componentContainerFrameChanged;
- (void)componentDidClear:;
- (void)componentFinished;
- (void)componentInteracting;
- (void)componentPlaying;
- (void)componentPunishing;
- (id)disposable;
- (id)entranceView;
- (BOOL)hasPropEffectInfo;
- (void)loadIntercomCommentButton;
- (BOOL)needShowOppoTeamTaskAdditionInfo;
- (void)setDisposable:;
- (void)setEntranceView:;
- (void)setHasPropEffectInfo:;
- (void)updateCommentPadLayout;
- (void)updateIntercomCommentLayout:needShowInteractScore:;
- (double)topOffset;
- (void).cxx_destruct;
- (void)clean;
@end
