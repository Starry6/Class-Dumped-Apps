@interface AWEFeedCapsuleView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIFont titleFont;
@property (nonatomic) Q style;
@property (nonatomic) {UIEdgeInsets=dddd} edgeInsets;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) BOOL titleShadowDisabled;
- (BOOL)titleShadowDisabled;
- (void)resetWithTitle:image:;
- (void)setTitleShadowDisabled:;
- (id)edgeInsets;
- (void)setTitleFont:;
- (void)setEdgeInsets:;
- (unsigned long long)style;
- (id)titleFont;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setImageSize:;
- (id)titleLabel;
- (id)imageSize;
- (void)layoutSubviews;
- (void)setImageView:;
- (id)imageView;
- (void)setStyle:;
- (void)resetUI;
@end
