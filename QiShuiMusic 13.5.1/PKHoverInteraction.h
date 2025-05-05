@interface PKHoverInteraction : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) PKHoverController hoverController;
@property (nonatomic) <PKHoverInteractionDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didMoveToView:;
- (void)willMoveToView:;
- (id)view;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)setView:;
- (void)hoverController:holdGestureMeanInputPoint:latestInputPoint:;
- (void)hoverControllerHoldGestureEnded:;
- (id)hoverController;
- (void)setHoverController:;
@end
