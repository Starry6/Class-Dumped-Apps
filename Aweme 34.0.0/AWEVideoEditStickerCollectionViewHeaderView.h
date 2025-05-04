@interface AWEVideoEditStickerCollectionViewHeaderView : UICollectionReusableView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) ACCStickerPannelUIConfig uiConfig;
- (id)uiConfig;
- (void)setUiConfig:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupTitleLabel;
- (void)updateWithTitle:;
+ (id)identifier;
@end
