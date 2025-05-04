@interface AWEFavoriteController : AWEUserWorkController
@property (nonatomic) AWEUIKitViewControllerEmptyPageConfig emptyPageConfig;
@property (nonatomic) AWEUIKitViewControllerEmptyPageConfig errorPageConfig;
@property (nonatomic) AWEProfileVideoPreloadHandler videoPreloadHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerCollectionView:willDisplayCell:forItemAtIndexPath:;
- (void)containerCollectionView:didHighlightItemAtIndexPath:;
- (void)containerCollectionView:didSelectItemAtIndexPath:;
- (void)setEmptyPageConfig:;
- (id)modelForIndex:;
- (id)emptyPageConfig;
- (id)errorPageConfig;
- (void)updateEmptyConfig:;
- (id)vacantTrackParams;
- (id)videoPreloadHandler;
- (void)setErrorPageConfig:;
- (void)setVideoPreloadHandler:;
- (void).cxx_destruct;
- (void)containerViewDidLoad;
@end
