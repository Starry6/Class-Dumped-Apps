@interface UIPointerInteraction : NSObject
@property (nonatomic) NSArray drivers;
@property (nonatomic) UIPointerRegion currentRegion;
@property (nonatomic) UIPointerRegion mostRecentRegion;
@property (nonatomic) q currentModifiers;
@property (nonatomic) UIPointerRegion defaultRegion;
@property (nonatomic) BOOL _delegateProvidesRegionsAsynchronously;
@property (nonatomic) BOOL pausesPointerUpdatesWhilePanning;
@property (nonatomic) <UIPointerInteractionDelegate> delegate;
@property (nonatomic) BOOL enabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIView view;
- (id)currentRegion;
- (void)_setPausesPointerUpdatesWhilePanning:;
- (void)setCurrentRegion:;
- (id)drivers;
- (id)init;
- (BOOL)_supportsAssociation;
- (id)_pointerRegionAtPoint:modifiers:;
- (void)dealloc;
- (void)_modifiersDidChangeInRegion:update:;
- (BOOL)_pausesPointerUpdatesWhilePanning;
- (void)_viewTraitCollectionDidChange:;
- (void)_updateInteractionIsEnabled;
- (long long)currentModifiers;
- (void)set_delegateProvidesRegionsAsynchronously:;
- (void)setMostRecentRegion:;
- (void)didMoveToView:;
- (void)willMoveToView:;
- (void)_updateDebugUIForRegionIfEnabled:;
- (id)_pointerStyleForRegion:;
- (id)mostRecentRegion;
- (void)driverDidExit:;
- (id)view;
- (id)_targetedPreviewForContinuingEffectWithPreview:;
- (void)_updatePointerStyleForRegion:update:animator:;
- (void)driver:didIssueUpdate:;
- (void)setDrivers:;
- (id)defaultRegion;
- (id)delegate;
- (void)setEnabled:;
- (void).cxx_destruct;
- (void)_applyPointerStyle:forRegion:animator:;
- (id)_notifyDelegate_willExitRegion:;
- (void)driver:willAttachHoverGestureRecognizer:toView:;
- (id)initWithDelegate:;
- (void)_runAlongsideAnimator:;
- (void)_pointerDidEnterRegion:update:;
- (void)_handlePresentationNotification:;
- (void)_pointerDidExit;
- (void)_updateCurrentRegionIfNecessary:update:;
- (void)_queryDelegateForRegionWithRequest:completion:forceSynchronous:;
- (void)_pointerDidExitRegion:willEnterNewRegion:;
- (void)invalidate;
- (BOOL)_delegateProvidesRegionsAsynchronously;
- (BOOL)_regionContainsCurrentHoverLocation:;
- (id)_notifyDelegate_willEnterRegion:;
- (void)setCurrentModifiers:;
- (BOOL)isEnabled;
+ (Class)_driverClass;
+ (Class)_pencilDriverClass;
@end
