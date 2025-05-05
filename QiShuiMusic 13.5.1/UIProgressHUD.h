@interface UIProgressHUD : UIView
- (void)drawRect:;
- (id)initWithWindow:;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setText:;
- (void)hide;
- (id)initWithFrame:;
- (void)setFontSize:;
- (void)done;
- (void)showInView:;
- (void)setShowsText:;
- (void)show:;
@end
