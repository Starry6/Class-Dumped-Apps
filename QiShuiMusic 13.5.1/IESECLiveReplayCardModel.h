@interface IESECLiveReplayCardModel : MTLModel
@property (nonatomic) IESECLiveGoodsModel goodsModel;
@property (nonatomic) NSNumber explainStartTime;
@property (nonatomic) NSNumber explainEndTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)explainEndTime;
- (id)explainStartTime;
- (id)goodsModel;
- (void)setExplainEndTime:;
- (void)setExplainStartTime:;
- (void)setGoodsModel:;
- (void).cxx_destruct;
+ (id)goodsModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
