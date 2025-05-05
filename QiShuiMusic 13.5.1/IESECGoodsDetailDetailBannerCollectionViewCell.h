@interface IESECGoodsDetailDetailBannerCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) IESECTextWithIconElement model;
- (void)clickBannerToNextPage:;
- (void)configCellWithTextIconElementModel:needWholeWidth:;
- (id)model;
- (id)backgroundImageView;
- (void)setModel:;
- (id)iconView;
- (void)setIconView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)setBackgroundImageView:;
@end
