@interface AWEInviteRecommendSearchTableViewCell : UITableViewCell
@property (nonatomic) AWEUserRecommendSearchView searchView;
@property (nonatomic) <AWEFindFriendsSearchDelegate> delegate;
- (void)hideScanButton;
- (id)delegate;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)searchView;
- (void)setSearchView:;
+ (id)identifier;
+ (double)suggestedHeight;
@end
