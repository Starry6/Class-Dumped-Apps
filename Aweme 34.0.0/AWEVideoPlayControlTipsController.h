@interface AWEVideoPlayControlTipsController : AWEVideoPlayControlBaseController
@property (nonatomic) UIView tipsView;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) NSTimer timer;
- (void)setHide:;
- (id)tipsLabel;
- (id)tipsView;
- (void)setTipsView:;
- (void)setTipsLabel:;
- (void)bindEvent;
- (void)updateTipsViewLayOut;
- (void)showContinuePlayReminderView:withCompletion:;
- (void)showMovieTicketPaymentInfoWithModel:;
- (void)showReminderView:duration:withCompletion:;
- (void)setTimer:;
- (void)dealloc;
- (id)timer;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
@end
