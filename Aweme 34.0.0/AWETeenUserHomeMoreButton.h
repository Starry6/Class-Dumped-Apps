@interface AWETeenUserHomeMoreButton : UIButton
@property (nonatomic) UIImageView darkImgView;
- (void)awe_themeReload;
- (void)updateAlpha:;
- (BOOL)isLightMode;
- (void)setDarkImgView:;
- (id)darkImgView;
- (id)init;
- (void)_commonInit;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateImage:;
+ (id)redPointColor;
@end
