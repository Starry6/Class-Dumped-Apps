@interface AWEIMPickerSlideTabComponent : AWEIMComponentBase
@property (nonatomic) AWEIMAlbumSlidingTabView slideTabView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)slidingTabView:didSelectIndex:;
- (double)slideTabHeight;
- (void)categoryScrollViewDidScroll:;
- (void)categoryScrollViewDidEndDecelerating:;
- (void)setSlideTabView:;
- (id)slideTabView;
- (void)updateSlideTabViewAccessibilityWithSelectIndex:;
- (void)layoutViews;
- (void).cxx_destruct;
- (void)createUI;
@end
