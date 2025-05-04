@interface AWELiveSettingViewController : AWESettingBaseViewController
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString previousPage;
@property (nonatomic) Q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (BOOL)configWithRouterParamDict:;
- (id)enterFrom;
- (id)viewModel;
- (void)viewDidLoad;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:;
@end
