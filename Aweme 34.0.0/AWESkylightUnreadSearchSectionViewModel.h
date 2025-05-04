@interface AWESkylightUnreadSearchSectionViewModel : AWECommonUserListBaseSectionViewModel
@property (nonatomic) NSObject<AWEContactLocalSearchManagerProtocol> searchManager;
@property (nonatomic) NSString searchText;
@property (nonatomic) BOOL searching;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishSetRemarkWithUser:;
- (void)setupViewModel;
- (id)enterFrom;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)syncModelFollowStatus:status:;
- (void)dealloc;
- (long long)type;
- (void).cxx_destruct;
- (void)setSearchText:;
- (id)searchText;
- (id)previousPage;
- (BOOL)searching;
- (void)setSearching:;
- (id)searchManager;
- (void)setSearchManager:;
@end
