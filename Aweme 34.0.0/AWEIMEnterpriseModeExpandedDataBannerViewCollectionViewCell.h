@interface AWEIMEnterpriseModeExpandedDataBannerViewCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEIMEnterpriseModeDataBannerStatsItemCellViewModel cellViewModel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UIStackView bottomStackView;
@property (nonatomic) AWEIMEnterpriseModeExpandedDataBannerTagView statsTag;
@property (nonatomic) <AWEIMEnterpriseModeExpandedDataBannerViewCollectionViewCellDelegate> delegate;
- (void)configWithViewModel:;
- (id)cellViewModel;
- (void)setCellViewModel:;
- (void)__setupUI;
- (id)statsTag;
- (void)setStatsTag:;
- (id)delegate;
- (id)initWithFrame:;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (id)subtitleLabel;
- (id)bottomStackView;
- (void)setBottomStackView:;
+ (id)identifier;
@end
