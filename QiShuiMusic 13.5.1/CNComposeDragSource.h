@interface CNComposeDragSource : NSObject
@property (nonatomic) <CNComposeDragSourceDelegate> delegate;
@property (nonatomic) UIDragInteraction dragInteraction;
@property (nonatomic) UIView sourceView;
@property (nonatomic) BOOL allowsDragOverridingMasterSwitch;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)dragInteraction:sessionAllowsMoveOperation:;
- (long long)_dragInteraction:dataOwnerForSession:;
- (id)initWithView:delegate:;
- (id)sourceView;
- (void)setDelegate:;
- (BOOL)dragInteraction:sessionIsRestrictedToDraggingApplication:;
- (id)dragInteraction;
- (void)dragInteraction:session:willEndWithOperation:;
- (id)dragInteraction:previewForLiftingItem:session:;
- (id)delegate;
- (id)dragInteraction:itemsForBeginningSession:;
- (void).cxx_destruct;
- (void)setDragInteraction:;
- (BOOL)allowsDragOverridingMasterSwitch;
- (void)setAllowsDragOverridingMasterSwitch:;
@end
