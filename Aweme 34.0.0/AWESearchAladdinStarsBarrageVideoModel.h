@interface AWESearchAladdinStarsBarrageVideoModel : AWEBaseApiModel
@property (nonatomic) NSArray itemList;
@property (nonatomic) AWEAwemeModel videoModel;
- (id)videoModel;
- (void).cxx_destruct;
- (id)itemList;
- (void)setItemList:;
+ (id)itemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
