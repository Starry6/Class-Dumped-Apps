@interface AWEFansListFilteredUserListSectionViewModel : AWEFansListUserListSectionViewModel
@property (nonatomic) AWEFansListFilteredDataController filterDataController;
@property (nonatomic) NSMutableArray filterUsers;
- (void)setupViewModel;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)setFilterUsers:;
- (id)filterUsers;
- (id)filterDataController;
- (id)deleteUsersWhoAreBeingRemoved:;
- (id)baseDataController;
- (void)setFilterDataController:;
- (void).cxx_destruct;
@end
