@interface AWECloudAlbumDetailNavigationLeftView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView hintImageView;
@property (nonatomic) UILabel countLabel;
@property (nonatomic) UIButton selectAllButton;
@property (nonatomic) <AWECloudAlbumDetailNavigationLeftViewDelegate> delegate;
- (id)selectAllButton;
- (void)updateWithState:selectable:;
- (void)updateWithDoneCount:totalCount:;
- (void)updateLeftViewStateWithSelectable:hasMore:isSelectAll:;
- (id)hintImageView;
- (void)selectAllAction:;
- (id)delegate;
- (id)initWithFrame:;
- (void)setup;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (id)countLabel;
- (void)updateWithTitle:;
@end
