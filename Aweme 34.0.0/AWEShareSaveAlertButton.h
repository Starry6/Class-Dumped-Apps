@interface AWEShareSaveAlertButton : UIButton
@property (nonatomic) UIView loadingView;
@property (nonatomic) CAShapeLayer loadingLayer;
@property (nonatomic) AWEShareSaveAlertButtonModel buttonModel;
- (void)setupBinding;
- (id)loadingLayer;
- (void)setLoadingLayer:;
- (void)setLoadingView:;
- (id)loadingView;
- (void)setHighlighted:;
- (void)updateBackgroundColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setButtonModel:;
- (id)buttonModel;
+ (id)buttonWithModel:;
@end
