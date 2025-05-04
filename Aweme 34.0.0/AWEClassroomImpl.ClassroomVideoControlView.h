@interface AWEClassroomImpl.ClassroomVideoControlView : UIView
- (void)volumeChangedWithNotification:;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (void)didSingleTapControlView;
- (void)hideMaskView;
- (void)hideLockView;
- (void)lockButtonClicked:;
- (void)noteButtonClicked:;
- (void)didDoubleTapControlView;
- (void)handleLongPressWithSender:;
- (void)handlePanWithSender:;
- (void)dealloc;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end
