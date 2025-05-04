@interface AWEEmojiStoreSearchTableViewCell : UITableViewCell
@property (nonatomic) AWEIMCommonSearchView searchView;
@property (nonatomic) <AWEEmojiStoreSearchTableViewCellDelegate> delegate;
- (void)didClickSearchBar;
- (id)delegate;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
- (void)setupLayout;
- (id)searchView;
- (void)setSearchView:;
@end
