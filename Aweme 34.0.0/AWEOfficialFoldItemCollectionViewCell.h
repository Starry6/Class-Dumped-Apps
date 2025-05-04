@interface AWEOfficialFoldItemCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIView dotView;
@property (nonatomic) UILabel label;
@property (nonatomic) AWEIMNoticeFoldStructModel model;
- (void)setModel:;
- (void)setLabel:;
- (id)initWithFrame:;
- (id)label;
- (id)model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setImageView:;
- (id)imageView;
- (id)dotView;
- (void)setDotView:;
@end
