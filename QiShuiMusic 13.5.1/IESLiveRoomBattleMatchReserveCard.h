@interface IESLiveRoomBattleMatchReserveCard : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) HTSLivePaddingLabel timeLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) IESLiveCustomButton reserveButton;
@property (nonatomic) IESLiveCustomButton cancelButton;
@property (nonatomic) IESLiveCustomButton matchButton;
@property (nonatomic) IESLiveRoomBattleMatchViewModel viewModel;
- (void)setMatchButton:;
- (void)cancelButtonActions:;
- (void)didSetAttachingDIContext;
- (id)matchButton;
- (void)matchButtonActions:;
- (void)renderButtonStatus:match:;
- (void)renderSubtitle:suffix:highlight:;
- (void)renderTimeLabel:highlight:;
- (id)reserveButton;
- (void)reserveButtonActions:;
- (void)setReserveButton:;
- (void)updateMatchContent:;
- (void)updateReserveContent:;
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
