@interface AWEClassroomModel.ClassroomItemModel : MTLModel
@property (nonatomic) q itemId;
@property (nonatomic) q itemType;
@property (nonatomic) _TtC17AWEClassroomModel19ClassroomGoodsModel goods;
- (id)goods;
- (void)setGoods:;
- (long long)itemType;
- (id)initWithDictionary:error:;
- (void)setItemType:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (long long)itemId;
- (void)setItemId:;
+ (id)goodsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
