@interface AWECommentPanelContainerSwiftImpl.CommentViewControllerTrackerModel : NSObject
@property (nonatomic) NSDictionary bizLogExtraDict;
@property (nonatomic) AWECommentViewedCommentsManager viewedCommentsManager;
@property (nonatomic) BOOL isFromCommentsFromMePage;
@property (nonatomic) BOOL enableControlCloseCommentDuration;
@property (nonatomic) double closeCommentDuration;
@property (nonatomic) BOOL enableControlCloseCommentDurationMidline;
@property (nonatomic) double closeCommentDurationMidline;
- (id)bizLogExtraDict;
- (void)setBizLogExtraDict:;
- (id)viewedCommentsManager;
- (void)setViewedCommentsManager:;
- (BOOL)isFromCommentsFromMePage;
- (void)setIsFromCommentsFromMePage:;
- (BOOL)enableControlCloseCommentDuration;
- (void)setEnableControlCloseCommentDuration:;
- (double)closeCommentDuration;
- (void)setCloseCommentDuration:;
- (void)startTimerForCloseCommentDuration;
- (void)pauseTimerForCloseCommentDuration;
- (double)stopTimerForCloseCommentDuration;
- (BOOL)enableControlCloseCommentDurationMidline;
- (void)setEnableControlCloseCommentDurationMidline:;
- (double)closeCommentDurationMidline;
- (void)setCloseCommentDurationMidline:;
- (void)startTimerForCloseCommentDurationMidline;
- (void)pauseTimerForCloseCommentDurationMidline;
- (double)stopTimerForCloseCommentDurationMidline;
- (id)init;
- (void).cxx_destruct;
@end
