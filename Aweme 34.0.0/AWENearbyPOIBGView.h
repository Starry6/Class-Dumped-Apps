@interface AWENearbyPOIBGView : UIView
@property (nonatomic) <AWENearbyPOIInfoCardModel> cardModel;
@property (nonatomic) UIImageView adaptedBGImgView;
@property (nonatomic) NSArray headerImageModelList;
@property (nonatomic) UIColor maskBGColor;
@property (nonatomic) BOOL headerSetupOnce;
@property (nonatomic) AWENearbyPOIDanmakuView danmakuView;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UITapGestureRecognizer headImgGesture;
@property (nonatomic) AWEDCardView lynxBgView;
@property (nonatomic) <AWENearbyPOIInfoCardMessage> routeDelegate;
@property (nonatomic) UIView bgMaskView;
@property (nonatomic) {CGSize=dd} viewSize;
@property (nonatomic) UIScrollView outScrollview;
@property (nonatomic) AWENearbyImgAutoScrollView imageScrollView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cardModel;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (void)setCardModel:;
- (void)setDanmakuView:;
- (id)danmakuView;
- (void)configViewsWithModel:size:;
- (id)adaptedBGImgView;
- (void)setOutScrollview:;
- (id)outScrollview;
- (id)headImgGesture;
- (void)showDetailWithMethod:bulletType:;
- (void)setHeadImgGesture:;
- (void)configBGViewWithModel:size:;
- (id)getAutoScrollPlayImagesWithCardModel:size:;
- (void)setHeaderImageModelList:;
- (BOOL)headerSetupOnce;
- (void)setHeaderSetupOnce:;
- (id)headerImageModelList;
- (id)lynxBgView;
- (id)createHeadImgViewModelWithUrl:size:showLoading:webImgeLoadCompleted:;
- (void)addMaskLayerWithUIView:withSize:;
- (id)gradientLayerWithMasking:;
- (id)routeDelegate;
- (id)lynxScene;
- (void)setRouteDelegate:;
- (void)setImageScrollView:;
- (void)setAdaptedBGImgView:;
- (id)maskBGColor;
- (void)setMaskBGColor:;
- (void)setLynxBgView:;
- (id)viewSize;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setViewSize:;
- (void)setupUI;
- (void)didEndDisplaying;
- (id)imageScrollView;
- (void)willDisplay;
+ (id)bgViewWithModel:size:;
@end
