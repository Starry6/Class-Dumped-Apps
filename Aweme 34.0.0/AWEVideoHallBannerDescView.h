@interface AWEVideoHallBannerDescView : UIView
@property (nonatomic) AWEVideoHallBlockItem blockItem;
@property (nonatomic) UIStackView stackView;
@property (nonatomic) DUXTextTag videoTag;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
- (id)videoTag;
- (void)setVideoTag:;
- (void)setBlockItem:;
- (void)configWithBlockItem:;
- (id)blockItem;
- (void)setCornerMarkLabelWithAlbumModel:;
- (id)stackView;
- (void)setStackView:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)configureSubviews;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)configureConstraints;
@end
