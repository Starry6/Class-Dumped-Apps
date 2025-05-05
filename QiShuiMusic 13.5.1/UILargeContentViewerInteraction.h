@interface UILargeContentViewerInteraction : NSObject
@property (nonatomic) <UILargeContentViewerInteractionDelegate> delegate;
@property (nonatomic) UIGestureRecognizer gestureRecognizerForExclusionRelationship;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIView view;
- (id)init;
- (id)_itemAtPoint:;
- (id)_accessibilityHUDGestureManager:HUDItemForPoint:;
- (void)_accessibilityHUDGestureManager:gestureLiftedAtPoint:;
- (id)gestureRecognizerForExclusionRelationship;
- (BOOL)_accessibilityHUDGestureManager:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)didMoveToView:;
- (void)willMoveToView:;
- (id)view;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (id)_viewControllerForAccessibilityHUDGestureManager:;
+ (BOOL)isEnabled;
@end
