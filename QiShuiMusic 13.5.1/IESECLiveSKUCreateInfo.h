@interface IESECLiveSKUCreateInfo : NSObject
@property (nonatomic) q sceneType;
@property (nonatomic) BOOL isAddToCart;
@property (nonatomic) {CGSize=dd} wholeSize;
@property (nonatomic) NSNumber panelHeightPercent;
@property (nonatomic) NSString maskBgColor;
@property (nonatomic) IESECLiveContext liveContext;
@property (nonatomic) IESECLiveGoodsModel goodsModel;
@property (nonatomic) NSString ecomEntranceFormStr;
@property (nonatomic) NSString liveListChannel;
@property (nonatomic) NSString skuFrom;
@property (nonatomic) NSString listCartBtnCenter;
@property (nonatomic) NSString cellCartBtnCenter;
@property (nonatomic) NSDictionary rawExtraInfo;
@property (nonatomic) NSString creativeID;
- (void)setIsAddToCart:;
- (void)setLiveContext:;
- (id)skuFrom;
- (id)liveListChannel;
- (void)setMaskBgColor:;
- (id)cellCartBtnCenter;
- (id)ecomEntranceFormStr;
- (id)goodsModel;
- (BOOL)isAddToCart;
- (id)listCartBtnCenter;
- (id)liveContext;
- (id)maskBgColor;
- (id)panelHeightPercent;
- (id)rawExtraInfo;
- (void)setCellCartBtnCenter:;
- (void)setCreativeID:;
- (void)setEcomEntranceFormStr:;
- (void)setGoodsModel:;
- (void)setListCartBtnCenter:;
- (void)setLiveListChannel:;
- (void)setPanelHeightPercent:;
- (void)setRawExtraInfo:;
- (void)setSkuFrom:;
- (void)setWholeSize:;
- (id)wholeSize;
- (id)init;
- (void).cxx_destruct;
- (long long)sceneType;
- (void)setSceneType:;
- (id)creativeID;
@end
