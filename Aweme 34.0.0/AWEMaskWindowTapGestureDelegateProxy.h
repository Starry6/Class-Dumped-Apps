@interface AWEMaskWindowTapGestureDelegateProxy : NSObject
@property (nonatomic) AWEMaskWindow maskWindow;
@property (nonatomic) <AWEMaskWindowTapGestureDelegate> windowTapDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)maskWindow;
- (void)setMaskWindow:;
- (void)windowTapGestureTriggered:;
- (BOOL)enableDelegate;
- (id)windowTapDelegate;
- (void)setWindowTapDelegate:;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
@end
