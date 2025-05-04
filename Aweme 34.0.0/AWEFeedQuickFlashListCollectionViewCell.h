@interface AWEFeedQuickFlashListCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView coverView;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) BOOL showItemFlashTag;
@property (nonatomic) BOOL showItemAvatarTag;
- (void)configWithModel:;
- (id)tagLabel;
- (void)setTagLabel:;
- (BOOL)showItemFlashTag;
- (void)setShowItemFlashTag:;
- (void)setShowItemAvatarTag:;
- (void)configTagLabel:;
- (BOOL)showItemAvatarTag;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (id)iconView;
- (id)avatarView;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)coverView;
- (void)setCoverView:;
- (void)setupUI;
+ (id)identifier;
@end
