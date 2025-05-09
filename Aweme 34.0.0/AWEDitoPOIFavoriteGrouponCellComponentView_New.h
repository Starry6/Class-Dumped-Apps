@interface AWEDitoPOIFavoriteGrouponCellComponentView_New : DitoComponentView
@property (nonatomic) AWEDitoPOIFavoriteGrouponCellComponentViewModel_New viewModel;
@property (nonatomic) AWEDitoPOIFavoritePageContext context;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UIImageView playIcon;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) YYLabel invalidLabel;
@property (nonatomic) UIImageView houseIconView;
@property (nonatomic) UILabel poiNameLabel;
@property (nonatomic) UILabel distanceLabel;
@property (nonatomic) AWEPOITagsView tagsView;
@property (nonatomic) UILabel pricePrefixLabel;
@property (nonatomic) UILabel pricePrefixSymbolLabel;
@property (nonatomic) UILabel priceLabel;
@property (nonatomic) UILabel priceSuffixLabel;
@property (nonatomic) UILabel timesLabel;
@property (nonatomic) UILabel originPriceLabel;
@property (nonatomic) YYLabel discountTag;
@property (nonatomic) UILabel soldCountLabel;
@property (nonatomic) UIView rightItemsContainer;
@property (nonatomic) UIView subtitleContainer;
@property (nonatomic) UIView priceContainer;
@property (nonatomic) UILabel collectTimeLabel;
@property (nonatomic) YYLabel cornerLabel;
@property (nonatomic) YYLabel arrivedLabel;
@property (nonatomic) YYLabel priceReductionLabel;
@property (nonatomic) YYLabel flashSaleLabel;
@property (nonatomic) NSTimer flashSaleTimer;
@property (nonatomic) CAShapeLayer bgShapeLayer;
@property (nonatomic) BOOL shouldShowLargeMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)tagsView;
- (void)setTagsView:;
- (id)playIcon;
- (void)setPlayIcon:;
- (void)updateViewModel:;
- (void)setOriginPriceLabel:;
- (id)originPriceLabel;
- (id)invalidLabel;
- (void)setInvalidLabel:;
- (void)setPriceSuffixLabel:;
- (id)priceSuffixLabel;
- (id)pricePrefixLabel;
- (void)setPricePrefixLabel:;
- (void)setPoiNameLabel:;
- (id)poiNameLabel;
- (void)setCornerLabel:;
- (id)cornerLabel;
- (id)bgShapeLayer;
- (void)setBgShapeLayer:;
- (double)largeModeSizeWithFont:;
- (void)setShouldShowLargeMode:;
- (BOOL)shouldShowLargeMode;
- (id)collectTimeLabel;
- (void)updatePriceReductionTag;
- (void)updateArrivedTag;
- (id)rightItemsContainer;
- (double)largeModeWithMargin:;
- (id)arrivedLabel;
- (id)priceReductionLabel;
- (BOOL)tapGesture:inView:;
- (void)startBackgroundAnimation;
- (void)componentViewDidCompleteShow;
- (void)setRightItemsContainer:;
- (void)setCollectTimeLabel:;
- (void)setArrivedLabel:;
- (void)setPriceReductionLabel:;
- (id)pricePrefixSymbolLabel;
- (id)timesLabel;
- (id)soldCountLabel;
- (void)handleTapContainerView:;
- (void)setPricePrefixSymbolLabel:;
- (void)setTimesLabel:;
- (void)setSoldCountLabel:;
- (id)houseIconView;
- (id)discountTag;
- (void)updateFlashSaleTag;
- (id)priceContainer;
- (id)flashSaleLabel;
- (void)stopFlashSaleCountDown;
- (id)flashSaleTimer;
- (void)updateFlashSaleCountDown;
- (void)setFlashSaleTimer:;
- (void)setHouseIconView:;
- (void)setDiscountTag:;
- (void)setPriceContainer:;
- (void)setFlashSaleLabel:;
- (void)layoutSublayersOfLayer:;
- (void)dealloc;
- (void)prepareForReuse;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void)updateLayout;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)distanceLabel;
- (void)setDistanceLabel:;
- (void)setupUI;
- (void)themeDidChange;
- (id)priceLabel;
- (void)setPriceLabel:;
- (void)setSubtitleContainer:;
- (id)subtitleContainer;
+ (id)subtitleFont;
@end
