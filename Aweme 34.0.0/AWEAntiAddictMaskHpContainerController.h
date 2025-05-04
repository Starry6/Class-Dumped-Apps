@interface AWEAntiAddictMaskHpContainerController : AWEBaseController
@property (nonatomic) BOOL needsPureMode;
@property (nonatomic) {CGSize=dd} preferredContentSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needsPureMode;
- (BOOL)hpSlidingScrollViewShouldScrollWithPanGestureRecognizer:reason:;
- (BOOL)hpRefreshPanGestureRecognizerShouldBegin:reason:;
- (BOOL)hpDisableFullscreenPopTransition;
- (void)setNeedsPureMode:;
@end
