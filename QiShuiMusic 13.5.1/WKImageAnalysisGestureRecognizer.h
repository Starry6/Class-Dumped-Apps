@interface WKImageAnalysisGestureRecognizer : UILongPressGestureRecognizer
- (void)touchesBegan:withEvent:;
- (void)setState:;
- (void)beginAfterExceedingForceThresholdIfNeeded:;
- (void).cxx_destruct;
- (id)initWithImageAnalysisGestureDelegate:;
- (void)touchesMoved:withEvent:;
@end
