@interface AVContentOverlayView : AVTouchIgnoringView
@property (nonatomic) <AVContentOverlayViewDelegate> delegate;
- (void)_didRemoveSubview:;
- (void)setDelegate:;
- (void)didAddSubview:;
- (id)delegate;
- (void).cxx_destruct;
@end
