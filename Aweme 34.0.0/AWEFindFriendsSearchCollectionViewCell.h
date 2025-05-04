@interface AWEFindFriendsSearchCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEUserRecommendSearchView searchView;
@property (nonatomic) NSString searchText;
@property (nonatomic) <AWEFindFriendsSearchDelegate> delegate;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setSearchText:;
- (void)setDelegate:;
- (id)searchText;
- (id)searchView;
- (void)setSearchView:;
@end
