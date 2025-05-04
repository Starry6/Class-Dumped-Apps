@interface AWETeenMoreSheetActionCell : UICollectionViewCell
@property (nonatomic) UIView bgMaskView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) BOOL isLeftAlignedStyle;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (void)setIsLeftAlignedStyle:;
- (BOOL)isLeftAlignedStyle;
- (void)configWithAction:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
@end
