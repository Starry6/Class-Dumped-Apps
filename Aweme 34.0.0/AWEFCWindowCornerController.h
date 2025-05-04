@interface AWEFCWindowCornerController : AWEBaseController
@property (nonatomic) AWECornerMaskUIImageView cornerMaskViewFeedAutoPlay;
@property (nonatomic) UIImageView cornerMaskView;
- (void)setCornerMaskView:;
- (void)addCornerMaskView;
- (void)showCornerMaskView;
- (void)hideCornerMaskView;
- (id)cornerMaskImage;
- (void)setCornerMaskViewFeedAutoPlay:;
- (id)cornerMaskViewFeedAutoPlay;
- (void)genarateCornerMask;
- (id)genarateCornerLayerWithClipImage:inRect:;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void).cxx_destruct;
- (id)cornerMaskView;
@end
