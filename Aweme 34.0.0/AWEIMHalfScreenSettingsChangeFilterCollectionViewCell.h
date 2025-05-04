@interface AWEIMHalfScreenSettingsChangeFilterCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView selectedCheckMarkImageView;
@property (nonatomic) UIImageView unselectedCheckMarkImageView;
@property (nonatomic) UIView lineView;
- (id)selectedCheckMarkImageView;
- (id)unselectedCheckMarkImageView;
- (void)setSelectedCheckMarkImageView:;
- (void)setUnselectedCheckMarkImageView:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)lineView;
- (void)setLineView:;
@end
