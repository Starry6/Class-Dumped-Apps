@interface AWEEECOMIMRateEmotionOldCell : UICollectionViewCell
@property (nonatomic) BDImageView iconView;
@property (nonatomic) UILabel nameLabel;
- (id)nameLabelColorWithModel:isStack:;
- (id)nameLabelFontWithModel:isStack:;
- (id)iconUrlWithModel:isStack:;
- (void)configWithCellModel:rateServiceModel:animateEnable:iconSize:completion:;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
+ (id)rateNameNormalColor;
+ (id)rateNameSelectColor;
+ (id)rateNameNormalFont;
+ (id)rateNameSelectedFont;
+ (id)identifier;
@end
