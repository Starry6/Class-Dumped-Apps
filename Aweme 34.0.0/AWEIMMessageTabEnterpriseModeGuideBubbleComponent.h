@interface AWEIMMessageTabEnterpriseModeGuideBubbleComponent : AWEIMComponentBase
@property (nonatomic) UIView bubble;
@property (nonatomic) <AWEIMMessageTabModeInterface> messageTabModeService;
@property (nonatomic) <AWEIMMessageTabNaviBubbleInterface> naviBubbleInterface;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (BOOL)canShowBubble;
- (void)setMessageTabModeService:;
- (id)messageTabModeService;
- (void)enterpriseSwitchModePopupDidDismiss;
- (void)__showBubbleInNavigationBar:shouldUpdateGuideShowHistory:;
- (void)showBubbleInNavigationBar:;
- (BOOL)isCurrentBubbleDisplaying;
- (id)naviBubbleInterface;
- (void)setNaviBubbleInterface:;
- (void).cxx_destruct;
- (id)bubble;
- (void)setBubble:;
@end
