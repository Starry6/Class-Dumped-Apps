@interface AWEFeedLiveTabStickerCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) MASConstraint enableIconSubtitleConstraint;
@property (nonatomic) MASConstraint disableIconSubtitleConstraint;
@property (nonatomic) @? stickerViewDidClicked;
- (void)configWithCellModel:;
- (void)setEnableIconSubtitleConstraint:;
- (void)setDisableIconSubtitleConstraint:;
- (id)enableIconSubtitleConstraint;
- (id)disableIconSubtitleConstraint;
- (void)stickerViewDidClickedAction;
- (id)stickerViewDidClicked;
- (void)setStickerViewDidClicked:;
- (id)initWithFrame:;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)setIconImageView:;
- (void)setupUI;
+ (id)reuseIdentifier;
@end
