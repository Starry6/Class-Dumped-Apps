@interface AWEVideoEditStickerBottomBarCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BOOL userSelected;
@property (nonatomic) BOOL showTitle;
- (BOOL)userSelected;
- (void)setUserSelected:;
- (void)updateWithIconURLs:title:;
- (void)handleTouchBegan;
- (void)handleTouchFinished;
- (BOOL)showTitle;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setShowTitle:;
- (id)titleLabel;
+ (id)cellSizeForTitle:;
+ (id)identifier;
+ (id)titleFont;
@end
