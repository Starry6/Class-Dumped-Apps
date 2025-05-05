@interface UIKBTutorialMultipageView : UIView
@property (nonatomic) UIScrollView pageScrollView;
@property (nonatomic) NSArray pageViews;
@property (nonatomic) UIPageControl pageControl;
@property (nonatomic) NSTimer nextPageScrollTimer;
@property (nonatomic) double pagingInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pageViews;
- (void)setPageViews:;
- (void)layoutSubviews;
- (id)pageControl;
- (void)setPageControl:;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (void).cxx_destruct;
- (double)pagingInterval;
- (id)initWithPageViews:pagingInterval:;
- (void)configMediaView;
- (void)scrollToNextPage;
- (void)resetPageScrolling;
- (id)pageScrollView;
- (void)setPageScrollView:;
- (id)nextPageScrollTimer;
- (void)setNextPageScrollTimer:;
- (void)setPagingInterval:;
@end
