@interface AWEIronManLandingPageFooterView : UICollectionReusableView
@property (nonatomic) UILabel noMoreLabel;
@property (nonatomic) UILabel loadingLabel;
@property (nonatomic) BOOL useV2;
- (void)awe_themeDidChange:;
- (BOOL)useV2;
- (void)setUseV2:;
- (id)noMoreLabel;
- (void)setNoMoreLabel:;
- (void)setThemeUI;
- (void)showNoMoreView;
- (void)hideNoMoreView;
- (BOOL)isShowingNoMoreLabel;
- (void)useV2Style;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)loadingLabel;
- (void)showLoadingView;
- (void)setLoadingLabel:;
- (void)setUpUI;
- (void)hideLoadingView;
@end
