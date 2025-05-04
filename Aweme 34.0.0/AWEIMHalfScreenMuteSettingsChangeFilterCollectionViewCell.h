@interface AWEIMHalfScreenMuteSettingsChangeFilterCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView selectedCheckMarkImageView;
@property (nonatomic) UIImageView unselectedCheckMarkImageView;
@property (nonatomic) UIView lineView;
@property (nonatomic) AWEIMHalfScreenMuteFilterSettingsCellViewModel viewModel;
- (void)configWithViewModel:;
- (id)selectedCheckMarkImageView;
- (id)unselectedCheckMarkImageView;
- (void)setSelectedCheckMarkImageView:;
- (void)setUnselectedCheckMarkImageView:;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)lineView;
- (void)setLineView:;
@end
