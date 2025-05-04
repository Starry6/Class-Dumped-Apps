@interface AWEBatManInAppNotificationView : DUXInAppNotificationView
@property (nonatomic) NSTimer dismissTimer;
- (void)showOnView:;
- (void)animateWithBezierPointOne:pointTwo:pointThree:pointFour:andDuration:andAnimations:andCompletion:;
- (void)startDismissTimer;
- (void)timerDismiss:;
- (void).cxx_destruct;
- (id)dismissTimer;
- (void)setDismissTimer:;
@end
