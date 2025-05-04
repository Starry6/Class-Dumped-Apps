@interface AWELiveShelfMoreOptionItemView : UIView
@property (nonatomic) AWELiveShelfMoreOptionItem item;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
- (id)accessibilityLabel;
- (void)setItem:;
- (id)item;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
- (id)initWithItem:;
- (void)setupViews;
@end
