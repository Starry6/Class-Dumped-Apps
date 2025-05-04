@interface AWEIMTouchReportGestureRecognizer : UIGestureRecognizer
@property (nonatomic) <AWEIMTouchReportGestureRecognizerDelegate> touchDelegate;
- (id)touchDelegate;
- (void)touchesCancelled:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)setTouchDelegate:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
@end
