@interface UIInputResponderController : NSObject
@property (nonatomic) UIWindowScene scene;
@property (nonatomic) UIResponder responder;
@property (nonatomic) BOOL isOnScreen;
@property (nonatomic) BOOL automaticAppearanceEnabled;
@property (nonatomic) BOOL shouldSuppressInputAssistantUpdates;
- (BOOL)isOnScreen;
- (id)responder;
- (void)refreshWithLocalMinimumKeyboardHeight:;
- (double)verticalOverlapForView:usingKeyboardInfo:;
- (void)setShouldSuppressInputAssistantUpdates:;
- (id)scene;
- (void)removeVisibilityObserver:;
- (void)setAutomaticAppearanceEnabled:;
- (void)_beginDisablingAnimations;
- (void).cxx_destruct;
- (BOOL)shouldSuppressInputAssistantUpdates;
- (id)_textInputSessionAnalytics;
- (void)_endDisablingAnimations;
- (void)addVisibilityObserver:;
- (id)visibleFrameInView:;
- (BOOL)automaticAppearanceEnabled;
- (id)visibleInputViewFrameInView:;
- (void)assertNo;
+ (long long)interfaceOrientation;
+ (void)performOnControllers:;
+ (void)setInterfaceOrientation:;
+ (id)activeInputResponderController;
@end
