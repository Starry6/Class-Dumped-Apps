@interface CEKBadgeView : UIView
@property (nonatomic) double _fillCornerRadius;
@property (nonatomic) UIColor _fillColor;
@property (nonatomic) UIColor _contentColor;
@property (nonatomic) <CEKBadgeViewDelegate> delegate;
- (void)drawRect:;
- (id)_maskImage;
- (void)setDelegate:;
- (id)_contentColor;
- (id)initWithFrame:;
- (id)delegate;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (id)_fillColor;
- (void)_setContentColor:;
- (void)_setFillColor:;
- (void)_setFillCornerRadius:;
- (id)_invertMaskImage:;
- (double)_fillCornerRadius;
@end
