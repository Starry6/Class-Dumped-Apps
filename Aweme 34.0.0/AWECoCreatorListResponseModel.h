@interface AWECoCreatorListResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray coCreatorModelList;
- (id)coCreatorModelList;
- (void)setCoCreatorModelList:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)coCreatorModelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
