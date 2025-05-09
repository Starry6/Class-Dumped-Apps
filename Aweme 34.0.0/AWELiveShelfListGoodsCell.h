@interface AWELiveShelfListGoodsCell : UICollectionViewCell
@property (nonatomic) UIView backgroundContainerView;
@property (nonatomic) AWELiveShelfCellIconView iconView;
@property (nonatomic) UILabel poiTitleLabel;
@property (nonatomic) AWELiveShelfCellAddressView poiAddressView;
@property (nonatomic) UILabel deliveryLabel;
@property (nonatomic) UIStackView couponContainerView;
@property (nonatomic) AWELiveShelfCellSeckillView seckillView;
@property (nonatomic) UILabel salesLabel;
@property (nonatomic) AWELiveShelfCellPriceView priceView;
@property (nonatomic) UIButton actionBtn;
@property (nonatomic) AWELiveShelfCellViewModel viewModel;
@property (nonatomic) BOOL hasConfigCell;
@property (nonatomic) UIView poiInfoView;
@property (nonatomic) UIImageView poiInfoIcon;
@property (nonatomic) UILabel poiInfoLabel;
@property (nonatomic) BOOL isDull;
@property (nonatomic) UILabel salePointLabel;
@property (nonatomic) NSDictionary containerInfo;
@property (nonatomic) AWELiveShelfListGoodsModel model;
@property (nonatomic) @? cardClickedWithItemBlock;
@property (nonatomic) @? actionBtnClickedBlock;
@property (nonatomic) @? actionBtnClickedOnlyLogBlock;
@property (nonatomic) @? imageTrackBlock;
@property (nonatomic) @? cardHeightChangeBlock;
@property (nonatomic) q currentCardType;
@property (nonatomic) AWEPageContext context;
- (void)configWithViewModel:;
- (void)configWithModel:;
- (id)priceView;
- (void)setPriceView:;
- (void)setContainerInfo:;
- (void)setupContext:;
- (void)setSalesLabel:;
- (id)salesLabel;
- (id)actionBtn;
- (void)setActionBtn:;
- (id)poiTitleLabel;
- (id)poiInfoLabel;
- (void)setPoiTitleLabel:;
- (void)setPoiInfoLabel:;
- (void)actionBtnClicked:;
- (BOOL)isInSeckillStatus;
- (id)poiInfoView;
- (void)setPoiInfoView:;
- (id)actionBtnClickedBlock;
- (id)actionBtnClickedOnlyLogBlock;
- (void)setActionBtnClickedBlock:;
- (void)setActionBtnClickedOnlyLogBlock:;
- (id)imageTrackBlock;
- (void)setImageTrackBlock:;
- (id)cardHeightChangeBlock;
- (void)setCardHeightChangeBlock:;
- (BOOL)isShowPoiInfo;
- (long long)currentCardType;
- (void)setCurrentCardType:;
- (void)setCardClickedWithItemBlock:;
- (void)setHasConfigCell:;
- (id)poiAddressView;
- (id)deliveryLabel;
- (id)couponContainerView;
- (id)seckillView;
- (id)salePointLabel;
- (void)_updateBackgroundColorWithIsPink:;
- (void)setIsDull:;
- (void)_updateViewConstraintAsSingleShop;
- (void)_configSeckillViewWithModel:isWarmUp:;
- (id)_configRightListViewWithModel:;
- (void)_addRightViewsInCouponContainer:;
- (void)_updateViewConstraintAsMultipleShop;
- (void)updateActionBtnBackgroundColor;
- (void)_resetCouponContainerView;
- (BOOL)hasConfigCell;
- (void)setPoiAddressView:;
- (void)setDeliveryLabel:;
- (void)setCouponContainerView:;
- (void)setSeckillView:;
- (id)poiInfoIcon;
- (void)setPoiInfoIcon:;
- (BOOL)isDull;
- (void)setSalePointLabel:;
- (id)cardClickedWithItemBlock;
- (void)clickCardBackground;
- (id)createCouponViewWithTitle:content:;
- (id)createRightViewWithContent:;
- (void)setModel:;
- (id)viewModel;
- (id)initWithFrame:;
- (id)iconView;
- (id)model;
- (void)setIconView:;
- (void)setContext:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)context;
- (id)containerInfo;
- (void)setupSubviews;
- (id)backgroundContainerView;
- (void)setBackgroundContainerView:;
@end
