@interface AWEMaskWindowLongPressGestureDelegateProxy : NSObject
@property (nonatomic) AWEMaskWindow maskWindow;
@property (nonatomic) <AWEMaskWindowLongPressGestureDelegate> longPressDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)maskWindow;
- (void)setMaskWindow:;
- (void)windowLongPressGestureTriggered:;
- (BOOL)enableDelegate;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (id)longPressDelegate;
- (void)setLongPressDelegate:;
@end
