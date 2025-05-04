@interface AWEFansListSearchSectionViewModel : AWEFansUserListBaseSectionViewModel
@property (nonatomic) NSObject<AWEContactLocalSearchManagerProtocol> searchManager;
@property (nonatomic) NSString oldSearchText;
@property (nonatomic) NSString searchText;
@property (nonatomic) BOOL searching;
@property (nonatomic) NSArray fansList;
- (void)setupViewModel;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (id)fansList;
- (void)setFansList:;
- (id)oldSearchText;
- (void)setOldSearchText:;
- (void).cxx_destruct;
- (void)setSearchText:;
- (id)searchText;
- (BOOL)searching;
- (void)setSearching:;
- (id)searchManager;
- (void)setSearchManager:;
@end
