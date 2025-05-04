@interface AWESocialUserItemResponseModel : AWEBaseApiModel
@property (nonatomic) q itemModelLevel;
@property (nonatomic) NSArray userItemList;
- (long long)itemModelLevel;
- (void)setItemModelLevel:;
- (id)userItemList;
- (void)setUserItemList:;
- (void).cxx_destruct;
+ (id)userItemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
