@interface AWEGuestHomeViewModel : AWEBaseListViewModel
@property (nonatomic) AWEGuestHomePageContext pageContext;
@property (nonatomic) AWEGuestHomeHeaderSectionViewModel headerSectionVM;
@property (nonatomic) AWETabContainerSectionViewModel tabSectionVM;
- (void)setupViewModel;
- (id)lightCoverColor;
- (id)darkCoverColor;
- (id)lightCoverURL;
- (id)darkCoverURL;
- (id)headerSectionVM;
- (id)tabSectionVM;
- (void)setupTabSectionVM;
- (id)coverSetting;
- (id)fallBackCoverSetting;
- (void)setHeaderSectionVM:;
- (void)setTabSectionVM:;
- (void).cxx_destruct;
- (void)setPageContext:;
- (id)pageContext;
@end
