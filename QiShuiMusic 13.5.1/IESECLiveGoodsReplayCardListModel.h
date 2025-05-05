@interface IESECLiveGoodsReplayCardListModel : MTLModel
@property (nonatomic) NSNumber totalCount;
@property (nonatomic) NSArray productIdList;
@property (nonatomic) NSArray productReplayList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)productIdList;
- (id)productReplayList;
- (void)setProductIdList:;
- (void)setProductReplayList:;
- (id)totalCount;
- (void).cxx_destruct;
- (void)setTotalCount:;
+ (id)productIdListJSONTransformer;
+ (id)productReplayListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
