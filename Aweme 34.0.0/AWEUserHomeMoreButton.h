@interface AWEUserHomeMoreButton : UIButton
@property (nonatomic) UIImageView darkImgView;
@property (nonatomic) DUXBadge dotView;
- (void)updateAlpha:;
- (BOOL)isLightMode;
- (void)setHasNew:;
- (void)setDarkImgView:;
- (id)darkImgView;
- (id)init;
- (void)_commonInit;
- (void)dealloc;
- (id)initWithFrame:;
- (void)setHighlighted:;
- (void)viewWillAppear;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)copyWithZone:;
- (id)dotView;
- (void)setDotView:;
- (void)updateImage:;
+ (id)redPointColor;
@end
