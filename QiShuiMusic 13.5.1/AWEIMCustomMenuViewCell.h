@interface AWEIMCustomMenuViewCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel label;
- (void)configWithMenuItem:;
- (void)layoutSubviews;
- (void)setLabel:;
- (id)label;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
+ (id)identifier;
@end
