@interface AWEPrivacySettingRelationAndAccountViewController : AWESettingBaseViewController
@property (nonatomic) UIView indicatorLineView;
@property (nonatomic) AWEHalfScreenBaseViewController halfVC;
@property (nonatomic) BOOL isRequestingOnAir;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsRequestingOnAir:;
- (BOOL)isRequestingOnAir;
- (id)indicatorLineView;
- (void)setIndicatorLineView:;
- (void)setHalfVC:;
- (id)halfVC;
- (void)configWithDataController:;
- (double)getRelationAndAccountViewHeight;
- (double)originalViewHeight;
- (id)init;
- (id)viewModel;
- (void)viewDidLoad;
- (void)dismiss;
- (void)viewWillAppear:;
- (void).cxx_destruct;
+ (void)showRelationAndAccountAlertWithEnterFrom:;
@end
