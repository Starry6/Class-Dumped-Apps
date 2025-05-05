@interface IESLiveWalletRedeemUnitCell : UICollectionViewCell
@property (nonatomic) UILabel desLabel;
@property (nonatomic) UILabel priceLabel;
@property (nonatomic) IESLiveWalletGradientView promotionsContainer;
@property (nonatomic) UILabel promotionsLabel;
@property (nonatomic) IESLiveRedeemModel model;
- (id)promotionsLabel;
- (id)desLabel;
- (id)p_diamondFromModel:;
- (id)p_priceFromModel:;
- (id)promotionsContainer;
- (void)setDesLabel:;
- (void)setPromotionsContainer:;
- (void)setPromotionsLabel:;
- (id)model;
- (void)setModel:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateWithModel:;
- (id)priceLabel;
- (void)setPriceLabel:;
+ (id)sizeOfCell;
@end
