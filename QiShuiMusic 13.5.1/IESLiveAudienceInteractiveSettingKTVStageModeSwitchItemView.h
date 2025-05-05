@interface IESLiveAudienceInteractiveSettingKTVStageModeSwitchItemView : UIView
@property (nonatomic) IESLiveImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) @? didClicked;
- (void)updateSelected:;
- (id)didClicked;
- (void)setDidClicked:;
- (void)stageBtnAction;
- (void)setTitleLabel:;
- (id)iconView;
- (void)setIconView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupViews;
@end
