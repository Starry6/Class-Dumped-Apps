@interface AWELeftSideBarHomeAmbienceObject : AWELeftSideBarAmbienceObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)themeDidChange:;
- (void)hpLeftSideBarShowPopViewWithTask:;
- (void)hpLeftSideBarShowCaptionBubbleWithModel:animated:completion:clickContentBlock:clickCloseButtonBlock:autoDismissBlock:;
- (void)hpLeftSideBarHideCaptionBubbleWithAnimated:withReason:completion:;
- (BOOL)leftSideBarBussinessEntranceViewIsShow;
- (id)initWithAmbienceManager:withEntranceViewModel:withHostParams:;
- (BOOL)canShowAmbienceEntranceBadge;
- (BOOL)canShowAmbienceEntranceLottie;
- (void)addLeftSideBarBussinessEntranceView:completion:;
- (void)removeLeftSideBarBussinessEntranceViewWithCompletion:;
- (BOOL)canShowAmbienceEntrancePopView;
- (BOOL)canShowAmbienceEntranceCaption;
- (BOOL)canShowAmbienceEntranceInteractiveAnimation;
@end
