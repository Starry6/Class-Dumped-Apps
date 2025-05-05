@interface IESECLiveGoodsJumpRequest : NSObject
@property (nonatomic) NSString ecomEntranceForm;
@property (nonatomic) IESECLiveGoodsModel goodsModel;
@property (nonatomic) q clickStyle;
@property (nonatomic) NSMutableDictionary extraInfo;
@property (nonatomic) IESECBTMModel btmModel;
@property (nonatomic) <IESECLiveGoodsJumpHandlerDelegate> delegate;
- (id)btmModel;
- (long long)clickStyle;
- (id)ecomEntranceForm;
- (id)goodsModel;
- (void)setBtmModel:;
- (void)setClickStyle:;
- (void)setEcomEntranceForm:;
- (void)setExtraInfo:;
- (void)setGoodsModel:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)extraInfo;
@end
