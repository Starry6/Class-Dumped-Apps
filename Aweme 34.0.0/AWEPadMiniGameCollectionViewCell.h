@interface AWEPadMiniGameCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEPadLeftSideBarMiniGameItemDataModel model;
@property (nonatomic) UILabel gameTextLabel;
@property (nonatomic) UIImageView gameImageView;
- (void)configCellWithModel:withThemeType:;
- (id)gameImageView;
- (id)gameTextLabel;
- (void)setGameImageView:;
- (void)setGameTextLabel:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (void)setupUI;
@end
