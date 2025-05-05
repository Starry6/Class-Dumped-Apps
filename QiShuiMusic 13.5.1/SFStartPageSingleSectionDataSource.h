@interface SFStartPageSingleSectionDataSource : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sectionsForStartPageCollectionViewController:;
- (void)startPageCollectionViewController:toggleSectionExpanded:;
- (void)reloadDataAnimatingDifferences:;
- (BOOL)startPageCollectionViewController:isSectionExpanded:;
- (void)startPageCollectionViewControllerWillUpdateNavigationBar:;
- (void)reloadNavigationItemAnimated:;
- (void).cxx_destruct;
- (long long)customizationControlPolicyForStartPageCollectionViewController:;
- (id)initWithReloadHandler:navigationItemHandler:;
- (void)connectToViewController:;
- (void)_reloadSection;
- (void)startPageCollectionViewController:editSection:;
@end
