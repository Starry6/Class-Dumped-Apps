@interface AWEPlayInteractionLikeAnimationView : UIView
@property (nonatomic) LOTAnimationView diggLikeAnimationView;
@property (nonatomic) BOOL isDynamic;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) UIViewController viewController;
- (void)handleAppDidEnterBackground;
- (id)getLOTAnimationViewWithGurd:defaultFileName:completionRemove:;
- (void)setDiggLikeAnimationView:;
- (id)diggLikeAnimationView;
- (void)trackLikeMultiClickWithTag:;
- (void)trackLikeAnimation:status:reason_for_failure:;
- (void)hideIfNeed:;
- (id)_scaleWithFrame:withScale:;
- (BOOL)_pointInsideDisableInteractionView:;
- (id)_disableInteractionView;
- (void)showWithModel:withViewController:;
- (void)setModel:;
- (void)removeFromSuperview;
- (void)setIsDynamic:;
- (BOOL)isDynamic;
- (BOOL)pointInside:withEvent:;
- (id)viewController;
- (id)model;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setViewController:;
@end
