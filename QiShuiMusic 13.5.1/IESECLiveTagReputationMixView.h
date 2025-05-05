@interface IESECLiveTagReputationMixView : UIView
@property (nonatomic) UIImageView shopTagView;
@property (nonatomic) IESECButton reputationButton;
@property (nonatomic) IESECLiveGoodsListAuthorReputationModel reputationModel;
- (id)reputationModel;
- (void)setShopTagView:;
- (id)reputationButton;
- (void)setReputationButton:;
- (void)setReputationModel:;
- (id)shopTagView;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
