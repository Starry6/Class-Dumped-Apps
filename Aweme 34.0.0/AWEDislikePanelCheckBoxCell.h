@interface AWEDislikePanelCheckBoxCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) DUXCheckBox checkBox;
@property (nonatomic) AWEDislikeRealDimension dislikeInfo;
@property (nonatomic) <AWEDislikePanelCheckBoxCellDelegate> delegate;
- (id)checkBox;
- (void)setCheckBox:;
- (void)setDislikeInfo:;
- (void)changeCheckBoxStatus;
- (void)responseToDelegate;
- (id)dislikeInfo;
- (void)didChecked:;
- (void)configWithDislikeModel:;
- (id)delegate;
- (void)setHighlighted:animated:;
- (void)didTap:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setIconImageView:;
- (void)setupUI;
@end
