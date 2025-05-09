@interface AWENewVideoCoverPreviewCell : UICollectionViewCell
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel waterfallTitleLabel;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIImageView favoriteImageView;
@property (nonatomic) UIImageView defaultView;
@property (nonatomic) AWEDetailCellTagLabel topLeftTagLabel;
@property (nonatomic) UIView bgMaskView;
@property (nonatomic) BOOL showCreateDate;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)configWithModel:;
- (void)setDefaultView:;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (id)topLeftTagLabel;
- (void)setTopLeftTagLabel:;
- (void)updateCoverWithCompletion:;
- (id)waterfallTitleLabel;
- (id)favoriteImageView;
- (void)updateCoverRadius;
- (BOOL)showCreateDate;
- (void)setShowCreateDate:;
- (void)setWaterfallTitleLabel:;
- (void)setFavoriteImageView:;
- (void)setModel:;
- (void)setAvatarView:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)avatarView;
- (id)model;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setNameLabel:;
- (void)setupUI;
- (id)defaultView;
@end
