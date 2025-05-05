@interface VKCTextSelectionLongPressDelegateHandler : NSObject
@property (nonatomic) UIGestureRecognizer gestureRecognizer;
@property (nonatomic) <VKCTextSelectionLongPressHandlerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setGestureRecognizer:;
- (void)setDelegate:;
- (id)gestureRecognizer;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
@end
