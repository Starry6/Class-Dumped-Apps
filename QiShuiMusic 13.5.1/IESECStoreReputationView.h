@interface IESECStoreReputationView : UIStackView
@property (nonatomic) UIImageView brandImageView;
@property (nonatomic) IESECStoreHeartDiamondCrownView heartDiamondCrownView;
@property (nonatomic) IESECStoreReputationScoreView scoreView;
@property (nonatomic) IESECStoreSelfSupportView selfSupportView;
@property (nonatomic) IESECShopSellingPointTagView sellingPointTagView;
@property (nonatomic) UILabel saleCountLabel;
- (id)selfSupportView;
- (id)brandImageView;
- (id)heartDiamondCrownView;
- (id)saleCountLabel;
- (id)scoreView;
- (id)sellingPointTagView;
- (void)setBrandImageView:;
- (void)setHeartDiamondCrownView:;
- (void)setSaleCountLabel:;
- (void)setScoreView:;
- (void)setSelfSupportView:;
- (void)setSellingPointTagView:;
- (void)updateReputationViewWithModel:;
- (void)updateReputationViewWithPercent:;
- (void)updateReputationViewWithStyle:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupViews;
@end
