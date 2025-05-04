@interface AWEFansListSearchBarSectionController : AWEBaseListSectionController
@property (nonatomic) NSString searchText;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)viewControllerDidDisappear:;
- (id)separatorColor;
- (id)sectionBackgroundColor;
- (Class)cellClass;
- (void).cxx_destruct;
- (void)setSearchText:;
- (id)searchText;
@end
