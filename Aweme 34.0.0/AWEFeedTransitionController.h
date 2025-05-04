@interface AWEFeedTransitionController : AWEBaseController
@property (nonatomic) <AWEFeedUserProfileControllerProtocol> userProfileController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transition_destinatedViewControllerForSlideDirection:gestureRecognizer:;
- (BOOL)transition_enableCustomActionForSlideDirection:gestureRecognizer:;
- (unsigned long long)transition_destinatedType;
- (id)aAWEPadModuleAdapter;
- (id)userProfileViewControllerForModel:;
- (void)transitionDidStartTransitionWithContext:;
- (void)transitionPerformCustomActionForSlideDirection:gestureRecognizer:;
- (BOOL)disableTransitionDestinatedViewControllerForSlideDirectionWithModel:;
- (id)userProfileController;
- (void)setUserProfileController:;
- (BOOL)ifShowUploadAddressBookGuide;
- (id)getIronManModuleService;
- (BOOL)isAnchorDetailPagePanelShowing;
- (void)trackHomePageHotSlide:;
- (BOOL)shouldEnablePreCreateProfileVc;
- (void).cxx_destruct;
+ (Class)aAWEPadModuleAdapterClass;
@end
