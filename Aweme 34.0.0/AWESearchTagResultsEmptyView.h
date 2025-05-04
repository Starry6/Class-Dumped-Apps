@interface AWESearchTagResultsEmptyView : AWESearchScanResultsEmptyView
@property (nonatomic) Q emptyStatus;
@property (nonatomic) DUXVacantView emptyView;
@property (nonatomic) DUXVacantView noNetWorkView;
- (void)configUI;
- (void)updateEmptyViewWithStatus:openSearchPage:;
- (void)setEmptyStatus:;
- (unsigned long long)emptyStatus;
- (id)noNetWorkView;
- (void)setNoNetWorkView:;
- (id)init;
- (void)resume;
- (void)clear;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)emptyView;
- (void)setEmptyView:;
@end
