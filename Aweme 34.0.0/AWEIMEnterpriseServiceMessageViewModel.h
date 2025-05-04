@interface AWEIMEnterpriseServiceMessageViewModel : AWEIMMessageViewModel
@property (nonatomic) NSDictionary routerParams;
@property (nonatomic) AWEEnterpriseIMMessageCardBaseViewModel enterpriseCardViewModel;
@property (nonatomic) @? didUpdateSyncExt;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)routerParams;
- (void)setRouterParams:;
- (void)setupWithMessage:;
- (void)configViewModelWithRouterParams:conversation:;
- (id)enterpriseCardViewModel;
- (void)__addKVOController;
- (void)setDidUpdateSyncExt:;
- (void)p_configEnterpriseCardViewModel;
- (void)p_initEnterpriseViewModel;
- (id)didUpdateSyncExt;
- (void)setEnterpriseCardViewModel:;
- (void)p_configCommonEnterpriseCardViewModel;
- (void)p_configLynxEnterpriseCardViewModel;
- (id)p_lynxSourceURL;
- (id)p_lynxInitialProperties;
- (id)p_lynxSmartCardSourceURL;
- (id)p_lynxCompanyCollectInfoSourceURL;
- (id)p_lynxSmartCardInitialProperties;
- (id)p_lynxCompanyCollectInfoInitialProperties;
- (void).cxx_destruct;
@end
