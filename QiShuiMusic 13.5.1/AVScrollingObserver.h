@interface AVScrollingObserver : NSObject
@property (nonatomic) BOOL scrolling;
@property (nonatomic) BOOL scrollingQuickly;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addDelegate:;
- (id)initWithView:;
- (void)dealloc;
- (void)removeDelegate:;
- (BOOL)isScrolling;
- (BOOL)isScrollingQuickly;
- (void).cxx_destruct;
- (void)_updateScrollingStatus;
- (void)update;
- (void)_observeScrollViewDidScroll:;
- (void)setScrollingQuickly:;
- (void)setScrolling:;
@end
