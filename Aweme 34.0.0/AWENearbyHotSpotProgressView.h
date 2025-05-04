@interface AWENearbyHotSpotProgressView : UIView
@property (nonatomic) UILabel pageNumberLabel;
@property (nonatomic) AWENearbyHotSpotProgressContentView progressView;
@property (nonatomic) BOOL pageNumberIsShowing;
@property (nonatomic) BOOL scrollToChangeHotSpot;
- (void)onScrollViewWillBeginDragging:;
- (void)configureUI;
- (void)onScrollDidEnd;
- (void)updateUIWithCurrentIndex:totalPageCount:isScroll:;
- (void)onScrollWillChangeVideoWithIndex:totalPageCount:;
- (void)onChangeToNewHotSpotModelIsScrolled:;
- (id)pageNumberLabel;
- (void)updatePageNumberWithCurrentIndex:totalPageCount:isScroll:;
- (void)setScrollToChangeHotSpot:;
- (BOOL)scrollToChangeHotSpot;
- (void)pageNumberDisappear;
- (void)pageNumberAppear;
- (void)performPageNumberAnimation;
- (BOOL)pageNumberIsShowing;
- (void)setPageNumberIsShowing:;
- (void)setPageNumberLabel:;
- (id)progressView;
- (void)setProgressView:;
- (void).cxx_destruct;
@end
