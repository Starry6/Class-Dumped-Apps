@interface IESECFeedRecommendResponseModel : IESECBaseApiModel
@property (nonatomic) NSArray items;
@property (nonatomic) Q cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString requestLogID;
@property (nonatomic) NSDictionary extraData;
- (id)requestLogID;
- (unsigned long long)cursor;
- (id)items;
- (void)setHasMore:;
- (void)setCursor:;
- (void)setItems:;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (void)setExtraData:;
- (id)extraData;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
