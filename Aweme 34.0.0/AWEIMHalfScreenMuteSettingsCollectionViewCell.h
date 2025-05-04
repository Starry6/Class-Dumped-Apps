@interface AWEIMHalfScreenMuteSettingsCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UIButton editBtn;
@property (nonatomic) UIImageView selectedStateView;
@property (nonatomic) UIView lineView;
@property (nonatomic) UISwitch switchView;
@property (nonatomic) <AWEIMHalfScreenMuteSettingsCollectionViewCellDelegate> delegate;
- (void)configWithViewModel:;
- (void)setEditBtn:;
- (id)editBtn;
- (id)selectedStateView;
- (void)didTapOnEditBtn;
- (void)setSelectedStateView:;
- (id)delegate;
- (id)initWithFrame:;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (id)subtitleLabel;
- (id)lineView;
- (void)setLineView:;
- (void)setSwitchView:;
- (id)switchView;
@end
