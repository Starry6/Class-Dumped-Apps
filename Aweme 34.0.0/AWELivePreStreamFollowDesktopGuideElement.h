@interface AWELivePreStreamFollowDesktopGuideElement : AWELiveBaseElement
@property (nonatomic) AWELivePreStreamDesktopGuideManager guideManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)enterFrom;
- (void)initializeElement;
- (BOOL)shouldDesktopChannelGuideEvadeWithScene:enterFrom:;
- (void)desktopChannelGuideShowFailedWithScene:enterFrom:guideType:error:extraParams:;
- (unsigned long long)elementConfig;
- (id)guideManager;
- (void)setGuideManager:;
- (void)onUserEnterLiveRoom:;
- (void)onUserQuitLiveRoom:;
- (void)preloadElement;
- (void)showLiveAlertElementWithCompletion:;
- (void)showDesktopLiveChannelGuide;
- (void)desktopChannelGuideAlreadyShowWithScene:enterFrom:guideType:extraParams:;
- (void)dealloc;
- (unsigned long long)priority;
- (void)setData:;
- (void).cxx_destruct;
- (id)sceneType;
- (id)elementView;
+ (BOOL)shouldActivateElement;
@end
