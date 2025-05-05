@interface IESECSKUNewInsatllmentItemCell : UICollectionViewCell
@property (nonatomic) UILabel installmentInfoLabel;
@property (nonatomic) UILabel commissionLabel;
@property (nonatomic) UIView whiteBGView;
@property (nonatomic) UILabel benefitLabel;
@property (nonatomic) UIView bgView;
- (id)commissionLabel;
- (void)setWhiteBGView:;
- (id)benefitLabel;
- (id)installmentInfoLabel;
- (void)setBenefitLabel:;
- (void)setCommissionLabel:;
- (void)setInstallmentInfoLabel:;
- (void)updateUIWithModel:State:atmosphereColor:;
- (void)updateWithModel:state:atmosphereColor:;
- (id)whiteBGView;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)bgView;
- (void)setBgView:;
- (void)setupUI;
+ (double)calCellWidthWithModel:;
@end
