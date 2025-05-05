@interface QLVideoScrubberView : UIView
@property (nonatomic) BOOL touchGestureIsActive;
@property (nonatomic) BOOL userInteractingWithScrubber;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) PHVideoScrubberView photosScrubber;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutSubviews;
- (id)scrollView;
- (void).cxx_destruct;
- (void)didBeginTouchingVideoScrubberView:;
- (void)didEndTouchingVideoScrubberView:;
- (void)videoScrubberView:willBeginDraggingInScrollView:;
- (void)videoScrubberView:didEndDraggingInScrollView:;
- (void)videoScrubberView:willBeginDeceleratingInScrollView:;
- (void)videoScrubberView:didEndDeceleratingInScrollView:;
- (id)photosScrubber;
- (void)_updateUserInteractingWithScrubberIfNeeded;
- (BOOL)isUserInteractingWithScrubber;
- (void)setUserInteractingWithScrubber:;
- (BOOL)touchGestureIsActive;
- (void)setTouchGestureIsActive:;
@end
