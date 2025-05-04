@interface AWEUserWorkCellLifeController : AWEUserWorkController
@property (nonatomic) q profileTabType;
@property (nonatomic) <AWEUserTrackServiceProtocol> userTrackService;
- (void)containerViewWillAppear:;
- (void)containerViewDidDisappear:;
- (void)containerCollectionView:willDisplayCell:forItemAtIndexPath:;
- (void)containerCollectionView:didEndDisplayingCell:forItemAtIndexPath:;
- (void)containerCollectionView:didSelectItemAtIndexPath:;
- (void)sectionController:configCell:model:index:;
- (long long)profileTabType;
- (void)setProfileTabType:;
- (BOOL)enableOptimizeAnimationCoverLeak;
- (void)trackClientShowHomepageWithModel:extraParams:;
- (void)applicationDidEnterBackgroundActive:;
- (void)setUserTrackService:;
- (void)clearAnimatedImageBufferAndStopAnimation:;
- (id)userTrackService;
- (id)videoCoverOrderWith:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)containerViewDidLoad;
@end
