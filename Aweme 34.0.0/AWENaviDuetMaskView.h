@interface AWENaviDuetMaskView : UIView
@property (nonatomic) CAGradientLayer tGradientLayer;
@property (nonatomic) CAGradientLayer bGradientLayer;
@property (nonatomic) NSArray cgcolors;
- (id)tGradientLayer;
- (id)bGradientLayer;
- (void)renderingIfNeeded;
- (id)cgcolors;
- (void)setTGradientLayer:;
- (void)setBGradientLayer:;
- (void)setCgcolors:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end
