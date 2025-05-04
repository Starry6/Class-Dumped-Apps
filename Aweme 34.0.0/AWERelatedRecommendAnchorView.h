@interface AWERelatedRecommendAnchorView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel anchorTextLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UIView separatorLine;
@property (nonatomic) double totalWidth;
@property (nonatomic) double iconWidth;
@property (nonatomic) BOOL isBorderStyle;
- (void)setupSubViews;
- (void)setTotalWidth:;
- (void)refreshWithModel:;
- (id)anchorTextLabel;
- (void)setAnchorTextLabel:;
- (void)updateIconSize:;
- (void)setIsBorderStyle:;
- (BOOL)isBorderStyle;
- (id)init;
- (void)setDescriptionLabel:;
- (double)iconWidth;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)descriptionLabel;
- (void)setIconImageView:;
- (double)totalWidth;
- (void)setIconWidth:;
- (id)separatorLine;
- (void)setSeparatorLine:;
+ (double)originIconHeight;
@end
