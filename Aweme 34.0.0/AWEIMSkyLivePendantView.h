@interface AWEIMSkyLivePendantView : UIView
@property (nonatomic) UIView dotView;
@property (nonatomic) UIView indicativeView;
@property (nonatomic) UILabel statusLabel;
- (id)indicativeView;
- (id)p_gradientLayerWithFrame:;
- (void)setIndicativeView:;
- (void)p_createIndicativeView:;
- (void)p_createDotView;
- (void)showDotOrIndicator:indicatorH:iconText:;
- (void)setBorderColor:;
- (void).cxx_destruct;
- (id)dotView;
- (void)setDotView:;
- (void)setStatusLabel:;
- (id)statusLabel;
@end
