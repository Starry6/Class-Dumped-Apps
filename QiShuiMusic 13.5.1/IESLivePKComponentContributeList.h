@interface IESLivePKComponentContributeList : IESLiveRevenueInteractPlayComponent
@property (nonatomic) HTSLivePKContributeListView selfList;
@property (nonatomic) HTSLivePKContributeListView otherList;
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
@property (nonatomic) RACDisposable receiveDisposable;
- (void)cleanOnfinish;
- (void)componentContainerFrameChanged;
- (void)componentDidClear:;
- (void)componentFinished;
- (void)componentInteracting;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentReceivedLynxEvent:extraParmas:;
- (id)disposable;
- (void)doScreenClearAnimation:;
- (void)loadContributeView;
- (id)otherList;
- (id)receiveDisposable;
- (id)selfList;
- (void)setContributeListAlpha:;
- (void)setDisposable:;
- (void)setOtherList:;
- (void)setReceiveDisposable:;
- (void)setSelfList:;
- (void)updateContributeListHidden:;
- (void).cxx_destruct;
@end
