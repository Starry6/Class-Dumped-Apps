@interface UITextTouchObservingInteraction : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) UILongPressGestureRecognizer longPressGesture;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didMoveToView:;
- (void)willMoveToView:;
- (void)_createGestureRecognizersIfNecessary;
- (id)view;
- (void).cxx_destruct;
- (void)_addGestureRecognizers;
- (id)longPressGesture;
- (void)setView:;
- (void)_removeGestureRecognizers;
- (void)longPressObserved:;
- (void)setLongPressGesture:;
@end
