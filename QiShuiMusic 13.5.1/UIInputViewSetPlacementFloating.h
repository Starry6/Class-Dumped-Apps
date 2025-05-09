@interface UIInputViewSetPlacementFloating : UIInputViewSetPlacementUndocked
@property (nonatomic) double floatingWidth;
@property (nonatomic) UIResponder responderToFollow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isFloating;
- (void)dealloc;
- (BOOL)showsEditItems;
- (void)setDelegate:;
- (id)assistantView;
- (id)initWithCoder:;
- (BOOL)accessoryViewWillAppear;
- (void)encodeWithCoder:;
- (Class)applicatorClassForKeyboard:;
- (void).cxx_destruct;
- (double)floatingWidth;
- (BOOL)isFloatingAssistantView;
- (void)_geometryChanged:forAncestor:;
- (BOOL)isEqual:;
- (id)horizontalConstraintForInputViewSet:hostView:containerView:;
- (id)widthConstraintForInputViewSet:hostView:containerView:;
- (id)applicatorInfoForOwner:;
- (void)checkSizeForOwner:;
- (id)subPlacements;
- (unsigned long long)indexForPurpose:;
- (id)expiringPlacement;
- (id)adjustBoundsForNotificationsWithOwner:;
- (void)setSubPlacements:;
- (void)updateChromeBuffer;
- (id)currentResponderView;
- (id)responderToFollow;
- (void)setResponderToFollow:;
- (void)setFloatingWidth:;
+ (BOOL)supportsSecureCoding;
+ (id)frameAtOffset:keyboardSize:screenSize:;
+ (id)infoWithPoint:forOwner:;
+ (id)placementWithUndockedOffset:chromeBuffer:floatingWidth:;
@end
