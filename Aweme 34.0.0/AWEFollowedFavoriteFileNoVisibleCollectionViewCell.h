@interface AWEFollowedFavoriteFileNoVisibleCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) AWEFavoriteFolderBaseInfoModel collectionModel;
- (void)configWithModel:;
- (void)setCollectionModel:;
- (id)collectionModel;
- (void)goToFavoriteVideoViewController;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
+ (id)identifier;
@end
