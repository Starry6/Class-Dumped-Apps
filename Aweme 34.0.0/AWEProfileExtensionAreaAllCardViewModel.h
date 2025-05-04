@interface AWEProfileExtensionAreaAllCardViewModel : AWEBaseListViewModel
@property (nonatomic) AWETabContainerSectionViewModel tabBarViewModel;
@property (nonatomic) NSMutableArray viewControllers;
- (id)tabBarViewModel;
- (void)setTabBarViewModel:;
- (void)updateWithCards:paramDict:;
- (id)viewControllers;
- (void)setViewControllers:;
- (void).cxx_destruct;
@end
