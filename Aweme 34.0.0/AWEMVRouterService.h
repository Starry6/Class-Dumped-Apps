@interface AWEMVRouterService : NSObject
@property (nonatomic) BOOL isJumpingToDetailPage;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEMVChannelPageContext context;
@property (nonatomic) UIViewController<AWEDCFeedListViewControllerProtocol> contentVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)zoomTransitionShrinkFinish;
- (id)contentVC;
- (void)setContentVC:;
- (void)relatedVideoViewController:awemeModel:didChangePlaybackToAction:;
- (void)relatedVideoViewControllerWillStartNextLoop:;
- (void)setIsJumpingToDetailPage:;
- (BOOL)isJumpingToDetailPage;
- (void)prepareBackFromDetailPage;
- (void)relatedVCWillQuitCurrentPlaybackTime:itemID:playState:;
- (void)ml_postBackToMVTabWithModel:;
- (void)enterRelatedVideoVCWithModel:;
- (void)enterBannerLandPageWithModel:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
