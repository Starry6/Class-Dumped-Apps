@interface AWESearchScanCircleSearchRectView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) CAShapeLayer maskLayer;
@property (nonatomic) double rectOutterPadding;
- (void)impUpdateWithRect:;
- (void)updateWithRect:;
- (double)rectOutterPadding;
- (void)setRectOutterPadding:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (id)maskLayer;
- (void)setMaskLayer:;
- (void)setupImageView;
@end
