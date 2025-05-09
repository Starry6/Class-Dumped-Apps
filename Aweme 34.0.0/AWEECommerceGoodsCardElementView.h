@interface AWEECommerceGoodsCardElementView : UIView
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) UIImageView goodsImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIStackView eventTagContainer;
@property (nonatomic) UIStackView priceLabelContainer;
@property (nonatomic) IESECGoodsFeedActionButton actionButton;
@property (nonatomic) UIImageView breakLine;
@property (nonatomic) UIColor breakLineColor;
@property (nonatomic) UIImageView checkSignView;
@property (nonatomic) UIStackView serviceTagContainer;
@property (nonatomic) NSObject<AWEECGoodsCardDataControllerProtocol> goodsCardDataController;
@property (nonatomic) IESECGoodsDetailModel goodsDetail;
@property (nonatomic) CAGradientLayer backGroundGradientLayer;
@property (nonatomic) IESECGoodsBottomActionHelper actionHelper;
@property (nonatomic) IESECGoodsDetailParameters goodsParameters;
@property (nonatomic) UIViewController containerVC;
@property (nonatomic) <AWEECShoppingGoodsCardElementViewDelegate> delegate;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) NSString referString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLogExtraDict:;
- (id)referString;
- (void)setReferString:;
- (id)logExtraDict;
- (id)goodsCardDataController;
- (void)setContainerVC:;
- (id)containerVC;
- (id)goodsImageView;
- (void)setGoodsImageView:;
- (void)updateViewWithModel:;
- (void)setGoodsDetail:;
- (void)trackProductEntranceClick;
- (id)goodsParameters;
- (void)setGoodsParameters:;
- (void)setBreakLineColor:;
- (id)backGroundGradientLayer;
- (id)eventTagContainer;
- (id)priceLabelContainer;
- (id)breakLine;
- (id)checkSignView;
- (id)serviceTagContainer;
- (id)drawLineOfDashByImageView:;
- (void)updateViewWithGoodsCardDataModel:;
- (id)getGoodsDetailModelFromDictionary:;
- (void)updateTitleLabelAndEventTags;
- (void)updatePriceLabelAndSalesLabel;
- (void)updateServiceTagsWithServiceModelList:;
- (id)goodsDetail;
- (id)breakLineColor;
- (void)setEventTagContainer:;
- (void)setPriceLabelContainer:;
- (void)setBreakLine:;
- (void)setCheckSignView:;
- (void)setServiceTagContainer:;
- (void)setGoodsCardDataController:;
- (void)setBackGroundGradientLayer:;
- (void)setModel:;
- (id)init;
- (id)delegate;
- (void)setActionHelper:;
- (id)actionHelper;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)setupUI;
- (id)actionButton;
- (void)setActionButton:;
- (void)updateActionButton;
- (void)actionButtonAction;
@end
