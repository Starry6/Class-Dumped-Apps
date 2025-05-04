@interface AWEMVSnackBarController : AWEDCFeedBaseController
@property (nonatomic) BOOL hasTriggerSnackBar;
- (void)containerViewDidAppear:;
- (void)setupBinding;
- (id)mvPageContext;
- (void)judgmentCondition;
- (void)triggerShowSnackBarWithReason:;
- (void)printStayTimeDic:;
- (BOOL)hasTriggerSnackBar;
- (void)setHasTriggerSnackBar:;
- (void)containerViewDidLoad;
@end
