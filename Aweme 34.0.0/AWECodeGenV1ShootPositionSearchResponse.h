@interface AWECodeGenV1ShootPositionSearchResponse : AWEBaseResponseModel
@property (nonatomic) NSArray positionListModelArray;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q nextCursor;
- (long long)nextCursor;
- (void)setNextCursor:;
- (id)positionListModelArray;
- (void)setPositionListModelArray:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
