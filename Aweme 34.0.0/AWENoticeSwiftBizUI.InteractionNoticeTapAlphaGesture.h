@interface AWENoticeSwiftBizUI.InteractionNoticeTapAlphaGesture : UIGestureRecognizer
- (id)initWithTarget:action:;
- (void)touchesCancelled:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesBegan:withEvent:;
- (void)reset;
- (void)touchesMoved:withEvent:;
@end
