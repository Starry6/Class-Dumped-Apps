@interface PDFIconsView : UIView
- (void)touchesBegan:withEvent:;
- (void)layoutSubviews;
- (id)currentPage;
- (void).cxx_destruct;
- (void)touchesMoved:withEvent:;
- (void)pageChanged:;
- (id)initFromThumbnailView:;
- (void)updateIconsImages;
- (void)documentChanged:;
- (void)documentMutated:;
- (void)currentPageChanged:;
- (int)_iconsLayoutIconCount;
- (id)_iconsLayoutSize;
- (void)_updateScrubberAtViewLocation:;
- (void)_updateScrubberForPageIndex:goToPage:;
@end
