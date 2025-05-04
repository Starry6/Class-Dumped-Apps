@interface AWEFollowListSearchBarViewModel : AWEBaseListSectionViewModel
@property (nonatomic) BOOL isKeyBoardShown;
@property (nonatomic) BOOL searching;
@property (nonatomic) NSString searchText;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (BOOL)isKeyBoardShown;
- (void)setIsKeyBoardShown:;
- (void)followingListKeyboardDidShowNotification:;
- (void)followingListKeyboardDidHideNotification:;
- (void)dealloc;
- (void)addObserver;
- (void).cxx_destruct;
- (void)setSearchText:;
- (id)searchText;
- (BOOL)searching;
- (void)setSearching:;
@end
