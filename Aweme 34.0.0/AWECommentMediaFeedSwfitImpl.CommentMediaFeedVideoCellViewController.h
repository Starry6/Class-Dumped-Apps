@interface AWECommentMediaFeedSwfitImpl.CommentMediaFeedVideoCellViewController : AWECommentMediaFeedSwfitImpl.CommentMediaFeedCellViewController
- (double)customTimerPeriodic:;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (void)playerUpdatePlayTime:canPlayTime:totalTime:;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (void)actionForSingleTapWithGes:;
- (void)hiddenSliderAfterSeek;
- (void)handleLongPressGestureWithGes:;
- (void)handlePanGestureWithPan:;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
