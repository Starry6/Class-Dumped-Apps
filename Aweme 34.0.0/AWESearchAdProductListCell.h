@interface AWESearchAdProductListCell : AWESearchCachalotECommerceBaseCell
@property (nonatomic) AWEDoubleColumnSearchMerchandiseModel searchMerchandiseModel;
@property (nonatomic) AWESearchAdProductView adProductView;
@property (nonatomic) UIView productInfoView;
@property (nonatomic) UILabel productTitle;
@property (nonatomic) UIButton adLearnMoreButton;
@property (nonatomic) BOOL isFromECommerce;
- (long long)currentThemeStyle;
- (void)configWithModel:;
- (id)productTitle;
- (void)setProductTitle:;
- (void)configUI;
- (BOOL)isFromECommerce;
- (void)setIsFromECommerce:;
- (id)searchMerchandiseModel;
- (void)trackAdOtherShow;
- (void)recordDidEndDisplaying;
- (void)setSearchMerchandiseModel:;
- (void)addCornerRadiusWithView:corners:cornerRadii:;
- (id)productInfoView;
- (id)adLearnMoreButton;
- (id)adProductView;
- (void)p_configUIInfoModel;
- (void)p_configProduct;
- (void)trackAdEndorseUserCard:refer:;
- (void)openPageWithSearchShopInfo;
- (void)learnMoreButtonTap;
- (void)setAdProductView:;
- (void)setProductInfoView:;
- (void)setAdLearnMoreButton:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (id)componentView;
+ (double)heightForModel:containerWidth:;
+ (id)identifier;
@end
