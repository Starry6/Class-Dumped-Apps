@interface AWEAwemeSearchCommonDetailController : AWEAwemeNewDetailBaseController
@property (nonatomic) BOOL hasShowedVideoNote;
- (void)configCell:atIndexPath:tableView:;
- (void)setHasShowedVideoNote:;
- (void)showCommentPanelFromSearch;
- (void)openAiToTextPanelInflow;
- (BOOL)openVideoSummaryInflow;
- (BOOL)hasShowedVideoNote;
- (BOOL)enableConfigCommentSearchCardTrackParams;
- (void)modifySearchCommentTrackParamsWithModel:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:;
- (id)currentInteractionController;
- (id)currentModel;
@end
