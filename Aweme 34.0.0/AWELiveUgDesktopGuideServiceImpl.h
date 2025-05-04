@interface AWELiveUgDesktopGuideServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)desktopChannelGuideAlreadyShowWithScene:enterFrom:guideType:extraParams:config:;
- (void)desktopChannelGuideShowFailedWithScene:enterFrom:guideType:error:extraParams:;
- (void)desktopChannelGuideClickWithScene:enterFrom:guideType:clickTarget:;
- (void)injectEvadeStrategy:;
- (void)checkCanShowWithModel:completion:;
- (void)p_executeRoomExitAction;
- (void)injectSceneDesktopChannelGuideStrategyWithScene:enterFrom:;
- (void)canShowDesktopGuideWithSceneParams:completion:;
- (void)preloadDesktopChannelGuideDataWithSceneParams:completion:;
- (void)showDesktopChannelGuideViewWithSceneParams:;
+ (id)sharedInstance;
@end
