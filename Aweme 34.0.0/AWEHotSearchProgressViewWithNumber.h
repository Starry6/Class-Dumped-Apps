@interface AWEHotSearchProgressViewWithNumber : UIView
@property (nonatomic) UILabel pageNumberLabel;
@property (nonatomic) AWEHotSearchProgressView progressView;
@property (nonatomic) BOOL pageNumberIsShowing;
@property (nonatomic) BOOL scrollToChangeHotSpot;
@property (nonatomic) <AWEHotSearchProgressViewDelegate> outerDelegate;
- (void)onScrollViewWillBeginDragging:;
- (void)configureUI;
- (void)onScrollDidEnd;
- (void)setOuterDelegate:;
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
- (id)outerDelegate;
- (void)setPageNumberLabel:;
- (id)progressView;
- (void)setProgressView:;
- (void)setHidden:;
- (void).cxx_destruct;
@end
