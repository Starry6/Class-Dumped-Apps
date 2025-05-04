@interface AWEAwemeDetailSurveySelectController : AWEAwemeNewDetailBaseController
@property (nonatomic) AWEAwemeDetailSurveySelectBlockAlert surveySelectBlockAlert;
@property (nonatomic) NSString quitMethod;
- (void)viewDidLoadAfterTableviewSetup;
- (void)setQuitMethod:;
- (id)quitMethod;
- (void)onClickToCloseSurveyCardNotification:;
- (void)trackQuestionnaireQuit:;
- (void)removeBlockAlert;
- (void)addBlockAlert;
- (id)surveySelectBlockAlert;
- (void)setSurveySelectBlockAlert:;
- (void)dealloc;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void).cxx_destruct;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
@end
