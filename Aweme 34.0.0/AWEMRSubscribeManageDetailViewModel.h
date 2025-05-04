@interface AWEMRSubscribeManageDetailViewModel : AWEMRSubscribeManageBaseViewModel
@property (nonatomic) AWEMRSubscribeManageDetailDataContext dataContext;
@property (nonatomic) AWEMRSubscribeManageDetailTracker tracker;
@property (nonatomic) AWEMRSubscribeManageSwitchSectionViewModel subscribeSectionVM;
@property (nonatomic) AWEMRSubscribeManageCategorySectionViewModel categorySectionVM;
@property (nonatomic) AWEMRSubscribeManageDisturbSectionViewModel disturbSectionVM;
- (void)fetchListData;
- (void)setupViewModel;
- (id)dataContext;
- (void)setDataContext:;
- (id)initWithServiceAccountModel:enterFrom:;
- (void)p_setupSectionViewModels;
- (void)setSubscribeSectionVM:;
- (void)setCategorySectionVM:;
- (void)setDisturbSectionVM:;
- (void)p_updateSectionViewModels;
- (id)subscribeSectionVM;
- (id)categorySectionVM;
- (id)disturbSectionVM;
- (id)tracker;
- (void)setTracker:;
- (void).cxx_destruct;
@end
