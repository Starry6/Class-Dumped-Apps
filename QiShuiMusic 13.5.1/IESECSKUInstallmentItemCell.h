@interface IESECSKUInstallmentItemCell : UICollectionViewCell
@property (nonatomic) UILabel installmentInfoLabel;
@property (nonatomic) UILabel commissionLabel;
@property (nonatomic) UILabel benefitLabel;
@property (nonatomic) UIView bgView;
- (id)commissionLabel;
- (id)benefitLabel;
- (id)installmentInfoLabel;
- (void)setBenefitLabel:;
- (void)setCommissionLabel:;
- (void)setInstallmentInfoLabel:;
- (void)updateTopRightLabelCorner;
- (void)updateWithModel:state:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)bgView;
- (void)setBgView:;
- (void)setupUI;
- (void)updateUIWithState:;
@end
