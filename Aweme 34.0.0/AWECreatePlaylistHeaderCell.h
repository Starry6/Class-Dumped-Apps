@interface AWECreatePlaylistHeaderCell : UITableViewCell
@property (nonatomic) AWEPlaylistInfoModel model;
@property (nonatomic) AWEPlaylistDetailHeaderView headerView;
@property (nonatomic) <AWECreatePlaylistHeaderCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_updateUI;
- (void)configureHeaderActions;
- (void)updateConfigModel:;
- (void)setModel:;
- (id)delegate;
- (id)headerView;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setHeaderView:;
- (void)setupUI;
@end
