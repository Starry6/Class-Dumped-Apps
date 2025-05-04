@interface AWEMVChannelSnackBarController : AWEMVChannelBaseController
@property (nonatomic) BOOL hasTriggerSnackBar;
- (void)setupBinding;
- (id)mvPageContext;
- (void)judgmentCondition;
- (void)triggerShowSnackBarWithReason:;
- (void)printStayTimeDic:;
- (BOOL)hasTriggerSnackBar;
- (void)setHasTriggerSnackBar:;
- (void)viewDidLoad;
- (void)viewDidAppear;
@end
