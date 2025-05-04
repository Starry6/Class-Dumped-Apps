@interface AWEPlayInteractionGoodsElement : AWEPlayInteractionLeftElement
@property (nonatomic) UIView<AWEFeedGoodsElementProtocol> goodsInfoView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (id)getTrackParamsFromModel;
- (void)setGoodsInfoView:;
- (id)goodsInfoView;
- (void)transferToGoodsDetail;
- (void)viewDidLoad;
- (void).cxx_destruct;
+ (id)activateInfoWithContext:;
@end
