@interface AWELifeFeedsLynxNestedItem : NSObject
@property (nonatomic) UIScrollView outsideScrollView;
@property (nonatomic) UIScrollView insideScrollView;
@property (nonatomic) BOOL observing;
@property (nonatomic) double scrollMargin;
@property (nonatomic) {UIEdgeInsets=dddd} nestedInsets;
@property (nonatomic) double insideScrollMargin;
@property (nonatomic) {UIEdgeInsets=dddd} insideInsets;
@property (nonatomic) BOOL tracking;
@property (nonatomic) BOOL dragging;
@property (nonatomic) BOOL decelerating;
@property (nonatomic) q panState;
@property (nonatomic) UIScrollView scrollingView;
@property (nonatomic) BOOL skipOutsideScrollWhenSetInset;
@property (nonatomic) BOOL skipInsideScrollWhenSetInset;
@property (nonatomic) BOOL skipScroll;
@property (nonatomic) <AWELifeFeedsLynxNestedItemDelegate> delegate;
- (void)addNestedScrollEventListen;
- (void)removeNestedScrollEventListen;
- (id)outsideScrollView;
- (void)outsideScrollViewPanAction:;
- (id)insideScrollView;
- (id)insideInsets;
- (double)insideScrollMargin;
- (void)setInsideInsets:;
- (void)setSkipInsideScrollWhenSetInset:;
- (id)nestedInsets;
- (void)setNestedInsets:;
- (void)setSkipOutsideScrollWhenSetInset:;
- (BOOL)skipScroll;
- (void)setSkipScroll:;
- (void)setupNestedInsets;
- (BOOL)skipOutsideScrollWhenSetInset;
- (BOOL)skipInsideScrollWhenSetInset;
- (void)setPanState:;
- (double)scrollMargin;
- (id)initWithOutsideScrollView:insideScrollView:;
- (void)setOutsideScrollView:;
- (void)setInsideScrollView:;
- (void)setScrollMargin:;
- (void)setInsideScrollMargin:;
- (void)setDragging:;
- (void)dealloc;
- (id)delegate;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (BOOL)observing;
- (BOOL)tracking;
- (void)setObserving:;
- (void)setDelegate:;
- (void)didScroll;
- (void)setTracking:;
- (BOOL)decelerating;
- (BOOL)dragging;
- (id)scrollingView;
- (void)setScrollingView:;
- (long long)panState;
- (void)setDecelerating:;
@end
