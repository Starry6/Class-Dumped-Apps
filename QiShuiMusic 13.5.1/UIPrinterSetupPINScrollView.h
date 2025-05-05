@interface UIPrinterSetupPINScrollView : UIScrollView
@property (nonatomic) UIView contentView;
@property (nonatomic) double visibleHeight;
- (id)initWithContentView:;
- (id)contentView;
- (void)setVisibleHeight:;
- (void)dealloc;
- (void)keyboardDidChangeFrame:;
- (double)visibleHeight;
- (void)layoutSubviews;
- (void)scrollRectToVisible:animated:;
- (void).cxx_destruct;
- (void)setContentView:;
- (BOOL)_scrollsToMakeFirstResponderVisible;
@end
