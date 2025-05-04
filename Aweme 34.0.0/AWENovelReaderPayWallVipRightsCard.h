@interface AWENovelReaderPayWallVipRightsCard : UIView
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel moreLabel;
@property (nonatomic) UIImageView rightArrow;
@property (nonatomic) UIView topMaskView;
@property (nonatomic) BDNovelVipPageData vipPageData;
@property (nonatomic) BOOL isDark;
- (id)vipPageData;
- (void)setVipPageData:;
- (id)initWithFrame:vipPageData:;
- (void)setIsDark:;
- (id)topMaskView;
- (void)setTopMaskView:;
- (void)setRightArrow:;
- (void)addIconViews;
- (BOOL)isDark;
- (id)init;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (id)backgroundImageView;
- (id)moreLabel;
- (void)setMoreLabel:;
- (void)setBackgroundImageView:;
- (id)rightArrow;
@end
