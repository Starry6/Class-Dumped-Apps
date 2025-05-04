@interface AWETabBarElementContainerView : UIView
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) NSMutableArray elementButtons;
@property (nonatomic) NSArray elementButtonViewModels;
@property (nonatomic) double lightProgress;
@property (nonatomic) BOOL isFold;
@property (nonatomic) Q elementAlignment;
- (void)updateLightModeWithProgress:;
- (void)changeFoldState:;
- (void)setElementAlignment:;
- (void)updateElementButtonViewModels:;
- (BOOL)isFold;
- (void)setIsFold:;
- (void)p_refreshLayout;
- (id)elementButtons;
- (void)setElementButtonViewModels:;
- (id)elementButtonViewModels;
- (void)setLightProgress:;
- (void)setElementButtons:;
- (double)lightProgress;
- (id)init;
- (void)setScrollView:;
- (id)scrollView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (unsigned long long)elementAlignment;
@end
