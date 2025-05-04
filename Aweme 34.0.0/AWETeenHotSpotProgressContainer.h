@interface AWETeenHotSpotProgressContainer : UIView
@property (nonatomic) AWETeenHotSpotFeedModel hotSpotFeedModel;
@property (nonatomic) UILabel pageNumberLabel;
@property (nonatomic) AWEHotSearchProgressView progressView;
@property (nonatomic) BOOL pageNumberIsShowing;
@property (nonatomic) BOOL scrollToChangeHotSpot;
- (id)pageNumberLabel;
- (void)setScrollToChangeHotSpot:;
- (BOOL)scrollToChangeHotSpot;
- (BOOL)pageNumberIsShowing;
- (void)setPageNumberIsShowing:;
- (void)setPageNumberLabel:;
- (id)hotSpotFeedModel;
- (void)p_updatePageNumberWithCurrentIndex:totalPageCount:;
- (void)p_pageNumberDisappear:;
- (void)p_pageNumberAppear:;
- (void)setHotSpotFeedModel:;
- (void)updateWithHotSpotFeedModel:currentIndex:;
- (void)onScrollViewWillBeginDragging;
- (void)onScrollViewDidEndDragging;
- (id)init;
- (id)progressView;
- (void)setProgressView:;
- (void).cxx_destruct;
@end
