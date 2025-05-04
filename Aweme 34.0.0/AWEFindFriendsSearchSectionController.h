@interface AWEFindFriendsSearchSectionController : AWEBaseListSectionController
@property (nonatomic) NSString searchText;
@property (nonatomic) <AWEFindFriendsSearchDelegate> delegate;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)delegate;
- (Class)cellClass;
- (BOOL)showSeparator;
- (void).cxx_destruct;
- (void)setSearchText:;
- (void)setDelegate:;
- (id)searchText;
@end
