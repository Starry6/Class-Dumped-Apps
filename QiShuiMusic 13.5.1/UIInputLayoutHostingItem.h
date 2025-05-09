@interface UIInputLayoutHostingItem : UIInputWindowControllerHostingItem
@property (nonatomic) UILayoutGuide belowInputLayoutGuide;
@property (nonatomic) UILayoutGuide inputViewLayoutGuide;
@property (nonatomic) UILayoutGuide assistantLayoutGuide;
@property (nonatomic) UILayoutGuide accessoryLayoutGuide;
@property (nonatomic) NSLayoutConstraint bottomConstraint;
@property (nonatomic) NSLayoutConstraint leftConstraint;
@property (nonatomic) NSLayoutConstraint rightConstraint;
@property (nonatomic) NSLayoutConstraint keyplaneWidthConstraint;
@property (nonatomic) NSArray onscreenConstraints;
@property (nonatomic) NSArray offscreenConstraints;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView inputLayoutView;
@property (nonatomic) UIView inputLayoutAssistantView;
@property (nonatomic) UIView inputLayoutAccessoryView;
@property (nonatomic) UIInputViewSet inputViewSet;
@property (nonatomic) NSArray guideConstraints;
@property (nonatomic) NSArray inputSetConstraints;
@property (nonatomic) UIInputWindowControllerHosting hosting;
@property (nonatomic) BOOL isOnScreen;
@property (nonatomic) BOOL isFloating;
@property (nonatomic) UIKBInputBackdropView standardBackgroundView;
@property (nonatomic) UIView platterView;
@property (nonatomic) UIView pillView;
@property (nonatomic) UIPinchGestureRecognizer pinchGesture;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setInputViewSet:;
- (void)updateVisibilityConstraintsForPlacement:;
- (BOOL)isOnScreen;
- (id)inputAssistantView;
- (void)setPlacement;
- (void)setInputAccessoryView:;
- (id)initWithContainer:;
- (id)visibleFrame;
- (void)updateInputBackdropViewVisibility;
- (void)updateConstraintInsets;
- (id)pillView;
- (void)setBottomConstraint:;
- (void)refreshApplicator;
- (id)inputViewSet;
- (void)updateInputAccessoryBackdropView;
- (id)platterView;
- (void)clearInputAccessoryViewEdgeConstraints;
- (id)inputLayoutAccessoryView;
- (id)bottomConstraint;
- (void)setInputAssistantView:;
- (void)createBackdropView;
- (void)trackPinch:;
- (void)updateInputAssistantBackdropView;
- (id)inputViewLayoutGuide;
- (id)guideConstraints;
- (BOOL)isFloating;
- (void)setIsFloating:;
- (void)clearVisibilityConstraints;
- (void)_updateBackdropViews;
- (id)onscreenConstraints;
- (void)setPillView:;
- (void)setPlatterView:;
- (void)setInputLayoutAssistantView:;
- (void)disableViewSizingConstraints:forNewView:;
- (id)keyplaneWidthConstraint;
- (void)clearInputAssistantViewEdgeConstraints;
- (void)hideBackdrop:;
- (id)hosting;
- (void)setLeftConstraint:;
- (id)initWithInputViewSet:container:;
- (void)updateViewSizingConstraints;
- (void)updateInputBackdropView;
- (void)someViewDidLayoutSubviews;
- (id)pinchGesture;
- (void)setInputViewLayoutGuide:;
- (void)updateViewSizingConstraints:;
- (id)accessoryLayoutGuide;
- (void)setAccessoryLayoutGuide:;
- (id)inputAccessoryView;
- (void)setPinchGesture:;
- (id)inputSetConstraints;
- (id)containerView;
- (void)setBelowInputLayoutGuide:;
- (void)setInputView:;
- (id)constraintsForView:embeddedInGuide:;
- (void)setContainerView:;
- (void)createPlatterBackdropView;
- (void)setInputSetConstraints:;
- (void)updateInputViewSet:;
- (id)belowInputLayoutGuide;
- (id)assistantLayoutGuide;
- (void)constrainGuidesIfNeeded;
- (void)setAssistantLayoutGuide:;
- (void)setOffscreenConstraints:;
- (id)inputLayoutView;
- (id)leftConstraint;
- (void)clearInputViewEdgeConstraints;
- (void)setOnscreenConstraints:;
- (void)setKeyplaneWidthConstraint:;
- (void)setInputLayoutAccessoryView:;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (void)constrainViewsToGuidesIfNeeded;
- (void)setStandardBackgroundView:;
- (void)unloadForPlacement;
- (void)setInputLayoutView:;
- (void)updateEmptyHeightConstraint;
- (id)inputView;
- (id)constraintsForView:embeddedInView:insets:;
- (void)setIsOnScreen:;
- (void)reloadForPlacement;
- (void)changeOnScreen:animated:;
- (id)rightConstraint;
- (id)offscreenConstraints;
- (void)setRightConstraint:;
- (void)setHosting:;
- (void)resetPlacement;
- (id)inputLayoutAssistantView;
- (void)setGuideConstraints:;
- (id)standardBackgroundView;
+ (BOOL)requiresConstraintBasedLayout;
@end
