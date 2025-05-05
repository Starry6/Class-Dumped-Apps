@interface IESECGoodsRecommendResponse : IESECBaseApiModel
@property (nonatomic) NSArray recommendItemModelArray;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString recommendInfoString;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSDictionary extraDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)extraDict;
- (id)recommendInfoString;
- (id)recommendItemModelArray;
- (void)setExtraDict:;
- (void)setRecommendInfoString:;
- (void)setRecommendItemModelArray:;
- (id)cursor;
- (void)setHasMore:;
- (void)setCursor:;
- (void).cxx_destruct;
- (BOOL)hasMore;
+ (id)recommendItemModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
