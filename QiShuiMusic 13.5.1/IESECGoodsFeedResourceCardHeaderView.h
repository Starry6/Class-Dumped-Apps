@interface IESECGoodsFeedResourceCardHeaderView : UIView
@property (nonatomic) UIImageView headerTitleImageView;
@property (nonatomic) UILabel headerTitleLabel;
@property (nonatomic) UIImageView headerSubTitleImageView;
@property (nonatomic) UILabel headerSubTitleLabel;
@property (nonatomic) UIImageView headerLeftArrowView;
@property (nonatomic) UILabel headerLinkInfoLabel;
- (void)addSubviews;
- (void)buildShoppingMallHeaderViewWithModel:;
- (id)headerLeftArrowView;
- (id)headerLinkInfoLabel;
- (id)headerSubTitleImageView;
- (id)headerSubTitleLabel;
- (id)headerTitleImageView;
- (void)setHeaderLeftArrowView:;
- (void)setHeaderLinkInfoLabel:;
- (void)setHeaderSubTitleImageView:;
- (void)setHeaderSubTitleLabel:;
- (void)setHeaderTitleImageView:;
- (void)setupUIWithModel:;
- (id)init;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)headerTitleLabel;
- (void)setHeaderTitleLabel:;
@end
