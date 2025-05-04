@interface AWEIMGroupMemberBlockTimeCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView selectedImageView;
@property (nonatomic) UIView line;
- (void)showSelectedImage:;
- (void)configWithTtile:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)line;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setLine:;
- (void)setupUI;
- (id)selectedImageView;
- (void)setSelectedImageView:;
+ (id)identifier;
@end
