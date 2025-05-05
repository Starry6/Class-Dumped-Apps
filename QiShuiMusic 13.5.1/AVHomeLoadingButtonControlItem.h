@interface AVHomeLoadingButtonControlItem : AVControlItem
@property (nonatomic) AVLoadingButtonView loadingButtonView;
@property (nonatomic) BOOL showsLoadingIndicator;
- (id)titleFont;
- (void)setTitleFont:;
- (void)_updateTintColor;
- (id)view;
- (void).cxx_destruct;
- (void)setShowsLoadingIndicator:;
- (BOOL)showsLoadingIndicator;
- (void)_buttonTouchUpInside:;
- (id)initWithTitle:type:;
- (id)loadingButtonView;
- (void)setLoadingButtonView:;
@end
