@interface AWEAwemeSearchInnerVideoStatisticsController : AWEAwemeNewDetailBaseController
@property (nonatomic) BOOL shouldReportClickFirstFrameEvent;
- (void)onScrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (void)configCell:atIndexPath:tableView:;
- (void)setShouldReportClickFirstFrameEvent:;
- (void)videoStartPlay;
- (void)trackClickFirstFrameEvent;
- (void)trackSlideFirstFrameEvent;
- (BOOL)shouldReportClickFirstFrameEvent;
- (BOOL)shouldAddSearchParamsInShareVideoTrack;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
@end
