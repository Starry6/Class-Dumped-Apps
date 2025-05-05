@interface AWEIMEmoticonPageControl : UIView
@property (nonatomic) NSMutableArray pageArray;
@property (nonatomic) q numberOfPages;
@property (nonatomic) q currentPage;
@property (nonatomic) BOOL showRecentPage;
- (id)pageArray;
- (void)setPageArray:;
- (void)setShowRecentPage:;
- (BOOL)showRecentPage;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (long long)currentPage;
- (long long)numberOfPages;
- (void).cxx_destruct;
- (void)setCurrentPage:;
- (void)setNumberOfPages:;
- (void)_setupUI;
@end
