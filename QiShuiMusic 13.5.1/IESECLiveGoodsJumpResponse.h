@interface IESECLiveGoodsJumpResponse : NSObject
@property (nonatomic) IESECLiveGoodsModel goodsModel;
@property (nonatomic) q actionType;
@property (nonatomic) NSMutableDictionary extraInfo;
- (id)goodsModel;
- (void)setExtraInfo:;
- (void)setGoodsModel:;
- (long long)actionType;
- (void)setActionType:;
- (void).cxx_destruct;
- (id)extraInfo;
@end
