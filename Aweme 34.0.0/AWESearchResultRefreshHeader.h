@interface AWESearchResultRefreshHeader : AWERefreshHeader
@property (nonatomic) AWESearchResultRefreshHeaderToastView toastView;
@property (nonatomic) double ignoredScrollViewMarginTop;
- (void)scrollViewContentOffsetDidChange:;
- (void)resetToast;
- (double)ignoredScrollViewMarginTop;
- (void)updateScrollViewLoadingViewHiddenForIgnoredScrollViewMarginTop;
- (BOOL)enableFixIgnoredScrollViewMarginTop;
- (void)showToastWithTheme:message:;
- (void)setIgnoredScrollViewMarginTop:;
- (void)prepare;
- (void).cxx_destruct;
- (void)setToastView:;
- (id)toastView;
@end
