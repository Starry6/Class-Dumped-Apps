@interface IESECGoodsDetailDetailTableItemView : UIView
@property (nonatomic) IESECUIImageView logoImageView;
@property (nonatomic) UILabel headerLabel;
@property (nonatomic) UILabel mainContentLabel;
@property (nonatomic) IESECGoodsDetailDetailTableQualificationView qualificationView;
@property (nonatomic) UIView backgroundView;
- (id)mainContentLabel;
- (id)qualificationView;
- (void)setMainContentLabel:;
- (void)setQualificationView:;
- (void)updateContentWithTableItemModel:headerWidth:;
- (id)backgroundView;
- (id)init;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (id)headerLabel;
- (void)setHeaderLabel:;
- (id)logoImageView;
- (void)setLogoImageView:;
+ (double)certificationHeightWithContentModel:;
+ (double)heightWithContentModel:headerWidth:;
@end
