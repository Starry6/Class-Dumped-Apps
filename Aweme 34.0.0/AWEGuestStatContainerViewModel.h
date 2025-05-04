@interface AWEGuestStatContainerViewModel : AWEBaseListViewModel
@property (nonatomic) AWETabContainerSectionViewModel tabSectionVM;
@property (nonatomic) NSString landingTabID;
@property (nonatomic) BOOL isTabReady;
- (void)configWithRouterParamDict:;
- (void)setupViewModel;
- (unsigned long long)landingIndex;
- (void)setLandingTabID:;
- (id)landingTabID;
- (id)tabSectionVM;
- (void)setupTabSectionVM;
- (void)setTabSectionVM:;
- (void)setIsTabReady:;
- (BOOL)isTabReady;
- (void).cxx_destruct;
@end
