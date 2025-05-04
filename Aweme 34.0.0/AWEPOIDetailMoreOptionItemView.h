@interface AWEPOIDetailMoreOptionItemView : UIView
@property (nonatomic) AWEPOIDetailMoreOptionItemModel item;
@property (nonatomic) UIView separator;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
- (id)accessibilityLabel;
- (void)setSeparator:;
- (id)separator;
- (void)setItem:;
- (id)item;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setImageView:;
- (id)imageView;
- (id)initWithItem:;
- (void)setupViews;
- (void)hideSeparator;
@end
