@interface AWENearbyPOIContentContainer : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) AWEGradientView bgGraidentView;
@property (nonatomic) AWEGradientView boderGradientView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} lastBounds;
- (void)configViewsWithModel:size:;
- (void)addBgGradient;
- (void)addBoderGradient;
- (id)boderGradientView;
- (id)bgGraidentView;
- (void)setBgGraidentView:;
- (void)setBoderGradientView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setImageView:;
- (id)imageView;
- (void)setupUI;
- (id)lastBounds;
- (void)setLastBounds:;
@end
