@interface UgenSwiperWidget : UgenLayoutWidget
@property (nonatomic) UgenSwiperPagerView pagerView;
@property (nonatomic) UgenPageControl pageControl;
@property (nonatomic) NSMutableDictionary cellCache;
@property (nonatomic) UgenNode rootNode;
@property (nonatomic) NSString direction;
@property (nonatomic) NSString loop;
@property (nonatomic) NSString autoplay;
@property (nonatomic) NSString speed;
@property (nonatomic) NSString effect;
@property (nonatomic) NSString indicator;
@property (nonatomic) NSString indicatorColor;
@property (nonatomic) NSString indicatorStyle;
@property (nonatomic) NSString indicatorSelectedColor;
@property (nonatomic) double previousMargin;
@property (nonatomic) double nextMargin;
@property (nonatomic) double pageMargin;
@property (nonatomic) double pageWidth;
@property (nonatomic) double pageHeight;
@property (nonatomic) NSDictionary loadMoreProps;
@property (nonatomic) q startIndex;
@property (nonatomic) @? ugenRenderHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindAttributeValue:forKey:;
- (id)cardViewSizeForPagerView:;
- (id)cardViewsForPagerView:;
- (void)didDisAppear;
- (id)indicatorSelectedColor;
- (id)layoutForPagerView:;
- (id)loadMoreProps;
- (double)nextMargin;
- (long long)numberOfItemsInPagerView:;
- (id)p_createWidgetWithRootNode:dataInfo:;
- (id)p_parseDataBindingValueWithKey:value:source:;
- (void)p_refreshWidget:dataInfo:;
- (void)p_renderPageControl;
- (id)p_sizeForCell;
- (long long)p_swiperEffectType;
- (long long)p_swiperPageControlStyle;
- (id)pagerView;
- (id)pagerView:cellForItemAtIndex:;
- (void)pagerView:didScrollFromIndex:toIndex:;
- (id)pagerView:viewForSupplementaryElementOfKind:atIndexPath:;
- (void)pagerViewDidEndDragging:willDecelerate:;
- (double)previousMargin;
- (void)setIndicatorSelectedColor:;
- (void)setLoadMoreProps:;
- (void)setNextMargin:;
- (void)setPagerView:;
- (void)setPreviousMargin:;
- (void)setUgenRenderHandler:;
- (id)ugenRenderHandler;
- (void)viewSizeDidChange:;
- (void)reloadData;
- (id)indicator;
- (void)setIndicator:;
- (id)direction;
- (id)init;
- (void)setDirection:;
- (void)setSpeed:;
- (id)pageControl;
- (void)setStartIndex:;
- (void)setPageControl:;
- (id)speed;
- (void)setEffect:;
- (long long)startIndex;
- (void)setIndicatorStyle:;
- (void)layout;
- (id)indicatorColor;
- (void).cxx_destruct;
- (void)didAppear;
- (id)effect;
- (id)rootNode;
- (void)setIndicatorColor:;
- (void)render;
- (id)loop;
- (id)indicatorStyle;
- (Class)containerViewClass;
- (double)pageWidth;
- (void)setPageWidth:;
- (void)setPageHeight:;
- (double)pageHeight;
- (void)setRootNode:;
- (void)setLoop:;
- (id)autoplay;
- (void)setAutoplay:;
- (id)cellCache;
- (void)setCellCache:;
- (double)pageMargin;
- (void)setPageMargin:;
@end
