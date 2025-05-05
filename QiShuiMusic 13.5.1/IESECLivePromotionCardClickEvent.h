@interface IESECLivePromotionCardClickEvent : NSObject
@property (nonatomic) q areaType;
@property (nonatomic) IESECLiveGoodsViewModel goodsViewModel;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) IESECBTMModel btmModel;
@property (nonatomic) @? completion;
- (id)btmModel;
- (id)goodsViewModel;
- (void)setBtmModel:;
- (void)setExtraInfo:;
- (void)setGoodsViewModel:;
- (id)completion;
- (void)setCompletion:;
- (void).cxx_destruct;
- (id)extraInfo;
- (long long)areaType;
- (void)setAreaType:;
@end
