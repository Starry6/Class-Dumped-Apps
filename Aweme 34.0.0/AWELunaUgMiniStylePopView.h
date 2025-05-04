@interface AWELunaUgMiniStylePopView : AWELunaUgPopView
@property (nonatomic) UIImageView songCoverImageView;
@property (nonatomic) UILabel topLabel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIView titleContainerView;
@property (nonatomic) UIStackView btnStackView;
- (void)p_didClickCover;
- (id)btnStackView;
- (void)setBtnStackView:;
- (id)songCoverImageView;
- (void)p_didClickMainButton;
- (void)setSongCoverImageView:;
- (void)p_didClickMainLabel;
- (void)p_didClickSubTitle;
- (id)initWithConfig:;
- (void)updateWithConfig:;
- (void)setup;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)titleContainerView;
- (void)setSubTitleLabel:;
- (void)setTopLabel:;
- (id)subTitleLabel;
- (id)topLabel;
- (void)setTitleContainerView:;
@end
