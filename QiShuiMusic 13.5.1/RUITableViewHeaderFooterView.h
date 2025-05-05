@interface RUITableViewHeaderFooterView : UITableViewHeaderFooterView
@property (nonatomic) UIView<RUIHeader> headerView;
@property (nonatomic) UIView<RemoteUITableFooter> footerView;
@property (nonatomic) UITableView tableView;
- (void)setFooterView:;
- (void)setHeaderView:;
- (void)layoutSubviews;
- (id)headerView;
- (id)footerView;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (BOOL)_useLegacyLayout;
- (void)removeEmbeddedView;
- (void)embedHeaderView:;
- (void)embedFooterView:;
- (void)_embedContentView:;
- (id)insetsForHeaderFooter;
@end
