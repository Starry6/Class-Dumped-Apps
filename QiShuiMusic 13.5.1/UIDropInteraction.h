@interface UIDropInteraction : NSObject
@property (nonatomic) <_UIDropInteractionOwning> owner;
@property (nonatomic) UIDropInteractionContextImpl context;
@property (nonatomic) UIPasteConfiguration pasteConfiguration;
@property (nonatomic) <UIDropInteractionEffect> interactionEffect;
@property (nonatomic) BOOL wantsDefaultVisualBehavior;
@property (nonatomic) <UIDropInteractionDelegate> delegate;
@property (nonatomic) BOOL allowsSimultaneousDropSessions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIView view;
- (void)willMoveToOwner:;
- (BOOL)_allowsSimultaneousDragWithEvent:;
- (id)_setDownAnimation:prepareForSetDownOfDragItem:visibleDroppedItem:;
- (id)_setDownAnimation:customSpringAnimationBehaviorForSetDownOfDragItem:;
- (void)_dropSessionEntered:withSessionDestination:;
- (void)_prepareItemsInSessionForDrop:;
- (BOOL)_wantsDefaultVisualBehavior;
- (void)setAllowsSimultaneousDropSessions:;
- (void)_setWantsDefaultVisualBehavior:;
- (BOOL)allowsSimultaneousDropSessions;
- (BOOL)_setDownAnimation:shouldDelaySetDownOfDragItem:completion:;
- (id)_pasteConfiguration;
- (id)_initWithPasteConfiguration:;
- (unsigned long long)_validateDragOperation:forSelector:delegate:dropSession:onSession:forbidden:;
- (id)_dynamicGestureRecognizersForEvent:;
- (BOOL)_gestureRecognizer:shouldReceiveDragEvent:;
- (id)context;
- (void)setOwner:;
- (id)owner;
- (id)interactionEffect;
- (void)didMoveToView:;
- (void)willMoveToView:;
- (void)_gestureRecognizerFailed:;
- (void)_dragDestinationGestureStateChanged:;
- (id)view;
- (void)_setDownAnimation:willAnimateSetDownOfDragItem:withAnimator:;
- (void)setInteractionEffect:;
- (BOOL)_canHandleDragEvent:;
- (id)delegate;
- (unsigned long long)_setLastDragOperation:forbidden:precise:prefersFullSizePreview:preferredBadgeStyle:onSession:;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)didMoveToOwner:;
- (id)_windowForSetDownOfDragItem:;
- (void)setContext:;
- (void)_sendSessionDidEnd:;
- (BOOL)isActive;
@end
