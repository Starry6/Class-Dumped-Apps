@interface AWEClassroomImpl.ClassroomAudioControlViewPart : UIView
- (void)handleSpeedButtonWithSender:;
- (void)handleFastForwardButtonWithSender:;
- (void)handleFastBackwardButtonWithSender:;
- (void)handleLoopButtonWithSender:;
- (void)sliderTouchDidBegan;
- (void)sliderValueDidChange;
- (void)sliderValueDidEnd;
- (void)didSingleTapControlView;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
