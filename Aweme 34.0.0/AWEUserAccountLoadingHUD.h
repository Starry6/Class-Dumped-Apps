@interface AWEUserAccountLoadingHUD : UIView
@property (nonatomic) AWEUITextLoadingView textLoadingView;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) NSString title;
- (id)textLoadingView;
- (void)setTextLoadingView:;
- (void)showOnView:withTitle:;
- (void)_commonInit;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)loadingView;
- (void)dismiss;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
