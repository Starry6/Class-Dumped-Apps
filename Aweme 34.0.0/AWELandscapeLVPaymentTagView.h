@interface AWELandscapeLVPaymentTagView : UIView
@property (nonatomic) UIView titleContainerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UIView tagBackgroundView;
@property (nonatomic) UILabel tagLabel;
- (id)tagLabel;
- (void)setTagLabel:;
- (void)setTagBackgroundView:;
- (id)tagBackgroundView;
- (void)addPanelTopPaymentTagIfNeeded:;
- (void)setupTopTitle:subtitle:albumInfo:episodePageType:;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)titleContainerView;
- (void)setTitleContainerView:;
@end
