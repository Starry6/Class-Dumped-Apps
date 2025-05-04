@interface AWEIMEmoticonImagePrefetchComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)panelWillDisplayPageAt:;
- (void)pageDataDidReloaded:;
- (void)p_prefetchNeighbourTabImagesIfNeeded:;
- (void)p_prefetchPageData:;
- (void)p_prefetchImages:;
- (void)p_prefetchImages:maxCount:;
@end
