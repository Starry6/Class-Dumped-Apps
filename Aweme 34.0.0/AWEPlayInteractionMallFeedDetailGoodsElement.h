@interface AWEPlayInteractionMallFeedDetailGoodsElement : AWEPlayInteractionLeftElement
@property (nonatomic) UIView goodsCardContainer;
@property (nonatomic) UIView<AWEMallFeedDetailGoodsElementProtocol> goodsCard;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)setGoodsCard:;
- (id)goodsCard;
- (id)getTrackParamsFromModel;
- (void)requesetImpression;
- (id)goodsCardContainer;
- (void)setGoodsCardContainer:;
- (void)setData:;
- (void).cxx_destruct;
+ (id)activateInfoWithContext:;
@end
