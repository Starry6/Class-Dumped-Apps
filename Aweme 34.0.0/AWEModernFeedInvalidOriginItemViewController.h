@interface AWEModernFeedInvalidOriginItemViewController : AWEModernFeedBaseCellController
@property (nonatomic) UILabel tipLabel;
- (BOOL)alertIfNotValid;
- (void)didBecomeActiveForReason:;
- (void)didResignActiveForReason:;
- (void)didEndShowing;
- (void)viewDidLoad;
- (id)contentView;
- (void).cxx_destruct;
- (void)setTipLabel:;
- (id)tipLabel;
- (void)updateWithModel:;
+ (void)__awe__codeRunnerRun_26;
@end
