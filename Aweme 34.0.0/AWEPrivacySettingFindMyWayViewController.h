@interface AWEPrivacySettingFindMyWayViewController : AWESettingBaseViewController
@property (nonatomic) NSString enterFrom;
@property (nonatomic) UIView indicatorLineView;
@property (nonatomic) BOOL hasAppear;
- (void)setEnterFrom:;
- (BOOL)configWithRouterParamDict:;
- (id)enterFrom;
- (id)indicatorLineView;
- (void)setIndicatorLineView:;
- (BOOL)hasAppear;
- (void)setHasAppear:;
- (id)viewModel;
- (void)viewDidLoad;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
@end
