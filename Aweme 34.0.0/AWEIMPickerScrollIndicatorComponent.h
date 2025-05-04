@interface AWEIMPickerScrollIndicatorComponent : AWEIMComponentBase
@property (nonatomic) AWEIMAlbumScrollingIndicatorManager indicatorManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)contentScrollViewDidScroll:;
- (void)slideDidScrollToCategoryAtIndex:;
- (id)pickerVC;
- (void)categoryScrollViewDidEndDecelerating:;
- (void)contentScrollViewDidEndDecelerating:;
- (void)contentScrollViewDidEndDragging:willDecelerate:;
- (void)onPhotoPickerListSelectAsset:;
- (id)indicatorManager;
- (void)setIndicatorManager:;
- (void).cxx_destruct;
- (double)bottomOffset;
+ (BOOL)canCreateComponentWithContext:;
@end
