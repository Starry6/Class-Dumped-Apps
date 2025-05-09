@interface AWEPOIUGCRateSelectShopBar : UIView
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIImageView arrowIcon;
@property (nonatomic) UIView lovelyLine;
@property (nonatomic) AWEPOIUGCRateSelectShopListView listView;
@property (nonatomic) NSString productId;
@property (nonatomic) NSDictionary selectivePoiBarParams;
@property (nonatomic) DitoGeneralContainerPageContext currentControllerCtx;
@property (nonatomic) UIView containerView;
@property (nonatomic) <AWEPOIUGCRateSelectShopBarDelegate> delegate;
@property (nonatomic) AWEPOIUGCRateSelectivePOIBarParamsModel barParamsModel;
- (id)arrowIcon;
- (void)setArrowIcon:;
- (void)updateWithName:;
- (void)didClickShop;
- (id)lovelyLine;
- (id)currentControllerCtx;
- (void)updateLovelyLineWithOffset:;
- (void)setCurrentControllerCtx:;
- (void)setSelectivePoiBarParams:;
- (id)selectivePoiBarParams;
- (id)barParamsModel;
- (void)setLovelyLine:;
- (id)delegate;
- (id)productId;
- (id)listView;
- (id)initWithFrame:;
- (id)containerView;
- (void)setListView:;
- (void)setContainerView:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setNameLabel:;
- (void)setupUI;
- (void)setProductId:;
+ (double)height;
@end
