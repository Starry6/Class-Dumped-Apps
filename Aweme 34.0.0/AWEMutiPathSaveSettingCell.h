@interface AWEMutiPathSaveSettingCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView selectImageView;
@property (nonatomic) UIView lineView;
- (void)p_setupUI;
- (void)updateIsSelected:;
- (void)setSelectImageView:;
- (id)selectImageView;
- (id)initWithTitle:iconName:;
- (void)hideBottomLineView;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)lineView;
- (void)setIconImageView:;
- (void)setLineView:;
@end
