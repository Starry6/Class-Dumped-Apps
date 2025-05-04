@interface AWENearbyAdModel : AWEBaseApiModel
@property (nonatomic) q indexToInsert;
@property (nonatomic) AWENearByOriginalAdModel originAdInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)originAdInfo;
- (void)setOriginAdInfo:;
- (long long)indexToInsert;
- (void)setIndexToInsert:;
- (void).cxx_destruct;
+ (id)originAdInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
