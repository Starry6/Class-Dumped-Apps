@interface AWEPlaylistAnchorDetailHeaderCell : UITableViewCell
@property (nonatomic) AWEPlaylistInfoModel model;
@property (nonatomic) AWEPlaylistAnchorDetailHeaderView headerView;
@property (nonatomic) <AWEPlaylistAnchorDetailHeaderCellDelegate> delegate;
- (void)p_setup;
- (void)p_updateUI;
- (void)updateConfigModel:;
- (void)updateStarCount:;
- (BOOL)p_canShowDesc;
- (BOOL)canShowCreateEntry;
- (double)heightWithDescription:;
- (BOOL)p_canPassRestriction;
- (void)setModel:;
- (id)delegate;
- (id)headerView;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setHeaderView:;
- (id)playlistDescription;
@end
