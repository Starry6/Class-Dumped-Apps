@interface IESLiveRoomBattleMatchWaitingCard : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel timeLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) UIView overlapView;
@property (nonatomic) <IESLiveSubscription> disposable;
@property (nonatomic) IESLiveRoomBattleMatchViewModel viewModel;
- (void)setOverlapView:;
- (void)cancelMatchButtonActions:;
- (void)didSetAttachingDIContext;
- (id)disposable;
- (void)observeWaitingTime:;
- (id)overlapView;
- (void)setDisposable:;
- (void)updateWaitingContent:;
- (void)setTimeLabel:;
- (id)timeLabel;
- (id)viewModel;
- (void)setTitleLabel:;
- (id)subtitleLabel;
- (void)setSubtitleLabel:;
- (void).cxx_destruct;
- (void)setCancelButton:;
- (void)setViewModel:;
- (id)titleLabel;
- (id)cancelButton;
- (void)setupViews;
@end
