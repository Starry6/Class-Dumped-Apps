@interface UIKBViewForResponderForwarding : UIView
@property (nonatomic) UIView responderForForwarding;
- (void)touchesBegan:withEvent:;
- (BOOL)pointInside:withEvent:;
- (void).cxx_destruct;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
- (id)responderForForwarding;
- (void)setResponderForForwarding:;
@end
