@interface AWEPlayInteractionUnreadMentionController : AWEPlayInteractionNewBaseController
@property (nonatomic) BOOL didReportForPlayTimeEvent;
- (void)reportValidStateIfNeeded;
- (BOOL)didReportForPlayTimeEvent;
- (void)setDidReportForPlayTimeEvent:;
- (void)reportInvalidState;
- (void)reportInValidStateIfNeeded;
- (BOOL)shouldReportValidStateWithModel:;
- (BOOL)shouldReportInValidStateWithModel:;
- (void)viewDidLoad;
- (void)reset;
- (void)didEndDisplaying;
@end
