@interface AWEEmojiStoreSeriesRecommendResourcesInfo : MTLModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber nextCursor;
@property (nonatomic) NSArray recommendResources;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)nextCursor;
- (void)setNextCursor:;
- (id)recommendResources;
- (void)setRecommendResources:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)recommendResourcesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
