@interface IESECStoreSearchHotHeader : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView refreshIconView;
@property (nonatomic) BOOL showRefreshButton;
@property (nonatomic) @? refreshAction;
- (id)refreshIconView;
- (void)didTapRefreshButton;
- (id)refreshAction;
- (void)setRefreshAction:;
- (void)setRefreshIconView:;
- (void)setShowRefreshButton:;
- (BOOL)showRefreshButton;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupViews;
@end
