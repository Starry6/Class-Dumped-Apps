@interface UIAccessibilityHUDGestureManager : NSObject
@property (nonatomic) UIGestureRecognizer _recognizer;
@property (nonatomic) UIView view;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_recognizer;
- (void)dealloc;
- (id)initWithView:delegate:;
- (id)_subscribedConcurrentGestureRecognizers;
- (void)_concurrentGestureRecognizerFired:;
- (void)_clearButtonItemGestureSubscriptions;
- (void)_dismissAccessibilityHUD;
- (void)_gestureRecognizerChanged:;
- (id)_bestViewControllerForView;
- (id)view;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)_setRecognizersEnabled:;
- (void)_showAccessibilityHUDItem:;
- (BOOL)_gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)_backOff;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)_openGate;
- (void)_didToggleLargeContentViewer:;
@end
