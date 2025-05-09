@interface IESLiveMultiLinkerComponentPersonalTeamTask : IESLiveRevenueInteractPlayComponent
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel noticeLabel;
@property (nonatomic) IESLiveMultiLinkerTeamTaskView teamTaskView;
@property (nonatomic) IESLiveMultiLinkerTeamTaskViewModel taskViewModel;
@property (nonatomic) IESLiveRevenueInteractPlayAnchorModel anchorModel;
@property (nonatomic) NSString playName;
@property (nonatomic) BOOL isFocus;
@property (nonatomic) BOOL hadReportMissionShow;
@property (nonatomic) BOOL showedToast;
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
@property (nonatomic) q taskBeginTime;
- (void)setAnchorModel:;
- (void)setShowedToast:;
- (id)anchorModel;
- (void)bindTeamTaskAction;
- (void)clickTeamTaskView;
- (void)componentDidClear:;
- (void)componentDidLoad;
- (void)componentDidUpdateBattleView;
- (void)componentFinished;
- (void)componentPlaying;
- (void)componentPunishing;
- (id)disposable;
- (BOOL)hadReportMissionShow;
- (BOOL)needObserveTeamTaskMessage;
- (void)observeTeamTaskMessage;
- (id)playName;
- (void)removeTeamTaskView;
- (void)setDisposable:;
- (void)setHadReportMissionShow:;
- (void)setPlayName:;
- (void)setTaskBeginTime:;
- (void)setTaskViewModel:;
- (void)setTeamTaskView:;
- (BOOL)shouldShowRedBackground;
- (void)showNoticeOrTipsView;
- (void)showTeamTaskView;
- (BOOL)showedToast;
- (long long)taskBeginTime;
- (id)taskViewModel;
- (id)teamTaskView;
- (void)trackMissionShowIfNeeded;
- (void)updateContainerView;
- (void)updateNoticeLabelFont:;
- (void)updateTeamTaskView;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setIsFocus:;
- (BOOL)isFocus;
- (id)noticeLabel;
- (void)setNoticeLabel:;
@end
