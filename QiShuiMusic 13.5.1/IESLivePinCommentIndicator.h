@interface IESLivePinCommentIndicator : UIView
@property (nonatomic) NSMutableArray dotViews;
@property (nonatomic) BOOL changing;
@property (nonatomic) q numberOfPages;
@property (nonatomic) q currentPage;
- (BOOL)changing;
- (void)setChanging:;
- (void)setProgress:fromPage:toPage:;
- (id)intrinsicContentSize;
- (long long)currentPage;
- (long long)numberOfPages;
- (void).cxx_destruct;
- (void)setCurrentPage:;
- (void)setNumberOfPages:;
- (id)dotViews;
- (void)setDotViews:;
@end
